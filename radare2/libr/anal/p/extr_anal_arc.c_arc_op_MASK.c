
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef void* ut64 ;
struct TYPE_8__ {int bits; } ;
struct TYPE_7__ {int size; void* type; void* jump; void* fail; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef TYPE_2__ RAnal ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,void*,int const*,int) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(RAnal *VAR_8, RAnalOp *VAR_9, ut64 VAR_10, const ut8 *VAR_11, int VAR_12, RAnalOpMask VAR_13) {
 const ut8 *VAR_14 = (ut8 *)VAR_11;

 if (VAR_8->bits == 16) {
  return FUNC_0 (VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 }


 VAR_9->size = 4;
 VAR_9->fail = VAR_10 + 4;
 ut8 VAR_15 = (VAR_12 > 3)? ((VAR_14[3] & 0xf8) >> 3): 0;
 switch (VAR_15) {
 case 0x04:
 case 0x05:
 case 0x06:
  VAR_9->type = VAR_2;
  VAR_9->jump = VAR_10 + 4 + ((FUNC_1 (&VAR_11[0]) & 0x07ffff80) >> (7 - 2));
  break;
 case 0x07:
  VAR_9->type = VAR_2;
  VAR_9->jump = 0;
  break;
 case 0x08:
 case 0x09:
  VAR_9->type = VAR_0;
  break;
 case 0x0a:
 case 0x0b:
  VAR_9->type = VAR_6;
  break;
 case 0x0c:
  VAR_9->type = VAR_1;
  break;
 case 0x0d:
  VAR_9->type = VAR_4;
  break;
 case 0x0f:
  if ((VAR_14[0] == 0xff) && (VAR_14[1] == 0xff)) {
   VAR_9->type = VAR_3;
   break;
  }
  VAR_9->type = VAR_7;
  break;
 case 0x13:
  VAR_9->type = VAR_5;
  break;
 default:
  break;
 }
 return VAR_9->size;
}
