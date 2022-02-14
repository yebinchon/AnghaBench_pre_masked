
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RAnalOp ;


 int FUNC_0 (char*,int,char const*) ;

__attribute__((used)) static void FUNC_1 (RAnalOp *VAR_0, ut8 VAR_1, const char *VAR_2) {
 if (VAR_1 < 0x80) {
  FUNC_0 ("_idata,%d,+,%s=[1],", VAR_1, VAR_2);
 } else {
  FUNC_0 ("_sfr,%d,+,%s=[1],", VAR_1, VAR_2);
 }
}
