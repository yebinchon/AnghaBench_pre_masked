
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {int cond; int a; int format; int c; int limm; int imm; int mode_n; int mode_m; } ;
typedef TYPE_1__ arc_fields ;
struct TYPE_8__ {int type; int size; void* cond; int delay; } ;
typedef TYPE_2__ RAnalOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int,int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int ,int) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(RAnalOp *VAR_12, ut64 VAR_13, arc_fields *VAR_14, ut64 VAR_15) {
 ut64 VAR_16;
 ut64 VAR_17;
 ut64 VAR_18;

 switch (VAR_15) {
 case 128:
  VAR_16 = VAR_11;
  VAR_17 = VAR_5;
  VAR_18 = VAR_10;
  break;
 case 129:
  VAR_16 = VAR_8;
  VAR_17 = VAR_4;
  VAR_18 = VAR_9;
  break;
 default:
  return -1;
 }

 VAR_14->cond = VAR_14->a & 0x1f;

 switch (VAR_14->format) {
 case 0:
  if (VAR_14->c == VAR_3) {

   VAR_12->type = VAR_15;
   FUNC_1 (VAR_12, VAR_13, VAR_14->limm, VAR_14->mode_n);
   return VAR_12->size;
  }
  if (VAR_14->c == VAR_1 || VAR_14->c == VAR_2 || VAR_14->c == VAR_0) {


   VAR_12->type = VAR_7;
   VAR_12->delay = VAR_14->mode_n;
   return VAR_12->size;
  }
  VAR_12->type = VAR_16;
  return VAR_12->size;
 case 1:
  VAR_12->type = VAR_15;
  FUNC_1 (VAR_12, VAR_13, VAR_14->c, VAR_14->mode_n);
  return VAR_12->size;
 case 2:
  VAR_12->type = VAR_15;
  VAR_14->imm = (VAR_14->a << 6 | VAR_14->c);
  VAR_14->imm = FUNC_0 (VAR_14->imm);
  FUNC_1 (VAR_12, VAR_13, VAR_14->imm, VAR_14->mode_n);
  return VAR_12->size;
 case 3:
  if (VAR_14->mode_m == 0) {
   if (VAR_14->c == VAR_3) {
    VAR_12->type = VAR_17;
    FUNC_2 (VAR_12, VAR_13, VAR_14->limm, VAR_14->mode_n, VAR_14->cond);
    return VAR_12->size;
   }
   if (VAR_14->c == VAR_1 || VAR_14->c == VAR_2 || VAR_14->c == VAR_0) {


    VAR_12->type = VAR_6;
    VAR_12->cond = FUNC_3 (VAR_14->cond);
    VAR_12->delay = VAR_14->mode_n;
    return VAR_12->size;
   }

   VAR_12->cond = FUNC_3 (VAR_14->cond);
   VAR_12->type = VAR_18;
   return VAR_12->size;
  }

  VAR_12->type = VAR_17;
  FUNC_2 (VAR_12, VAR_13, VAR_14->c, VAR_14->mode_n, VAR_14->cond);
  return VAR_12->size;
 }


 return 0;
}
