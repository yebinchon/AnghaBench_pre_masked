
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ commandType; int hasSubLinks; TYPE_1__* jointree; int * setOperations; scalar_t__ utilityStmt; } ;
struct TYPE_4__ {int quals; } ;
typedef TYPE_2__ Query ;
typedef int Node ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int *) ;

void
FUNC_9(Query *VAR_4, Node *VAR_5)
{
 Node *VAR_6;

 if (VAR_5 == ((void*)0))
  return;

 if (VAR_4->commandType == VAR_0)
 {
  if (VAR_4->utilityStmt && FUNC_1(VAR_4->utilityStmt, VAR_3))
   return;
  else
   FUNC_5(VAR_2,
     (FUNC_6(VAR_1),
      FUNC_7("conditional utility statements are not implemented")));
 }

 if (VAR_4->setOperations != ((void*)0))
 {





  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("conditional UNION/INTERSECT/EXCEPT statements are not implemented")));
 }


 VAR_6 = FUNC_4(VAR_5);

 VAR_4->jointree->quals = FUNC_8(VAR_4->jointree->quals,
              VAR_6);




 FUNC_0(!FUNC_3(VAR_6, 0));





 if (!VAR_4->hasSubLinks)
  VAR_4->hasSubLinks = FUNC_2(VAR_6);
}
