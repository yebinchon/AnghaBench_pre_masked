
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int indexed_tlist ;
struct TYPE_6__ {int * hashkeys; } ;
struct TYPE_5__ {scalar_t__ qual; int targetlist; struct TYPE_5__* lefttree; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ Plan ;
typedef int Node ;
typedef int List ;
typedef TYPE_2__ Hash ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(PlannerInfo *VAR_2, Plan *VAR_3, int VAR_4)
{
 Hash *VAR_5 = (Hash *) VAR_3;
 Plan *VAR_6 = VAR_3->lefttree;
 indexed_tlist *VAR_7;






 VAR_7 = FUNC_1(VAR_6->targetlist);
 VAR_5->hashkeys = (List *)
  FUNC_2(VAR_2,
        (Node *) VAR_5->hashkeys,
        VAR_7,
        VAR_1,
        VAR_4);


 FUNC_3(VAR_3, VAR_4);


 FUNC_0(VAR_3->qual == VAR_0);
}
