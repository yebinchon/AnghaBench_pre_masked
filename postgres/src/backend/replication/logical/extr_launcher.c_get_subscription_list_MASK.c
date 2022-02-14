
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_5__ {int subname; int subenabled; int subowner; int subdbid; int oid; } ;
struct TYPE_4__ {int name; int enabled; int owner; int dbid; int oid; } ;
typedef TYPE_1__ Subscription ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_subscription ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static List *
FUNC_15(void)
{
 List *VAR_5 = VAR_3;
 Relation VAR_6;
 TableScanDesc VAR_7;
 HeapTuple VAR_8;
 MemoryContext VAR_9;


 VAR_9 = VAR_1;
 FUNC_6();
 (void) FUNC_2();

 VAR_6 = FUNC_14(VAR_4, VAR_0);
 VAR_7 = FUNC_11(VAR_6, 0, ((void*)0));

 while (FUNC_3(VAR_8 = FUNC_7(VAR_7, VAR_2)))
 {
  Form_pg_subscription VAR_10 = (Form_pg_subscription) FUNC_1(VAR_8);
  Subscription *VAR_11;
  MemoryContext VAR_12;







  VAR_12 = FUNC_4(VAR_9);

  VAR_11 = (Subscription *) FUNC_9(sizeof(Subscription));
  VAR_11->oid = VAR_10->oid;
  VAR_11->dbid = VAR_10->subdbid;
  VAR_11->owner = VAR_10->subowner;
  VAR_11->enabled = VAR_10->subenabled;
  VAR_11->name = FUNC_10(FUNC_5(VAR_10->subname));


  VAR_5 = FUNC_8(VAR_5, VAR_11);
  FUNC_4(VAR_12);
 }

 FUNC_13(VAR_7);
 FUNC_12(VAR_6, VAR_0);

 FUNC_0();

 return VAR_5;
}
