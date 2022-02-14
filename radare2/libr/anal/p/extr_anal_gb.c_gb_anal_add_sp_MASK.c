
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int const st8 ;
struct TYPE_7__ {int esil; TYPE_2__** src; TYPE_1__* dst; } ;
struct TYPE_6__ {int imm; } ;
struct TYPE_5__ {int reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int const) ;

__attribute__((used)) static inline void FUNC_4 (RReg *VAR_1, RAnalOp *VAR_2, const ut8 VAR_3) {
 VAR_2->dst = FUNC_0 ();
 VAR_2->src[0] = FUNC_0 ();
 VAR_2->dst->reg = FUNC_1 (VAR_1, "sp", VAR_0);
 VAR_2->src[0]->imm = (st8)VAR_3;
 if (VAR_3 < 128) {
  FUNC_3 (&VAR_2->esil, "0x%02x,sp,+=", VAR_3);
 } else {
  FUNC_3 (&VAR_2->esil, "0x%02x,sp,-=", 0 - (st8)VAR_3);
 }
 FUNC_2 (&VAR_2->esil, ",0,Z,=,0,N,:=");
}
