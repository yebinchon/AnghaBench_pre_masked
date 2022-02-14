
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,int *,int) ;
 char* FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static char *FUNC_7 (const char *VAR_1) {
 char VAR_2[4096] = {0};
 if (VAR_1) {
  FUNC_3 (VAR_0, "%s\n", VAR_1);
 }
 int VAR_3 = 1000000;
 char *VAR_4 = ((void*)0);
 FUNC_2 (VAR_0, 1, VAR_3, 0);
 while (1) {
  FUNC_1 (VAR_2, 0, sizeof (VAR_2));
  FUNC_4 (VAR_0, (ut8*)VAR_2, sizeof (VAR_2) - 1);
  char *VAR_5 = FUNC_6 (VAR_2, "Wine-dbg>");
  if (VAR_5) {
   *VAR_5 = 0;
   return FUNC_5 (VAR_4, VAR_2);
  }
  VAR_4 = FUNC_5 (VAR_4, VAR_2);
 }
 FUNC_0 (VAR_4);
 return ((void*)0);
}
