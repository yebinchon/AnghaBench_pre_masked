
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int tgname; int oid; } ;
struct TYPE_12__ {int t_self; } ;
struct TYPE_11__ {int subname; int newname; int relation; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_1__ RenameStmt ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_trigger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int FUNC_8 (int ,int ,int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 int FUNC_10 (int *,int ,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,int ) ;
 TYPE_2__* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,int,int *,int,int *) ;
 int FUNC_19 (int ) ;
 TYPE_2__* FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;

ObjectAddress
FUNC_23(RenameStmt *VAR_14)
{
 Oid VAR_15;
 Relation VAR_16;
 Relation VAR_17;
 HeapTuple VAR_18;
 SysScanDesc VAR_19;
 ScanKeyData VAR_20[2];
 Oid VAR_21;
 ObjectAddress VAR_22;





 VAR_21 = FUNC_8(VAR_14->relation, VAR_0,
          0,
          VAR_10,
          ((void*)0));


 VAR_16 = FUNC_17(VAR_21, VAR_9);
 VAR_17 = FUNC_22(VAR_12, VAR_11);




 FUNC_10(&VAR_20[0],
    VAR_2,
    VAR_3, VAR_8,
    FUNC_6(VAR_21));
 FUNC_10(&VAR_20[1],
    VAR_1,
    VAR_3, VAR_7,
    FUNC_7(VAR_14->newname));
 VAR_19 = FUNC_18(VAR_17, VAR_13, 1,
        ((void*)0), 2, VAR_20);
 if (FUNC_3(VAR_18 = FUNC_20(VAR_19)))
  FUNC_11(VAR_6,
    (FUNC_12(VAR_4),
     FUNC_13("trigger \"%s\" for relation \"%s\" already exists",
      VAR_14->newname, FUNC_9(VAR_16))));
 FUNC_19(VAR_19);




 FUNC_10(&VAR_20[0],
    VAR_2,
    VAR_3, VAR_8,
    FUNC_6(VAR_21));
 FUNC_10(&VAR_20[1],
    VAR_1,
    VAR_3, VAR_7,
    FUNC_7(VAR_14->subname));
 VAR_19 = FUNC_18(VAR_17, VAR_13, 1,
        ((void*)0), 2, VAR_20);
 if (FUNC_3(VAR_18 = FUNC_20(VAR_19)))
 {
  Form_pg_trigger VAR_23;




  VAR_18 = FUNC_14(VAR_18);
  VAR_23 = (Form_pg_trigger) FUNC_2(VAR_18);
  VAR_15 = VAR_23->oid;

  FUNC_15(&VAR_23->tgname,
       VAR_14->newname);

  FUNC_1(VAR_17, &VAR_18->t_self, VAR_18);

  FUNC_4(VAR_12,
          VAR_15, 0);






  FUNC_0(VAR_16);
 }
 else
 {
  FUNC_11(VAR_6,
    (FUNC_12(VAR_5),
     FUNC_13("trigger \"%s\" for table \"%s\" does not exist",
      VAR_14->subname, FUNC_9(VAR_16))));
 }

 FUNC_5(VAR_22, VAR_12, VAR_15);

 FUNC_19(VAR_19);

 FUNC_21(VAR_17, VAR_11);




 FUNC_16(VAR_16, VAR_9);

 return VAR_22;
}
