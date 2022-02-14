
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int addr; } ;
struct TYPE_6__ {int base; int delta; } ;
typedef TYPE_1__ RAnalValue ;
typedef TYPE_2__ RAnalOp ;
typedef int RAnal ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static RAnalValue *FUNC_1(RAnal* VAR_0, RAnalOp* VAR_1, ut8 VAR_2, int VAR_3) {
 RAnalValue *VAR_4 = FUNC_0 ();
 if (VAR_3==2) {
  VAR_4->base = VAR_1->addr + 4;
  VAR_4->delta = VAR_2 << 1;
 } else {
  VAR_4->base = (VAR_1->addr + 4) & ~0x03;
  VAR_4->delta = VAR_2 << 2;
 }

 return VAR_4;
}
