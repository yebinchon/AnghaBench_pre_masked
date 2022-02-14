
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAsm ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static inline int FUNC_3(RAsm *VAR_0, char *VAR_1) {
 if (!(FUNC_1 (VAR_0, FUNC_2 (((void*)0), VAR_1)))) {
  FUNC_0 ("Error: Unsupported value for .bits.\n");
  return -1;
 }
 return 0;
}
