
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* source_prefix; } ;





 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_2 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,char const*,char const*) ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (char**) ;

int FUNC_7(const char *VAR_4, const char *VAR_5,
    char **VAR_6)
{
 const char *VAR_7 = VAR_3.source_prefix;

 if (!VAR_7) {
  if (VAR_4[0] != '/' && VAR_5)

   VAR_7 = VAR_5;
  else {
   if (FUNC_0(VAR_4, VAR_1) == 0) {
    *VAR_6 = FUNC_4(VAR_4);
    return *VAR_6 ? 0 : -VAR_0;
   } else
    return -VAR_2;
  }
 }

 *VAR_6 = FUNC_1((FUNC_5(VAR_7) + FUNC_5(VAR_4) + 2));
 if (!*VAR_6)
  return -VAR_0;

 for (;;) {
  FUNC_2(*VAR_6, "%s/%s", VAR_7, VAR_4);

  if (FUNC_0(*VAR_6, VAR_1) == 0)
   return 0;

  if (!VAR_3.source_prefix) {

   FUNC_6(VAR_6);
   return -VAR_2;
  }

  switch (VAR_2) {
  case 130:
  case 129:
  case 128:
  case 131:
   VAR_4 = FUNC_3(++VAR_4, '/');
   if (!VAR_4) {
    FUNC_6(VAR_6);
    return -129;
   }
   continue;

  default:
   FUNC_6(VAR_6);
   return -VAR_2;
  }
 }
}
