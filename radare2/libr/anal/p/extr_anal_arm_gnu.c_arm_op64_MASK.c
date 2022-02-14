
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_5__ {int size; int fail; void* jump; int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *,TYPE_1__*,int const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(RAnal *VAR_7, RAnalOp *VAR_8, ut64 VAR_9, const ut8 *VAR_10, int VAR_11) {
 FUNC_2 (VAR_8, 0, sizeof (RAnalOp));
 if (VAR_10[3] == 0) {
  return -1;
 }
 int VAR_12 = FUNC_1 (VAR_7, VAR_8, VAR_10, VAR_11);
 if (VAR_12 > 0) {
  return VAR_12;
 }
 VAR_8->size = 4;
 VAR_8->type = VAR_5;
 if (VAR_10[0] == 0xc0 && VAR_10[3] == 0xd6) {

  VAR_8->type = VAR_6;
 }
 switch (VAR_10[3]) {
 case 0x71:
 case 0xeb:
  VAR_8->type = VAR_2;
  break;
 case 0xb8:
 case 0xb9:
 case 0xf8:
 case 0xa9:
 case 0xf9:
  VAR_8->type = VAR_4;
  break;
 case 0x91:
 case 0x52:
 case 0x94:
 case 0x97:
  VAR_8->type = VAR_0;
  VAR_8->jump = FUNC_0 (VAR_9, VAR_10);
  VAR_8->fail = VAR_9 + 4;
  break;
 case 0x54:
  VAR_8->type = VAR_1;
  VAR_8->jump = VAR_9 + (4 * ((VAR_10[0] >> 4) | (VAR_10[1] << 8) | (VAR_10[2] << 16)));
  VAR_8->fail = VAR_9 + 4;
  break;
 case 0x17:
 case 0x14:
  VAR_8->type = VAR_3;
  VAR_8->jump = FUNC_0 (VAR_9, VAR_10);
  VAR_8->fail = VAR_9 + 4;
  break;
 }
 return VAR_8->size;
}
