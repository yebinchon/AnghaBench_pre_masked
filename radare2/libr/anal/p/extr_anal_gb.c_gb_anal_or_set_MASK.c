
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
struct TYPE_9__ {TYPE_2__** src; int esil; TYPE_1__* dst; } ;
struct TYPE_8__ {int imm; } ;
struct TYPE_7__ {int memref; int reg; } ;
typedef TYPE_3__ RAnalOp ;
typedef TYPE_4__ RAnal ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,char*,int,int ,...) ;
 int * VAR_1 ;

__attribute__((used)) static inline void FUNC_3 (RAnal *VAR_2, RAnalOp *VAR_3, const ut8 VAR_4) {
 VAR_3->dst = FUNC_0 ();
 VAR_3->src[0] = FUNC_0 ();
 VAR_3->src[0]->imm = (VAR_4>>3) & 7;
 VAR_3->dst->memref = ((VAR_4 & 7) == 6);
 VAR_3->dst->reg = FUNC_1 (VAR_2->reg, VAR_1[VAR_4 & 7], VAR_0);
 if (VAR_3->dst->memref) {
  FUNC_2 (&VAR_3->esil, "0x%02x,%s,[1],|,%s,=[1]", VAR_3->src[0]->imm, VAR_1[VAR_4 & 7], VAR_1[VAR_4 & 7], VAR_3->src[0]->imm);
 } else {
  FUNC_2 (&VAR_3->esil, "0x%02x,%s,|=", VAR_3->src[0]->imm, VAR_1[VAR_4 & 7]);
 }
}
