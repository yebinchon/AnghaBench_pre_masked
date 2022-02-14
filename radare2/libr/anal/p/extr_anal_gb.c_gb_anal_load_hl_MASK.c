
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int esil; TYPE_2__* dst; TYPE_1__** src; } ;
struct TYPE_6__ {void* reg; } ;
struct TYPE_5__ {int memref; int absolute; void* reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char*) ;
 char** VAR_1 ;

__attribute__((used)) static inline void FUNC_5 (RReg *VAR_2, RAnalOp *VAR_3, const ut8 VAR_4)
{
 VAR_3->dst = FUNC_0 ();
 VAR_3->src[0] = FUNC_0 ();
 VAR_3->src[0]->reg = FUNC_1 (VAR_2, "hl", VAR_0);
 VAR_3->src[0]->memref = 1;
 VAR_3->src[0]->absolute = 1;
 VAR_3->dst->reg = FUNC_1 (VAR_2, VAR_1[((VAR_4 & 0x38)>>3)], VAR_0);
 FUNC_4 (&VAR_3->esil, "hl,[1],%s,=", VAR_1[((VAR_4 & 0x38)>>3)]);
 if (VAR_4 == 0x3a) {
  FUNC_2 (&VAR_3->esil, ",1,hl,-=");
 }
 if (VAR_4 == 0x2a) {
  FUNC_3 (&VAR_3->esil, "hl,[1],a,=,1,hl,+=");
 }
}
