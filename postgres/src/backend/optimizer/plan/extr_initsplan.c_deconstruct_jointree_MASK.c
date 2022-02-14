
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* parse; int * nullable_baserels; } ;
struct TYPE_5__ {int * jointree; } ;
typedef int Relids ;
typedef TYPE_2__ PlannerInfo ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * VAR_1 ;
 int * FUNC_2 (TYPE_2__*,int *,int,int *,int *,int **) ;

List *
FUNC_3(PlannerInfo *VAR_2)
{
 List *VAR_3;
 Relids VAR_4;
 Relids VAR_5;
 List *VAR_6 = VAR_1;


 FUNC_0(VAR_2->parse->jointree != ((void*)0) &&
     FUNC_1(VAR_2->parse->jointree, VAR_0));


 VAR_2->nullable_baserels = ((void*)0);

 VAR_3 = FUNC_2(VAR_2, (Node *) VAR_2->parse->jointree, 0,
         &VAR_4, &VAR_5,
         &VAR_6);


 FUNC_0(VAR_6 == VAR_1);

 return VAR_3;
}
