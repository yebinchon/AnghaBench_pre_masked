
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* jointree; void* havingQual; scalar_t__ groupingSets; scalar_t__ groupClause; scalar_t__ hasAggs; int hasSubLinks; int targetList; int * setOperations; } ;
struct TYPE_5__ {void* quals; } ;
typedef int RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int Node ;
typedef int Index ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int ,int *,int ,int ,int ,int *) ;
 void* FUNC_1 (void*,int *) ;
 int FUNC_2 (int *,TYPE_2__*,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_3(Query *VAR_1, RangeTblEntry *VAR_2, Index VAR_3, Node *VAR_4)
{
 if (VAR_1->setOperations != ((void*)0))
 {

  FUNC_2(VAR_1->setOperations, VAR_1,
        VAR_2, VAR_3, VAR_4);
 }
 else
 {
  VAR_4 = FUNC_0(VAR_4, VAR_3, 0, VAR_2,
           VAR_1->targetList,
           VAR_0, 0,
           &VAR_1->hasSubLinks);






  if (VAR_1->hasAggs || VAR_1->groupClause || VAR_1->groupingSets || VAR_1->havingQual)
   VAR_1->havingQual = FUNC_1(VAR_1->havingQual, VAR_4);
  else
   VAR_1->jointree->quals =
    FUNC_1(VAR_1->jointree->quals, VAR_4);






 }
}
