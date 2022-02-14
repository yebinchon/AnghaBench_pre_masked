
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const**,int,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *,char const*,int ) ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static int FUNC_10(const char *VAR_2, const char **VAR_3, int VAR_4) {
 char *VAR_5, *VAR_6;
 VAR_1 = FUNC_7 (((void*)0), VAR_2, 0);
 if (!VAR_1 || !FUNC_4 (VAR_1)) {
  FUNC_0 ("Cannot create database\n");
  return 1;
 }
 FUNC_2 (VAR_1, VAR_3, VAR_4, '=');
 FUNC_3 (VAR_1, VAR_0);
 for (; (VAR_5 = FUNC_8 (((void*)0)));) {
  if ((VAR_6 = FUNC_9 (VAR_5, '='))) {
   *VAR_6++ = 0;
   FUNC_6 (VAR_1, VAR_5, VAR_6);
  }
  FUNC_1 (VAR_5);
 }
 FUNC_5 (VAR_1);
 return 0;
}
