
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_5__ {int numPrepXacts; TYPE_1__** prepXacts; } ;
struct TYPE_4__ {scalar_t__ xid; scalar_t__ ondisk; int inredo; } ;
typedef TYPE_1__* GlobalTransaction ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,scalar_t__) ;

void
FUNC_6(TransactionId VAR_4, bool VAR_5)
{
 GlobalTransaction VAR_6 = ((void*)0);
 int VAR_7;
 bool VAR_8 = 0;

 FUNC_0(FUNC_1(VAR_3, VAR_1));
 FUNC_0(FUNC_2());

 for (VAR_7 = 0; VAR_7 < VAR_2->numPrepXacts; VAR_7++)
 {
  VAR_6 = VAR_2->prepXacts[VAR_7];

  if (VAR_6->xid == VAR_4)
  {
   FUNC_0(VAR_6->inredo);
   VAR_8 = 1;
   break;
  }
 }




 if (!VAR_8)
  return;




 FUNC_5(VAR_0, "removing 2PC data for transaction %u", VAR_4);
 if (VAR_6->ondisk)
  FUNC_4(VAR_4, VAR_5);
 FUNC_3(VAR_6);

 return;
}
