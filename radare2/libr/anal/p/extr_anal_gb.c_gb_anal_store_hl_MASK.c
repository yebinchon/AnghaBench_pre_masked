
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int esil; TYPE_2__** src; TYPE_1__* dst; } ;
struct TYPE_6__ {int absolute; int imm; void* reg; } ;
struct TYPE_5__ {int memref; void* reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int *,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int const) ;
 int const* VAR_1 ;

__attribute__((used)) static inline void FUNC_4 (RReg *VAR_2, RAnalOp *VAR_3, const ut8 *VAR_4) {
 VAR_3->dst = FUNC_0 ();
 VAR_3->src[0] = FUNC_0 ();
 VAR_3->dst->reg = FUNC_1 (VAR_2, "hl", VAR_0);
 VAR_3->dst->memref = 1;
 VAR_3->src[0]->absolute = 1;
 if (VAR_4[0] == 0x36) {
  VAR_3->src[0]->imm = VAR_4[1];
  FUNC_3 (&VAR_3->esil, "0x%02x,hl,=[1]", VAR_4[1]);
 } else {
  VAR_3->src[0]->reg = FUNC_1 (VAR_2, VAR_1[VAR_4[0] & 0x07], VAR_0);
  FUNC_3 (&VAR_3->esil, "%s,hl,=[1]", VAR_1[VAR_4[0] & 0x07]);
 }
 if (VAR_4[0] == 0x32) {
  FUNC_2 (&VAR_3->esil, "a,hl,=[1],1,hl,-=");
 }
 if (VAR_4[0] == 0x22) {
  FUNC_2 (&VAR_3->esil, "a,hl,=[1],1,hl,+=");
 }
}
