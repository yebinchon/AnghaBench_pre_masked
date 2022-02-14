
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Instruction ;
typedef int FuncState ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3 (FuncState *VAR_2, int VAR_3) {
  for (; VAR_3 != VAR_0; VAR_3 = FUNC_1(VAR_2, VAR_3)) {
    Instruction VAR_4 = *FUNC_2(VAR_2, VAR_3);
    if (FUNC_0(VAR_4) != VAR_1) return 1;
  }
  return 0;
}
