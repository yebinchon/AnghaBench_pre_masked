
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int size; void* type; int esil; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(RAnal *VAR_8, RAnalOp *VAR_9, ut64 VAR_10, const ut8 *VAR_11, int VAR_12, RAnalOpMask VAR_13) {
 if (!VAR_9) {
  return 1;
 }

 FUNC_0 (VAR_9, 0, sizeof (RAnalOp));
 FUNC_1 (&VAR_9->esil);
 VAR_9->size = 4;

 if ((VAR_11[0]&0xff) == 0x3a) {

  VAR_9->type = VAR_5;
 } else
 if ((VAR_11[0]&0xf) == 0xa) {
  VAR_9->type = VAR_3;
 } else
 if ((VAR_11[0]&0xf) == 4) {
  VAR_9->type = VAR_0;
 } else
 if ((VAR_11[0]&0xf) == 5) {
  VAR_9->type = VAR_6;
 } else
 if ((VAR_11[0]&0xf) == 6) {

  VAR_9->type = VAR_2;

 } else
 if ((VAR_11[0]&0xf) == 7) {

  VAR_9->type = VAR_4;

 } else {
  switch (VAR_11[0]) {
  case 0x3a:
   if (VAR_11[1] >= 0xa0 && VAR_11[1] <= 0xaf && VAR_11[3] == 0x3d) {
    VAR_9->type = VAR_7;
   } else if ((VAR_11[1] >= 0xe0 && VAR_11[1] <= 0xe7) && VAR_11[2] == 0x3e && !VAR_11[3]) {

    VAR_9->type = VAR_5;
   }
   break;
  case 0x01:

   VAR_9->type = VAR_3;
   break;
  case 0x00:
  case 0x20:
  case 0x40:
  case 0x80:
  case 0xc0:

   VAR_9->type = VAR_1;
   break;
  case 0x26:

   break;
  case 0x07:
  case 0x47:
  case 0x87:
  case 0xc7:

   VAR_9->type = VAR_4;
   break;
  case 0x0d:
  case 0x2d:
  case 0x4d:
  case 0x8d:
  case 0xcd:

   VAR_9->type = VAR_4;
   break;
  case 0x06:
  case 0x46:
  case 0x86:
  case 0xc6:

   VAR_9->type = VAR_1;
   break;
  }
 }
 return VAR_9->size;
}
