
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_4__ {int numPrepXacts; TYPE_1__** prepXacts; } ;
struct TYPE_3__ {int ondisk; int prepare_start_lsn; int xid; int inredo; } ;
typedef TYPE_1__* GlobalTransaction ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 char* FUNC_3 (int ,int ,int ,int,int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 int VAR_3;

 FUNC_1(VAR_2, VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1->numPrepXacts; VAR_3++)
 {
  TransactionId VAR_4;
  char *VAR_5;
  GlobalTransaction VAR_6 = VAR_1->prepXacts[VAR_3];

  FUNC_0(VAR_6->inredo);

  VAR_4 = VAR_6->xid;

  VAR_5 = FUNC_3(VAR_4,
         VAR_6->prepare_start_lsn,
         VAR_6->ondisk, 0, 0);
  if (VAR_5 != ((void*)0))
   FUNC_4(VAR_5);
 }
 FUNC_2(VAR_2);
}
