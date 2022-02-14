
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int csh ;
typedef int cs_insn ;
struct TYPE_9__ {int disp; } ;
struct TYPE_11__ {TYPE_3__ mem; int type; } ;
struct TYPE_10__ {int type; TYPE_2__* dst; TYPE_1__** src; } ;
struct TYPE_8__ {int delta; int * reg; } ;
struct TYPE_7__ {int delta; int * reg; } ;
typedef int RRegItem ;
typedef TYPE_4__ RAnalOp ;


 TYPE_6__ FUNC_0 (int) ;

 int VAR_0 ;

 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int) ;
 void* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(RAnalOp *VAR_2, csh VAR_3, cs_insn *VAR_4) {
 static RRegItem VAR_5;
 switch (VAR_2->type & VAR_0) {
 case 129:
  if (FUNC_0(0).type == VAR_1) {
   FUNC_1 (VAR_5);
   VAR_2->src[0] = FUNC_3 ();
   VAR_2->src[0]->reg = &VAR_5;
   FUNC_2 (VAR_2->src[0]->reg, VAR_3, VAR_4, 0);
   VAR_2->src[0]->delta = FUNC_0(0).mem.disp;
  }
  break;
 case 128:
  if (FUNC_0(1).type == VAR_1) {
   FUNC_1 (VAR_5);
   VAR_2->dst = FUNC_3 ();
   VAR_2->dst->reg = &VAR_5;
   FUNC_2 (VAR_2->dst->reg, VAR_3, VAR_4, 1);
   VAR_2->dst->delta = FUNC_0(1).mem.disp;
  }
  break;
 }
}
