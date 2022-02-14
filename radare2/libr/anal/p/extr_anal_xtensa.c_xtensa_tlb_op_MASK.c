
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_1 (RAnal *VAR_1, RAnalOp *VAR_2, ut64 VAR_3, const ut8 *VAR_4) {
 switch ((VAR_4[2] >> 4) & 0xf) {
 case 0x3:
 case 0x4: case 0x5: case 0x6: case 0x7:
 case 0xb:
 case 0xc: case 0xd: case 0xe: case 0xf:
  VAR_2->type = VAR_0;
  break;
 default:
  FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 }
}
