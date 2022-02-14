
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
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_1 (RAnal *VAR_4, RAnalOp *VAR_5, ut64 VAR_6, const ut8 *VAR_7) {
 switch ((VAR_7[0] >> 4) & 0xf) {
 case 0x0: case 0x1: case 0x2: case 0x3:
  VAR_5->type = VAR_0;
  break;
 case 0x8: case 0x9:
  VAR_5->type = VAR_1;
  break;
 case 0xa:
  VAR_5->type = VAR_3;
  break;
 case 0xc: case 0xd: case 0xe: case 0xf:
  VAR_5->type = VAR_2;
  break;
 default:
  FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 }
}
