
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int esil; TYPE_2__* dst; TYPE_1__** src; } ;
struct TYPE_6__ {int memref; int reg; } ;
struct TYPE_5__ {int imm; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static inline void FUNC_3 (RReg *VAR_2, RAnalOp *VAR_3, const ut8 VAR_4)
{
 VAR_3->dst = FUNC_0 ();
 VAR_3->src[0] = FUNC_0 ();
 VAR_3->src[0]->imm = 1;
 VAR_3->dst->reg = FUNC_1 (VAR_2, VAR_1[VAR_4 & 7], VAR_0);
 if ((VAR_4 & 7) == 6) {
  VAR_3->dst->memref = 1;
  FUNC_2 (&VAR_3->esil, "1,%s,[1],&,H,:=,1,%s,[1],>>,7,C,<<,|,%s,=[1],H,C,:=,0,H,:=,0,N,:=", VAR_1[VAR_4 & 7], VAR_1[VAR_4 & 7], VAR_1[VAR_4 & 7]);
 } else {
  FUNC_2 (&VAR_3->esil, "1,%s,&,H,:=,1,%s,>>,7,C,<<,|,%s,=,H,C,:=,0,H,:=,0,N,:=", VAR_1[VAR_4 & 7], VAR_1[VAR_4 & 7], VAR_1[VAR_4 & 7]);
 }
}
