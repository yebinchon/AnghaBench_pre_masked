
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_6__ {int family; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int const*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_3 (RAnal *VAR_1, RAnalOp *VAR_2, ut64 VAR_3, const ut8 *VAR_4) {
 VAR_2->family = VAR_0;
 switch ((VAR_4[2] >> 4) & 0xf) {
 case 0x0: case 0x1:
  FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 case 0x4: case 0x5:
  FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 }
}
