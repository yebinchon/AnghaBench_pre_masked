
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* parse; } ;
struct TYPE_5__ {int * havingQual; } ;
typedef TYPE_2__ PlannerInfo ;
typedef int Node ;
typedef int List ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;

void
FUNC_4(PlannerInfo *VAR_4, List *VAR_5)
{
 List *VAR_6 = FUNC_3((Node *) VAR_5,
            VAR_2 |
            VAR_3 |
            VAR_1);

 if (VAR_6 != VAR_0)
 {
  FUNC_0(VAR_4, VAR_6, FUNC_1(0), 1);
  FUNC_2(VAR_6);
 }





 if (VAR_4->parse->havingQual)
 {
  List *VAR_7 = FUNC_3(VAR_4->parse->havingQual,
              VAR_2 |
              VAR_1);

  if (VAR_7 != VAR_0)
  {
   FUNC_0(VAR_4, VAR_7,
           FUNC_1(0), 1);
   FUNC_2(VAR_7);
  }
 }
}
