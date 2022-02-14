
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_6__ {int nextFullXid; } ;
struct TYPE_5__ {int numPrepXacts; TYPE_1__** prepXacts; } ;
struct TYPE_4__ {int ondisk; int prepare_start_lsn; int xid; int inredo; } ;
typedef TYPE_1__* GlobalTransaction ;
typedef int FullTransactionId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 char* FUNC_3 (int ,int ,int ,int,int) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int *,int) ;

TransactionId
FUNC_9(TransactionId **VAR_4, int *VAR_5)
{
 FullTransactionId VAR_6 = VAR_1->nextFullXid;
 TransactionId VAR_7 = FUNC_5(VAR_6);
 TransactionId VAR_8 = VAR_7;
 TransactionId *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_1(VAR_3, VAR_0);
 for (VAR_12 = 0; VAR_12 < VAR_2->numPrepXacts; VAR_12++)
 {
  TransactionId VAR_13;
  char *VAR_14;
  GlobalTransaction VAR_15 = VAR_2->prepXacts[VAR_12];

  FUNC_0(VAR_15->inredo);

  VAR_13 = VAR_15->xid;

  VAR_14 = FUNC_3(VAR_13,
         VAR_15->prepare_start_lsn,
         VAR_15->ondisk, 0, 1);

  if (VAR_14 == ((void*)0))
   continue;





  if (FUNC_4(VAR_13, VAR_8))
   VAR_8 = VAR_13;

  if (VAR_4)
  {
   if (VAR_10 == VAR_11)
   {
    if (VAR_10 == 0)
    {
     VAR_11 = 10;
     VAR_9 = FUNC_6(VAR_11 * sizeof(TransactionId));
    }
    else
    {
     VAR_11 = VAR_11 * 2;
     VAR_9 = FUNC_8(VAR_9, VAR_11 * sizeof(TransactionId));
    }
   }
   VAR_9[VAR_10++] = VAR_13;
  }

  FUNC_7(VAR_14);
 }
 FUNC_2(VAR_3);

 if (VAR_4)
 {
  *VAR_4 = VAR_9;
  *VAR_5 = VAR_10;
 }

 return VAR_8;
}
