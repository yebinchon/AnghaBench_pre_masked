
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int srsublsn; int srsubstate; int srrelid; } ;
struct TYPE_4__ {int lsn; int state; int relid; } ;
typedef int SysScanDesc ;
typedef TYPE_1__ SubscriptionRelState ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_subscription_rel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int * FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int,int *,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

List *
FUNC_11(Oid VAR_7)
{
 List *VAR_8 = VAR_5;
 Relation VAR_9;
 HeapTuple VAR_10;
 int VAR_11 = 0;
 ScanKeyData VAR_12[2];
 SysScanDesc VAR_13;

 VAR_9 = FUNC_10(VAR_6, VAR_0);

 FUNC_3(&VAR_12[VAR_11++],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_2(VAR_7));

 VAR_13 = FUNC_6(VAR_9, VAR_4, 0,
         ((void*)0), VAR_11, VAR_12);

 while (FUNC_1(VAR_10 = FUNC_8(VAR_13)))
 {
  Form_pg_subscription_rel VAR_14;
  SubscriptionRelState *VAR_15;

  VAR_14 = (Form_pg_subscription_rel) FUNC_0(VAR_10);

  VAR_15 = (SubscriptionRelState *) FUNC_5(sizeof(SubscriptionRelState));
  VAR_15->relid = VAR_14->srrelid;
  VAR_15->state = VAR_14->srsubstate;
  VAR_15->lsn = VAR_14->srsublsn;

  VAR_8 = FUNC_4(VAR_8, VAR_15);
 }


 FUNC_7(VAR_13);
 FUNC_9(VAR_9, VAR_0);

 return VAR_8;
}
