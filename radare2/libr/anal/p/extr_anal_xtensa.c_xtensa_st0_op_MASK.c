
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_7__ {int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int const*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int const*) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_4 (RAnal *VAR_4, RAnalOp *VAR_5, ut64 VAR_6, const ut8 *VAR_7) {
 switch ((VAR_7[1] >> 4) & 0xf) {
 case 0x0:
  FUNC_1 (VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 case 0x1:
  VAR_5->type = VAR_0;
  break;
 case 0x2:
  FUNC_2 (VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 case 0x3:
  FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 case 0x4:
  VAR_5->type = VAR_3;
  break;
 case 0x5: case 0x6: case 0x7:
  VAR_5->type = VAR_2;
  break;
 case 0x8: case 0x9: case 0xa: case 0xb:
  VAR_5->type = VAR_1;
  break;
 default:
  FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 }
}
