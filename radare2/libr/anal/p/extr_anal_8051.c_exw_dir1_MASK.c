
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RAnalOp ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_0, ut8 VAR_1) {
 if (VAR_1 < 0x80) {
  FUNC_0 ("_idata,%d,+,=[1],", VAR_1);
 } else {
  FUNC_0 ("_sfr,%d,+,=[1],", VAR_1);
 }
}
