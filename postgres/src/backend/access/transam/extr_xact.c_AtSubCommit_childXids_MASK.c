
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* TransactionState ;
typedef int TransactionId ;
struct TYPE_5__ {int nChildXids; scalar_t__ maxChildXids; int * childXids; TYPE_1__* parent; int fullTransactionId; } ;
struct TYPE_4__ {int nChildXids; int maxChildXids; int * childXids; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int) ;

__attribute__((used)) static void
FUNC_10(void)
{
 TransactionState VAR_5 = VAR_0;
 int VAR_6;

 FUNC_0(VAR_5->parent != ((void*)0));





 VAR_6 = VAR_5->parent->nChildXids + VAR_5->nChildXids + 1;


 if (VAR_5->parent->maxChildXids < VAR_6)
 {
  int VAR_7;
  TransactionId *VAR_8;







  VAR_7 = FUNC_2(VAR_6 * 2,
          (int) (VAR_3 / sizeof(TransactionId)));

  if (VAR_7 < VAR_6)
   FUNC_4(VAR_2,
     (FUNC_5(VAR_1),
      FUNC_6("maximum number of committed subtransactions (%d) exceeded",
       (int) (VAR_3 / sizeof(TransactionId)))));






  if (VAR_5->parent->childXids == ((void*)0))
   VAR_8 =
    FUNC_1(VAR_4,
           VAR_7 * sizeof(TransactionId));
  else
   VAR_8 = FUNC_9(VAR_5->parent->childXids,
          VAR_7 * sizeof(TransactionId));

  VAR_5->parent->childXids = VAR_8;
  VAR_5->parent->maxChildXids = VAR_7;
 }
 VAR_5->parent->childXids[VAR_5->parent->nChildXids] = FUNC_3(VAR_5->fullTransactionId);

 if (VAR_5->nChildXids > 0)
  FUNC_7(&VAR_5->parent->childXids[VAR_5->parent->nChildXids + 1],
      VAR_5->childXids,
      VAR_5->nChildXids * sizeof(TransactionId));

 VAR_5->parent->nChildXids = VAR_6;


 if (VAR_5->childXids != ((void*)0))
  FUNC_8(VAR_5->childXids);

 VAR_5->childXids = ((void*)0);
 VAR_5->nChildXids = 0;
 VAR_5->maxChildXids = 0;
}
