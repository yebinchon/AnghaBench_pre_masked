
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_12__ {int datdba; int oid; } ;
struct TYPE_11__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_database ;
typedef int Datum ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_14 ;
 int FUNC_11 (int *,int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,char const*) ;
 int * FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 () ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int,int ,int*) ;
 TYPE_1__* FUNC_22 (TYPE_1__*,int ,int *,int*,int*) ;
 int FUNC_23 (int*,int,int) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ,int,int *,int,int *) ;
 int FUNC_26 (int ) ;
 TYPE_1__* FUNC_27 (int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ) ;

ObjectAddress
FUNC_30(const char *VAR_15, Oid VAR_16)
{
 Oid VAR_17;
 HeapTuple VAR_18;
 Relation VAR_19;
 ScanKeyData VAR_20;
 SysScanDesc VAR_21;
 Form_pg_database VAR_22;
 ObjectAddress VAR_23;






 VAR_19 = FUNC_29(VAR_6, VAR_14);
 FUNC_11(&VAR_20,
    VAR_3,
    VAR_4, VAR_10,
    FUNC_0(VAR_15));
 VAR_21 = FUNC_25(VAR_19, VAR_5, 1,
         ((void*)0), 1, &VAR_20);
 VAR_18 = FUNC_27(VAR_21);
 if (!FUNC_5(VAR_18))
  FUNC_16(VAR_9,
    (FUNC_17(VAR_8),
     FUNC_18("database \"%s\" does not exist", VAR_15)));

 VAR_22 = (Form_pg_database) FUNC_3(VAR_18);
 VAR_17 = VAR_22->oid;






 if (VAR_22->datdba != VAR_16)
 {
  Datum VAR_24[VAR_11];
  bool VAR_25[VAR_11];
  bool VAR_26[VAR_11];
  Acl *VAR_27;
  Datum VAR_28;
  bool VAR_29;
  HeapTuple VAR_30;


  if (!FUNC_24(VAR_17, FUNC_4()))
   FUNC_12(VAR_0, VAR_13,
         VAR_15);


  FUNC_15(FUNC_4(), VAR_16);
  if (!FUNC_19())
   FUNC_16(VAR_9,
     (FUNC_17(VAR_7),
      FUNC_18("permission denied to change owner of database")));

  FUNC_23(VAR_25, 0, sizeof(VAR_25));
  FUNC_23(VAR_26, 0, sizeof(VAR_26));

  VAR_26[VAR_2 - 1] = 1;
  VAR_24[VAR_2 - 1] = FUNC_8(VAR_16);





  VAR_28 = FUNC_21(VAR_18,
        VAR_1,
        FUNC_10(VAR_19),
        &VAR_29);
  if (!VAR_29)
  {
   VAR_27 = FUNC_13(FUNC_2(VAR_28),
         VAR_22->datdba, VAR_16);
   VAR_26[VAR_1 - 1] = 1;
   VAR_24[VAR_1 - 1] = FUNC_9(VAR_27);
  }

  VAR_30 = FUNC_22(VAR_18, FUNC_10(VAR_19), VAR_24, VAR_25, VAR_26);
  FUNC_1(VAR_19, &VAR_30->t_self, VAR_30);

  FUNC_20(VAR_30);


  FUNC_14(VAR_6, VAR_17, VAR_16);
 }

 FUNC_6(VAR_6, VAR_17, 0);

 FUNC_7(VAR_23, VAR_6, VAR_17);

 FUNC_26(VAR_21);


 FUNC_28(VAR_19, VAR_12);

 return VAR_23;
}
