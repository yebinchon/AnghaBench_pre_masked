
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int esil; TYPE_2__** src; TYPE_1__* dst; } ;
struct TYPE_6__ {int imm; } ;
struct TYPE_5__ {int reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int * VAR_1 ;

__attribute__((used)) static inline void FUNC_3 (RReg *VAR_2, RAnalOp *VAR_3) {
 VAR_3->dst = FUNC_0 ();
 VAR_3->src[0] = FUNC_0 ();
 VAR_3->dst->reg = FUNC_1 (VAR_2, VAR_1[3], VAR_0);
 VAR_3->src[0]->imm = 1;
 FUNC_2 (&VAR_3->esil, "1,C,:=");
}
