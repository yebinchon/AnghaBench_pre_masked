
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int reg; } ;
struct TYPE_6__ {void* reg; } ;
typedef TYPE_1__ RAnalValue ;
typedef TYPE_2__ RAnal ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 void* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static RAnalValue * FUNC_2(RAnal const * const VAR_2, const int VAR_3, const int VAR_4) {
 RAnalValue *VAR_5 = FUNC_0();
 VAR_5->reg = FUNC_1(VAR_2->reg, VAR_1[VAR_3], VAR_0);
 VAR_5->reg = FUNC_1(VAR_2->reg, VAR_1[VAR_4], VAR_0);
 return VAR_5;
}
