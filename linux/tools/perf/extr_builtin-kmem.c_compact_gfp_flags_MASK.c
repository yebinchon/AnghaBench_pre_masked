
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* compact; int original; } ;


 size_t ARRAY_SIZE (TYPE_1__*) ;
 int free (char*) ;
 TYPE_1__* gfp_compact_table ;
 size_t max_gfp_len ;
 char* realloc (char*,scalar_t__) ;
 int strcat (char*,char const*) ;
 scalar_t__ strcmp (int ,char*) ;
 int strcpy (char*,char const*) ;
 char* strdup (char*) ;
 scalar_t__ strlen (char const*) ;
 char* strtok_r (char*,char*,char**) ;

__attribute__((used)) static char *compact_gfp_flags(char *gfp_flags)
{
 char *orig_flags = strdup(gfp_flags);
 char *new_flags = ((void*)0);
 char *str, *pos = ((void*)0);
 size_t len = 0;

 if (orig_flags == ((void*)0))
  return ((void*)0);

 str = strtok_r(orig_flags, "|", &pos);
 while (str) {
  size_t i;
  char *new;
  const char *cpt;

  for (i = 0; i < ARRAY_SIZE(gfp_compact_table); i++) {
   if (strcmp(gfp_compact_table[i].original, str))
    continue;

   cpt = gfp_compact_table[i].compact;
   new = realloc(new_flags, len + strlen(cpt) + 2);
   if (new == ((void*)0)) {
    free(new_flags);
    free(orig_flags);
    return ((void*)0);
   }

   new_flags = new;

   if (!len) {
    strcpy(new_flags, cpt);
   } else {
    strcat(new_flags, "|");
    strcat(new_flags, cpt);
    len++;
   }

   len += strlen(cpt);
  }

  str = strtok_r(((void*)0), "|", &pos);
 }

 if (max_gfp_len < len)
  max_gfp_len = len;

 free(orig_flags);
 return new_flags;
}
