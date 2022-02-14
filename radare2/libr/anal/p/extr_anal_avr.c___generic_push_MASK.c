
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAnalOp ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_0, int VAR_1) {
 FUNC_0 ("sp,_ram,+,");
 if (VAR_1 > 1) {
  FUNC_0 ("-%d,+,", VAR_1 - 1);
 }
 FUNC_0 ("=[%d],", VAR_1);
 FUNC_0 ("-%d,sp,+=,", VAR_1);
}
