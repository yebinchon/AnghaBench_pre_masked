
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RAnalOp ;
typedef int RAnal ;


 int FUNC_0 (int *,int *,int ,int const*) ;
 int FUNC_1 (int *,int *,int ,int const*) ;
 int FUNC_2 (int *,int *,int ,int const*) ;

__attribute__((used)) static void FUNC_3 (RAnal *VAR_0, RAnalOp *VAR_1, ut64 VAR_2, const ut8 *VAR_3) {
 switch ((VAR_3[2] >> 4) & 0xf) {
 case 0x0:
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 0x4:
  FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 }
}
