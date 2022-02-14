
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
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_1 (RAnal *VAR_2, RAnalOp *VAR_3, ut64 VAR_4, const ut8 *VAR_5) {
 switch ((VAR_5[1] >> 4) & 0xf) {
 case 0x0: case 0x1: case 0x2: case 0x3:
 case 0x8: case 0x9:
  VAR_3->type = VAR_0;
  break;
 case 0xe:
  if (((VAR_5[0] >> 4) & 0xf) <= 1) {
   VAR_3->type = VAR_1;
  } else {
   FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5);
  }
  break;
 default:
  FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 }
}
