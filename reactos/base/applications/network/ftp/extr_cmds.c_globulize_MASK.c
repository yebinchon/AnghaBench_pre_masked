
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (char const*) ;
 char* VAR_1 ;
 int FUNC_4 (char*,char const*,char*) ;
 int VAR_2 ;

int FUNC_5(const char **VAR_3)
{
 char **VAR_4;

 if (!VAR_0)
  return (1);
 VAR_4 = FUNC_3(*VAR_3);
 if (VAR_1 != ((void*)0)) {
  FUNC_4("%s: %s\n", *VAR_3, VAR_1);
  (void) FUNC_1(VAR_2);
  if (VAR_4) {
   FUNC_0(VAR_4);
   FUNC_2((char *)VAR_4);
  }
  return (0);
 }
 if (VAR_4) {
  *VAR_3 = *VAR_4++;

  if (*VAR_4) {
   FUNC_0(VAR_4);
   FUNC_2((char *)VAR_4);
  }
 }
 return (1);
}
