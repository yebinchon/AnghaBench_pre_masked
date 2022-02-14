
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ut8 ;
struct TYPE_10__ {int reg; } ;
struct TYPE_9__ {scalar_t__ addr; } ;
struct TYPE_8__ {scalar_t__ base; int reg; } ;
typedef TYPE_1__ RAnalValue ;
typedef TYPE_2__ RAnalOp ;
typedef TYPE_3__ RAnal ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static RAnalValue *FUNC_2(RAnal* VAR_2, RAnalOp* VAR_3, ut8 VAR_4) {
 RAnalValue *VAR_5 = FUNC_0 ();
 VAR_5->reg = FUNC_1 (VAR_2->reg, VAR_1[VAR_4], VAR_0);
 VAR_5->base = VAR_3->addr + 4;
 return VAR_5;
}
