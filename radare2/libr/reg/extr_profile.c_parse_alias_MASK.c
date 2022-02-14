
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RReg ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int,char*) ;

__attribute__((used)) static const char *FUNC_2(RReg *VAR_0, char **VAR_1, const int VAR_2) {
 if (VAR_2 == 2) {
  int VAR_3 = FUNC_0 (VAR_1[0] + 1);
  return FUNC_1 (VAR_0, VAR_3, VAR_1[1])
   ? ((void*)0)
   : "Invalid alias";
 }
 return "Invalid syntax";
}
