
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * adw_entry; int adw_minmulti; int adw_frozenxid; int adw_name; int adw_datid; } ;
typedef TYPE_1__ avw_dbase ;
typedef int TableScanDesc ;
struct TYPE_5__ {int datminmxid; int datfrozenxid; int datname; int oid; } ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_database ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
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
 List *VAR_5 = VAR_4;
 Relation VAR_6;
 TableScanDesc VAR_7;
 HeapTuple VAR_8;
 MemoryContext VAR_9;


 VAR_9 = VAR_1;
 FUNC_6();
 (void) FUNC_2();

 VAR_6 = FUNC_14(VAR_2, VAR_0);
 VAR_7 = FUNC_11(VAR_6, 0, ((void*)0));

 while (FUNC_3(VAR_8 = FUNC_7(VAR_7, VAR_3)))
 {
  Form_pg_database VAR_10 = (Form_pg_database) FUNC_1(VAR_8);
  avw_dbase *VAR_11;
  MemoryContext VAR_12;







  VAR_12 = FUNC_4(VAR_9);

  VAR_11 = (avw_dbase *) FUNC_9(sizeof(avw_dbase));

  VAR_11->adw_datid = VAR_10->oid;
  VAR_11->adw_name = FUNC_10(FUNC_5(VAR_10->datname));
  VAR_11->adw_frozenxid = VAR_10->datfrozenxid;
  VAR_11->adw_minmulti = VAR_10->datminmxid;

  VAR_11->adw_entry = ((void*)0);

  VAR_5 = FUNC_8(VAR_5, VAR_11);
  FUNC_4(VAR_12);
 }

 FUNC_13(VAR_7);
 FUNC_12(VAR_6, VAR_0);

 FUNC_0();

 return VAR_5;
}
