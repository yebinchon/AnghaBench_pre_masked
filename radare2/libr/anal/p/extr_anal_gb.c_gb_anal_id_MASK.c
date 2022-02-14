
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_10__ {int reg; } ;
struct TYPE_9__ {scalar_t__ type; int esil; TYPE_2__* dst; TYPE_1__** src; } ;
struct TYPE_8__ {int memref; void* reg; } ;
struct TYPE_7__ {int imm; int absolute; } ;
typedef TYPE_3__ RAnalOp ;
typedef TYPE_4__ RAnal ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 char** VAR_2 ;
 char** VAR_3 ;

__attribute__((used)) static inline void FUNC_4 (RAnal *VAR_4, RAnalOp *VAR_5, const ut8 VAR_6) {
 VAR_5->dst = FUNC_0 ();
 VAR_5->src[0] = FUNC_0 ();
 VAR_5->src[0]->imm = 1;
 VAR_5->src[0]->absolute = 1;
 if (VAR_6 == 0x34 || VAR_6 == 0x35) {
  VAR_5->dst->memref = 1;
  VAR_5->dst->reg = FUNC_1 (VAR_4->reg, "hl", VAR_1);
  if (VAR_5->type == VAR_0) {
   FUNC_2 (&VAR_5->esil, "1,hl,[1],+,hl,=[1],3,$c,H,:=,$z,Z,:=,0,N,:=");
  } else {
   FUNC_2 (&VAR_5->esil, "1,hl,[1],-,hl,=[1],4,$b,H,:=,$z,Z,:=,1,N,:=");
  }
 } else {
  if (!(VAR_6 & (1<<2))) {
   VAR_5->dst->reg = FUNC_1 (VAR_4->reg, VAR_2[VAR_6>>4], VAR_1);
   if (VAR_5->type == VAR_0) {
    FUNC_3 (&VAR_5->esil, "1,%s,+=", VAR_2[VAR_6>>4]);
   } else {
    FUNC_3 (&VAR_5->esil, "1,%s,-=", VAR_2[VAR_6 >> 4]);
   }
  } else {
   VAR_5->dst->reg = FUNC_1 (VAR_4->reg, VAR_3[VAR_6>>3], VAR_1);
   if (VAR_5->type == VAR_0) {
    FUNC_3 (&VAR_5->esil, "1,%s,+=,3,$c,H,:=,$z,Z,:=,0,N,:=", VAR_3[VAR_6>>3]);
   } else {
    FUNC_3 (&VAR_5->esil, "1,%s,-=,4,$b,H,:=,$z,Z,:=,1,N,:=", VAR_3[VAR_6 >> 3]);
   }
  }
 }
}
