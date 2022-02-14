
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int esil; TYPE_1__** src; TYPE_2__* dst; } ;
struct TYPE_6__ {int reg; } ;
struct TYPE_5__ {int absolute; int imm; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static inline void FUNC_4 (RReg *VAR_1, RAnalOp *VAR_2, const ut8 VAR_3) {
 VAR_2->dst = FUNC_0 ();
 VAR_2->src[0] = FUNC_0 ();
 VAR_2->dst->reg = FUNC_1 (VAR_1, "ime", VAR_0);
 VAR_2->src[0]->absolute = 1;
 VAR_2->src[0]->imm = (VAR_3 != 0xf3);
 FUNC_3 (&VAR_2->esil, "%d,ime,=", (int)VAR_2->src[0]->imm);
 if (VAR_3 == 0xd9) {
  FUNC_2 (&VAR_2->esil, ",");
 }
}
