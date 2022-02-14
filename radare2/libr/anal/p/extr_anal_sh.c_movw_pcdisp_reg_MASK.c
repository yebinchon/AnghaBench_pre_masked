
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut16 ;
struct TYPE_5__ {int memref; scalar_t__ base; } ;
struct TYPE_4__ {int size; TYPE_2__** src; int esil; scalar_t__ addr; int dst; int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (int *,char*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(RAnal* VAR_1, RAnalOp* VAR_2, ut16 VAR_3) {
 VAR_2->type = VAR_0;
 VAR_2->dst = FUNC_1 (VAR_1, FUNC_0 (VAR_3));
 VAR_2->src[0] = FUNC_2 ();
 VAR_2->src[0]->base = (VAR_3 & 0xFF) * 2+VAR_2->addr + 4;
 VAR_2->src[0]->memref=1;
 FUNC_3 (&VAR_2->esil, "0x%x,[2],r%d,=,r%d,0x8000,&,?{,0xFFFF0000,r%d,|=,}", VAR_2->src[0]->base, FUNC_0 (VAR_3), FUNC_0 (VAR_3), FUNC_0 (VAR_3));
 return VAR_2->size;
}
