
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int root ;
typedef int glob ;
struct TYPE_5__ {int dependsOnRole; int * invalItems; int * relationOids; struct TYPE_5__* glob; int type; } ;
typedef TYPE_1__ PlannerInfo ;
typedef TYPE_1__ PlannerGlobal ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(Node *VAR_3,
         List **VAR_4,
         List **VAR_5,
         bool *VAR_6)
{
 PlannerGlobal VAR_7;
 PlannerInfo VAR_8;


 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.type = VAR_1;
 VAR_7.relationOids = VAR_0;
 VAR_7.invalItems = VAR_0;

 VAR_7.dependsOnRole = 0;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.type = VAR_2;
 VAR_8.glob = &VAR_7;

 (void) FUNC_1(VAR_3, &VAR_8);

 *VAR_4 = VAR_7.relationOids;
 *VAR_5 = VAR_7.invalItems;
 *VAR_6 = VAR_7.dependsOnRole;
}
