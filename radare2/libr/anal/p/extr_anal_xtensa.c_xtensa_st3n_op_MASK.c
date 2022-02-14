
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_1 (RAnal *VAR_5, RAnalOp *VAR_6, ut64 VAR_7, const ut8 *VAR_8) {
 switch ((VAR_8[1] >> 4) & 0xf) {
 case 0x0:
  VAR_6->type = VAR_1;
  break;
 case 0xf:
  switch ((VAR_8[0] >> 4) & 0xf) {
  case 0: case 1:
   VAR_6->type = VAR_3;
   break;
  case 2:
   VAR_6->type = VAR_4;
   break;
  case 3:
   VAR_6->type = VAR_2;
   break;
  case 6:
   VAR_6->type = VAR_0;
   break;
  default:
   FUNC_0 (VAR_5, VAR_6, VAR_7, VAR_8);
   break;
  }
  break;
 default:
  FUNC_0 (VAR_5, VAR_6, VAR_7, VAR_8);
  break;
 }
}
