
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;

__attribute__((used)) static char* FUNC_1(char *VAR_0) {
 char *VAR_1 = ((void*)0);
 if ((VAR_1 = FUNC_0 (VAR_0, "=type")) ||
  (VAR_1 = FUNC_0 (VAR_0, "=struct")) ||
  (VAR_1 = FUNC_0 (VAR_0, "=union")) ||
  (VAR_1 = FUNC_0 (VAR_0, "=enum")) ||
  (VAR_1 = FUNC_0 (VAR_0, "=typedef")) ||
  (VAR_1 = FUNC_0 (VAR_0, "=func"))) {
  return VAR_1;
 }
 return ((void*)0);
}
