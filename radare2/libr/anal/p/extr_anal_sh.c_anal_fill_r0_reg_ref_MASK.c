
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int st64 ;
struct TYPE_8__ {int reg; } ;
struct TYPE_7__ {int memref; int regdelta; } ;
typedef TYPE_1__ RAnalValue ;
typedef TYPE_2__ RAnal ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static RAnalValue *FUNC_2(RAnal *VAR_2, int VAR_3, st64 VAR_4) {
 RAnalValue *VAR_5 = FUNC_0 (VAR_2, 0);
 VAR_5->regdelta = FUNC_1 (VAR_2->reg, VAR_1[VAR_3], VAR_0);
 VAR_5->memref = VAR_4;
 return VAR_5;
}
