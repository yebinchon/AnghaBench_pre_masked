
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int val; TYPE_2__** src; int esil; TYPE_1__* dst; } ;
struct TYPE_6__ {int imm; int absolute; } ;
struct TYPE_5__ {void* reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int FUNC_0 (int const,int const) ;
 int VAR_0 ;
 void* FUNC_1 () ;
 void* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_4 (RReg *VAR_3, RAnalOp *VAR_4, const ut8 *VAR_5) {
 VAR_4->dst = FUNC_1 ();
 VAR_4->src[0] = FUNC_1 ();
 if (VAR_5[0] & 1) {
  VAR_4->dst->reg = FUNC_2 (VAR_3, VAR_1[VAR_5[0]>>4], VAR_0);
  VAR_4->src[0]->imm = FUNC_0 (VAR_5[1], VAR_5[2]);
  FUNC_3 (&VAR_4->esil, "0x%04x,%s,=", VAR_4->src[0]->imm, VAR_1[VAR_5[0]>>4]);
 } else {
  VAR_4->dst->reg = FUNC_2 (VAR_3, VAR_2[VAR_5[0]>>3], VAR_0);
  VAR_4->src[0]->imm = VAR_5[1];
  FUNC_3 (&VAR_4->esil, "0x%02x,%s,=", VAR_4->src[0]->imm, VAR_2[VAR_5[0]>>3]);
 }
 VAR_4->src[0]->absolute = 1;
 VAR_4->val = VAR_4->src[0]->imm;
}
