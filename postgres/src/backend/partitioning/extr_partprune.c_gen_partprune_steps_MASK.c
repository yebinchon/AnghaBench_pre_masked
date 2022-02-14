
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int target; TYPE_1__* rel; } ;
struct TYPE_7__ {scalar_t__ partition_qual; int boundinfo; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PartClauseTarget ;
typedef int List ;
typedef TYPE_2__ GeneratePruningStepsContext ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(RelOptInfo *VAR_0, List *VAR_1, PartClauseTarget VAR_2,
     GeneratePruningStepsContext *VAR_3)
{

 FUNC_2(VAR_3, 0, sizeof(GeneratePruningStepsContext));
 VAR_3->rel = VAR_0;
 VAR_3->target = VAR_2;
 if (FUNC_3(VAR_0->boundinfo) && VAR_0->partition_qual)
 {

  VAR_1 = FUNC_1(VAR_1, VAR_0->partition_qual);
 }


 (void) FUNC_0(VAR_3, VAR_1);
}
