
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_5__ {scalar_t__ state; int * snapshot; int reorder; } ;
typedef TYPE_1__ SnapBuild ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;

bool
FUNC_6(SnapBuild *VAR_2, TransactionId VAR_3, XLogRecPtr VAR_4)
{




 if (VAR_2->state < VAR_1)
  return 0;






 if (VAR_2->state < VAR_0 &&
  FUNC_5(VAR_3, FUNC_3(VAR_2)))
  return 0;





 if (!FUNC_1(VAR_2->reorder, VAR_3))
 {

  if (VAR_2->snapshot == ((void*)0))
  {
   VAR_2->snapshot = FUNC_2(VAR_2);

   FUNC_4(VAR_2->snapshot);
  }





  FUNC_4(VAR_2->snapshot);
  FUNC_0(VAR_2->reorder, VAR_3, VAR_4,
          VAR_2->snapshot);
 }

 return 1;
}
