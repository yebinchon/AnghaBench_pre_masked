
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut16 ;
struct TYPE_3__ {int eob; int delay; int size; int esil; void* dst; void** src; void* type; int jump; scalar_t__ addr; scalar_t__ fail; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* FUNC_12 (int *,int ) ;
 void* FUNC_13 (int *,int,int,int ) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (int *,char*,int,...) ;

__attribute__((used)) static int FUNC_16(RAnal* VAR_6, RAnalOp* VAR_7, ut16 VAR_8) {
 if (FUNC_6 (VAR_8)) {
  VAR_7->type = VAR_1;
  VAR_7->jump = FUNC_14 (VAR_7->addr, FUNC_0 (VAR_8));
  VAR_7->fail = VAR_7->addr + 2 ;
  VAR_7->eob = 1;
  if (FUNC_4 (VAR_8)) {
   FUNC_15 (&VAR_7->esil, "sr,1,&,?{,0x%x,pc,=,}", VAR_7->jump);
  } else if (FUNC_5 (VAR_8)) {
   FUNC_15 (&VAR_7->esil, "1,SETD,sr,1,&,?{,0x%x,pc,=,}", VAR_7->jump);
   VAR_7->delay = 1;
  } else if (FUNC_3 (VAR_8)) {
   FUNC_15 (&VAR_7->esil, "1,SETD,sr,1,&,!,?{,0x%x,pc,=,}",VAR_7->jump);
   VAR_7->delay = 1;
  } else if (FUNC_2 (VAR_8)) {
   FUNC_15 (&VAR_7->esil, "sr,1,&,!,?{,0x%x,pc,=,}", VAR_7->jump);
  }
 } else if (FUNC_9 (VAR_8)) {

  VAR_7->type = VAR_3;
  VAR_7->dst = FUNC_12 (VAR_6, 0);
  VAR_7->src[0] = FUNC_13 (VAR_6, FUNC_1 (VAR_8), VAR_8 & 0x0F, VAR_0);
  FUNC_15 (&VAR_7->esil, "r%d,0x%x,+,[1],DUP,0x80,&,?{,0xFFFFFF00,|,},r0,=", FUNC_1 (VAR_8), VAR_8 & 0xF);
 } else if (FUNC_11 (VAR_8)) {

  VAR_7->type = VAR_3;
  VAR_7->dst = FUNC_12 (VAR_6, 0);
  VAR_7->src[0] = FUNC_13 (VAR_6, FUNC_1 (VAR_8), VAR_8 & 0x0F, VAR_5);
  FUNC_15 (&VAR_7->esil, "r%d,0x%x,+,[2],DUP,0x8000,&,?{,0xFFFF0000,|,},r0,=", FUNC_1 (VAR_8), (VAR_8 & 0xF) * 2);
 } else if (FUNC_7 (VAR_8)) {
  VAR_7->type = VAR_2;
  FUNC_15 (&VAR_7->esil, "0xFFFFFFFE,sr,&=,0x%x,DUP,0x80,&,?{,0xFFFFFF00,|,},r0,==,$z,sr,|,sr,:=", VAR_8 & 0xFF);
 } else if (FUNC_8 (VAR_8)) {

  VAR_7->type = VAR_4;
  VAR_7->src[0] = FUNC_12 (VAR_6, 0);
  VAR_7->dst = FUNC_13 (VAR_6, FUNC_1 (VAR_8), VAR_8 & 0x0F, VAR_0);
  FUNC_15 (&VAR_7->esil, "r0,0xFF,&,0x%x,r%d,+,=[1]", VAR_8 & 0xF, FUNC_1 (VAR_8));
 } else if (FUNC_10 (VAR_8)) {

  VAR_7->type = VAR_4;
  VAR_7->src[0] = FUNC_12 (VAR_6, 0);
  VAR_7->dst = FUNC_13 (VAR_6, FUNC_1 (VAR_8), VAR_8 & 0x0F, VAR_5);
  FUNC_15 (&VAR_7->esil, "r0,0xFFFF,&,0x%x,r%d,+,=[2]", (VAR_8 & 0xF) * 2, FUNC_1 (VAR_8));
 }
 return VAR_7->size;
}
