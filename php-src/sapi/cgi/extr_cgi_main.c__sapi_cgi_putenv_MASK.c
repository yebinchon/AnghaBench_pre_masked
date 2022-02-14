
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 size_t FUNC_4 (char*,size_t,char*,char*,...) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(char *VAR_0, size_t VAR_1, char *VAR_2)
{

 size_t VAR_3;
 char *VAR_4;
 VAR_3 = VAR_1 + (VAR_2 ? FUNC_5(VAR_2) : 0) + sizeof("=") + 2;
 VAR_4 = (char *) FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0)) {
  return FUNC_0(VAR_0);
 }


 if (VAR_2) {
  VAR_3 = FUNC_4(VAR_4, VAR_3 - 1, "%s=%s", VAR_0, VAR_2);
  FUNC_2(VAR_4);
 }


 if (!VAR_2) {
  VAR_3 = FUNC_4(VAR_4, VAR_3 - 1, "%s=", VAR_0);
  FUNC_2(VAR_4);
 }

 return FUNC_0(VAR_0);
}
