
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int type; int family; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_1 (RAnal *VAR_3, RAnalOp *VAR_4, ut64 VAR_5, const ut8 *VAR_6) {
 VAR_4->family = VAR_0;
 switch ((VAR_6[2] >> 4) & 0xf) {
 case 0x1: case 0x2: case 0x3:
 case 0x4: case 0x5: case 0x6: case 0x7:
  VAR_4->type = VAR_1;
  break;
 case 0x8: case 0x9: case 0xa: case 0xb:
 case 0xc: case 0xd:
  VAR_4->type = VAR_2;
  break;
 default:
  FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 }
}
