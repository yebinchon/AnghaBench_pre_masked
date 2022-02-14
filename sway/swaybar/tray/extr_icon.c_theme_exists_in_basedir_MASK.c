
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,char*,char*,char*) ;

__attribute__((used)) static bool FUNC_4(char *VAR_0, char *VAR_1) {
 size_t VAR_2 = FUNC_3(((void*)0), 0, "%s/%s", VAR_1, VAR_0) + 1;
 char *VAR_3 = FUNC_2(VAR_2);
 FUNC_3(VAR_3, VAR_2, "%s/%s", VAR_1, VAR_0);
 bool VAR_4 = FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 return VAR_4;
}
