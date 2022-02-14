
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int esil; TYPE_2__** src; TYPE_1__* dst; } ;
struct TYPE_6__ {void* reg; } ;
struct TYPE_5__ {void* reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static inline void FUNC_3 (RReg *VAR_1, RAnalOp *VAR_2) {
 VAR_2->dst = FUNC_0 ();
 VAR_2->src[0] = FUNC_0 ();
 VAR_2->dst->reg = FUNC_1 (VAR_1, "pc", VAR_0);
 VAR_2->src[0]->reg = FUNC_1 (VAR_1, "hl", VAR_0);
 FUNC_2 (&VAR_2->esil, "hl,pc,:=");
}
