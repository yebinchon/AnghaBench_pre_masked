
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ XLogSegNo ;
typedef void* XLogRecPtr ;
struct TYPE_5__ {scalar_t__ restart_lsn; } ;
struct TYPE_6__ {TYPE_1__ data; int mutex; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int) ;
 void* FUNC_1 () ;
 void* FUNC_2 () ;
 scalar_t__ VAR_0 ;
 void* FUNC_3 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 () ;
 int VAR_2 ;

void
FUNC_12(void)
{
 ReplicationSlot *VAR_3 = VAR_1;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->data.restart_lsn == VAR_0);
 while (1)
 {
  XLogSegNo VAR_4;
  XLogRecPtr VAR_5;
  if (!FUNC_4() && FUNC_6(VAR_3))
  {
   XLogRecPtr VAR_6;


   VAR_5 = FUNC_2();
   FUNC_7(&VAR_3->mutex);
   VAR_3->data.restart_lsn = VAR_5;
   FUNC_8(&VAR_3->mutex);


   VAR_6 = FUNC_3();


   FUNC_10(VAR_6);
  }
  else
  {
   VAR_5 = FUNC_1();
   FUNC_7(&VAR_3->mutex);
   VAR_3->data.restart_lsn = VAR_5;
   FUNC_8(&VAR_3->mutex);
  }


  FUNC_5();
  FUNC_9(VAR_3->data.restart_lsn, VAR_4, VAR_2);
  if (FUNC_11() < VAR_4)
   break;
 }
}
