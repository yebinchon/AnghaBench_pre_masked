
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int quals; int path; } ;
struct TYPE_6__ {int plan; } ;
typedef TYPE_1__ Result ;
typedef int PlannerInfo ;
typedef int Path ;
typedef int Node ;
typedef int List ;
typedef TYPE_2__ GroupResultPath ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static Result *
FUNC_4(PlannerInfo *VAR_0, GroupResultPath *VAR_1)
{
 Result *VAR_2;
 List *VAR_3;
 List *VAR_4;

 VAR_3 = FUNC_0(VAR_0, &VAR_1->path);


 VAR_4 = FUNC_3(VAR_0, VAR_1->quals);

 VAR_2 = FUNC_2(VAR_3, (Node *) VAR_4, ((void*)0));

 FUNC_1(&VAR_2->plan, (Path *) VAR_1);

 return VAR_2;
}
