
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {void* type; int family; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_1 (RAnal *VAR_7, RAnalOp *VAR_8, ut64 VAR_9, const ut8 *VAR_10) {
 VAR_8->family = VAR_0;
 switch ((VAR_10[2] >> 4) & 0xf) {
 case 0x0: case 0x4:
  VAR_8->type = VAR_2;
  break;
 case 0x1: case 0x5:
  VAR_8->type = VAR_6;
  break;
 case 0x2:
  VAR_8->type = VAR_4;
  break;
 case 0x8: case 0x9: case 0xa: case 0xb:
 case 0xc: case 0xd: case 0xe:
  VAR_8->type = VAR_3;
  break;
 case 0xf:
  switch ((VAR_10[0] >> 4) & 0xf) {
  case 0x0: case 0x4: case 0x5:
   VAR_8->type = VAR_3;
   break;
  case 0x1:
   VAR_8->type = VAR_1;
   break;
  case 0x6:
   VAR_8->type = VAR_5;
   break;
  default:
   FUNC_0 (VAR_7, VAR_8, VAR_9, VAR_10);
   break;
  }
  break;
 default:
  FUNC_0 (VAR_7, VAR_8, VAR_9, VAR_10);
  break;
 }
}
