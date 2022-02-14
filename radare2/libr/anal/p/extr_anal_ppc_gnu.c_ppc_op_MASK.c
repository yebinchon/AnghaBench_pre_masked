
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int size; short jump; int eob; int fail; void* type; int addr; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_1__*,char,int) ;

__attribute__((used)) static int FUNC_1(RAnal *VAR_5, RAnalOp *VAR_6, ut64 VAR_7, const ut8 *VAR_8, int VAR_9, RAnalOpMask VAR_10) {


 int VAR_11 = (VAR_8[0] & 0xf8) >> 3;
 short VAR_12 = ((VAR_8[2]<<8) | (VAR_8[3]&0xfc));
 int VAR_13 = VAR_8[3]&0x2;
 int VAR_14 = VAR_8[3]&0x1;



 FUNC_0 (VAR_6, '\0', sizeof (RAnalOp));
 VAR_6->addr = VAR_7;
 VAR_6->type = 0;
 VAR_6->size = 4;



 switch (VAR_11) {

 case 11:
  VAR_6->type = VAR_1;
  break;
 case 9:
  if (VAR_8[0] == 0x4e) {

  } else {
   VAR_6->jump = (VAR_13)?(VAR_12):(VAR_7+VAR_12);
   if (VAR_14) {
    VAR_6->fail = VAR_7 + 4;
   }
  }
  VAR_6->eob = 1;
  break;
 case 6:
  VAR_6->type = VAR_2;
  VAR_6->jump = (VAR_13)?(VAR_12):(VAR_7+VAR_12+4);
  VAR_6->eob = 1;
  break;
 case 8:

  VAR_6->type = VAR_0;
  VAR_6->jump = (VAR_13)?(VAR_12):(VAR_7+VAR_12+4);
  VAR_6->fail = VAR_7+4;
  VAR_6->eob = 1;
  break;
 case 19:
  VAR_6->type = VAR_3;
  if (VAR_14) {
   VAR_6->jump = 0xFFFFFFFF;
   VAR_6->fail = VAR_7+4;
  }
  VAR_6->eob = 1;
  break;
 }
 VAR_6->size = 4;
 return VAR_6->size;
}
