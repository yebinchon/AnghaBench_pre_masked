
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int esil; TYPE_1__** src; TYPE_1__* dst; } ;
struct TYPE_5__ {int reg; } ;
typedef int RReg ;
typedef TYPE_1__ RAnalValue ;
typedef TYPE_2__ RAnalOp ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static inline void FUNC_3 (RReg *VAR_2, RAnalOp *VAR_3, const ut8 VAR_4)
{
 RAnalValue *VAR_5 = FUNC_0 ();
 VAR_5->reg = FUNC_1 (VAR_2, VAR_1[(VAR_4>>4) - 12], VAR_0);
 if ((VAR_4 & 0xf) == 1) {
  VAR_3->dst = VAR_5;
  FUNC_2 (&VAR_3->esil, "sp,[2],%s,=,2,sp,+=", VAR_1[(VAR_4>>4) - 12]);
 } else {
  VAR_3->src[0] = VAR_5;
  FUNC_2 (&VAR_3->esil, "2,sp,-=,%s,sp,=[2]", VAR_1[(VAR_4>>4) - 12]);
 }
}
