
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct label {char* name; TYPE_2__* ref; struct label* next; } ;
struct TYPE_4__ {int done; } ;
struct TYPE_3__ {int line; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,int,int,char*) ;
 scalar_t__ FUNC_3 (unsigned char const) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6 (struct label *VAR_5, const char **VAR_6, struct label **VAR_7,
      struct label **VAR_8, int VAR_9)
{
  struct label *VAR_10;
  const char *VAR_11;
  unsigned VAR_12;
  *VAR_6 = FUNC_1 (*VAR_6);
  for (VAR_11 = *VAR_6; FUNC_3 ((const unsigned char)*VAR_11) || *VAR_11 == '_' || *VAR_11 == '.'; ++VAR_11)
    {
    }
  VAR_12 = VAR_11 - *VAR_6;
  for (VAR_10 = VAR_5; VAR_10; VAR_10 = VAR_10->next)
    {
      unsigned VAR_13, VAR_14;
      int VAR_15;
      VAR_13 = FUNC_4 (VAR_10->name);
      VAR_14 = VAR_13 < VAR_12 ? VAR_13 : VAR_12;
      VAR_15 = FUNC_5 (VAR_10->name, *VAR_6, VAR_14);
      if (VAR_15 > 0 || (VAR_15 == 0 && VAR_13 > VAR_14))
 {
   if (VAR_9)
     *VAR_6 = VAR_11;
   return 0;
 }
      if (VAR_15 < 0 || VAR_12 > VAR_14)
 {
   if (VAR_8)
     *VAR_8 = VAR_10;
   continue;
 }
      *VAR_6 = VAR_11;

      if (VAR_10->ref)
 {
   FUNC_0 (VAR_10->ref, 1);
   if (!VAR_10->ref->done)
     {



       if (VAR_4 >= 6)
  FUNC_2 (VAR_3,
    "%5d (0x%04x): returning invalid label %s.\n",
    VAR_2[VAR_1].line, VAR_0, VAR_10->name);
       *VAR_7 = VAR_10;
       return 0;
     }
 }
      *VAR_7 = VAR_10;
      return 1;
    }
  if (VAR_9)
    *VAR_6 = VAR_11;
  return 0;
}
