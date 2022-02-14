
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
typedef int ut16 ;
struct TYPE_4__ {int size; int esil; void* dst; void* type; void** src; scalar_t__ val; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* FUNC_10 (int *,int ) ;
 void* FUNC_11 (int *,int) ;
 void* FUNC_12 (int *,TYPE_1__*,int,int ) ;
 int FUNC_13 (int *,char*,int) ;

__attribute__((used)) static int FUNC_14(RAnal* VAR_9, RAnalOp* VAR_10, ut16 VAR_11) {
 if (FUNC_9 (VAR_11)) {
  VAR_10->type = VAR_7;
  VAR_10->val = (ut8)(VAR_11 & 0xFF);
  FUNC_13 (&VAR_10->esil, "4,r15,-=,sr,r15,=[4],4,r15,-=,2,pc,-,r15,=[4],2,0x%x,<<,4,+,vbr,+,pc,=", VAR_11 & 0xFF);
 } else if (FUNC_2 (VAR_11)) {

  VAR_10->type = VAR_3;
  VAR_10->src[0] = FUNC_12 (VAR_9, VAR_10, VAR_11 & 0xFF, VAR_0);
  VAR_10->dst = FUNC_10 (VAR_9, 0);
  FUNC_13 (&VAR_10->esil, "0x%x,pc,+,r0,=", (VAR_11 & 0xFF) * 4);
 } else if (FUNC_1 (VAR_11)) {
  VAR_10->src[0] = FUNC_11 (VAR_9, VAR_11 & 0xFF);
  VAR_10->src[1] = FUNC_10 (VAR_9, 0);
  VAR_10->dst = FUNC_10 (VAR_9, 0);
  switch(VAR_11 & 0xFF00) {
  case 0xC800:

   VAR_10->type = VAR_1;
   FUNC_13 (&VAR_10->esil, "0xFFFFFFFE,sr,&=,r0,0x%x,&,!,?{,1,sr,|=,}", VAR_11 & 0xFF);
   break;
  case 0xC900:
   VAR_10->type = VAR_2;
   FUNC_13 (&VAR_10->esil, "0x%x,r0,&=", VAR_11 & 0xFF);
   break;
  case 0xCA00:
   VAR_10->type = VAR_8;
   FUNC_13 (&VAR_10->esil, "0x%x,r0,^=", VAR_11 & 0xFF);
   break;
  case 0xCB00:
   VAR_10->type = VAR_5;
   FUNC_13 (&VAR_10->esil, "0x%x,r0,|=", VAR_11 & 0xFF);
   break;
  }
 } else if (FUNC_0 (VAR_11)) {
  VAR_10->src[0] = FUNC_11 (VAR_9, VAR_11 & 0xFF);
  switch(VAR_11 & 0xFF00) {
  case 0xCC00:

   VAR_10->type = VAR_1;
   FUNC_13 (&VAR_10->esil, "0xFFFFFFFE,sr,&=,r0,gbr,+,[1],0x%x,&,!,?{,1,sr,|=,}", VAR_11 & 0xFF);
   break;
  case 0xCD00:
   VAR_10->type = VAR_2;
   FUNC_13 (&VAR_10->esil, "r0,gbr,+,[1],0x%x,&,r0,gbr,+,=[1]", VAR_11 & 0xFF);
   break;
  case 0xCE00:
   VAR_10->type = VAR_8;
   FUNC_13 (&VAR_10->esil, "r0,gbr,+,[1],0x%x,^,r0,gbr,+,=[1]", VAR_11 & 0xFF);
   break;
  case 0xCF00:
   VAR_10->type = VAR_5;
   FUNC_13 (&VAR_10->esil, "r0,gbr,+,[1],0x%x,|,r0,gbr,+,=[1]", VAR_11 & 0xFF);
   break;
  }

 } else if (FUNC_4 (VAR_11)) {
  VAR_10->type = VAR_6;
  VAR_10->src[0] = FUNC_10 (VAR_9, 0);
  FUNC_13 (&VAR_10->esil, "r0,gbr,0x%x,+,=[1]", VAR_11 & 0xFF);
 } else if (FUNC_8 (VAR_11)) {
  VAR_10->type = VAR_6;
  VAR_10->src[0] = FUNC_10 (VAR_9, 0);
  FUNC_13 (&VAR_10->esil, "r0,gbr,0x%x,+,=[2]", (VAR_11 & 0xFF) * 2);
 } else if (FUNC_6 (VAR_11)) {
  VAR_10->type = VAR_6;
  VAR_10->src[0] = FUNC_10 (VAR_9, 0);
  FUNC_13 (&VAR_10->esil, "r0,gbr,0x%x,+,=[4]", (VAR_11 & 0xFF) * 4);
 } else if (FUNC_3 (VAR_11)) {
  VAR_10->type = VAR_4;
  VAR_10->dst = FUNC_10 (VAR_9, 0);
  FUNC_13 (&VAR_10->esil, "gbr,0x%x,+,[1],DUP,0x80,&,?{,0xFFFFFF00,|,},r0,=", (VAR_11 & 0xFF));
 } else if (FUNC_7 (VAR_11)) {
  VAR_10->type = VAR_4;
  VAR_10->dst = FUNC_10 (VAR_9, 0);
  FUNC_13 (&VAR_10->esil, "gbr,0x%x,+,[2],DUP,0x8000,&,?{,0xFFFF0000,|,},r0,=", (VAR_11 & 0xFF)*2);
 } else if (FUNC_5 (VAR_11)) {
  VAR_10->type = VAR_4;
  VAR_10->dst = FUNC_10 (VAR_9, 0);
  FUNC_13 (&VAR_10->esil, "gbr,0x%x,+,[4],r0,=", (VAR_11 & 0xFF) * 4);
 }

 return VAR_10->size;
}
