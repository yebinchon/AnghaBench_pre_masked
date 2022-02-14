
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAsm ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static inline int FUNC_2(RAsm *VAR_0, char *VAR_1) {
 if (!FUNC_1 (VAR_0, VAR_1)) {
  FUNC_0 ("Error: Unknown plugin\n");
  return -1;
 }
 return 0;
}
