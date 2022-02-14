
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
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_9 ;
 int * FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

List *
FUNC_12(Oid VAR_10)
{
 List *VAR_11 = VAR_7;
 Relation VAR_12;
 HeapTuple VAR_13;
 int VAR_14 = 0;
 ScanKeyData VAR_15[2];
 SysScanDesc VAR_16;

 VAR_12 = FUNC_11(VAR_9, VAR_0);

 FUNC_4(&VAR_15[VAR_14++],
    VAR_1,
    VAR_3, VAR_5,
    FUNC_3(VAR_10));

 FUNC_4(&VAR_15[VAR_14++],
    VAR_2,
    VAR_3, VAR_4,
    FUNC_0(VAR_8));

 VAR_16 = FUNC_7(VAR_12, VAR_6, 0,
         ((void*)0), VAR_14, VAR_15);

 while (FUNC_2(VAR_13 = FUNC_9(VAR_16)))
 {
  Form_pg_subscription_rel VAR_17;
  SubscriptionRelState *VAR_18;

  VAR_17 = (Form_pg_subscription_rel) FUNC_1(VAR_13);

  VAR_18 = (SubscriptionRelState *) FUNC_6(sizeof(SubscriptionRelState));
  VAR_18->relid = VAR_17->srrelid;
  VAR_18->state = VAR_17->srsubstate;
  VAR_18->lsn = VAR_17->srsublsn;

  VAR_11 = FUNC_5(VAR_11, VAR_18);
 }


 FUNC_8(VAR_16);
 FUNC_10(VAR_12, VAR_0);

 return VAR_11;
}
