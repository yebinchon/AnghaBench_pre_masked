
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ deptype; scalar_t__ objsubid; int objid; int classid; } ;
struct TYPE_17__ {scalar_t__ extnamespace; int extname; int extrelocatable; } ;
struct TYPE_16__ {int t_self; } ;
struct TYPE_15__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddresses ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_extension ;
typedef TYPE_4__* Form_pg_depend ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_1__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (TYPE_1__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_22 ;
 int FUNC_10 (int *,int ,int ,int ,int ) ;
 int FUNC_11 (scalar_t__,int ,char const*) ;
 int FUNC_12 (scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int ,int ) ;
 int FUNC_17 (char*,char const*,...) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (char const*,int) ;
 int FUNC_21 (scalar_t__) ;
 TYPE_2__* FUNC_22 (TYPE_2__*) ;
 int * FUNC_23 () ;
 int FUNC_24 (scalar_t__,int ) ;
 scalar_t__ FUNC_25 (scalar_t__,int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ,int,int *,int,int *) ;
 int FUNC_28 (int ) ;
 TYPE_2__* FUNC_29 (int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (scalar_t__,int ) ;

ObjectAddress
FUNC_32(const char *VAR_23, const char *VAR_24, Oid *VAR_25)
{
 Oid VAR_26;
 Oid VAR_27;
 Oid VAR_28 = VAR_18;
 AclResult VAR_29;
 Relation VAR_30;
 ScanKeyData VAR_31[2];
 SysScanDesc VAR_32;
 HeapTuple VAR_33;
 Form_pg_extension VAR_34;
 Relation VAR_35;
 SysScanDesc VAR_36;
 HeapTuple VAR_37;
 ObjectAddresses *VAR_38;
 ObjectAddress VAR_39;

 VAR_26 = FUNC_20(VAR_23, 0);

 VAR_27 = FUNC_6(VAR_24);





 if (!FUNC_24(VAR_26, FUNC_3()))
  FUNC_11(VAR_0, VAR_20,
        VAR_23);


 VAR_29 = FUNC_25(VAR_27, FUNC_3(), VAR_2);
 if (VAR_29 != VAR_1)
  FUNC_11(VAR_29, VAR_21, VAR_24);





 if (FUNC_18(VAR_19, VAR_27) == VAR_26)
  FUNC_14(VAR_13,
    (FUNC_15(VAR_12),
     FUNC_17("cannot move extension \"%s\" into schema \"%s\" "
      "because the extension contains the schema",
      VAR_23, VAR_24)));


 VAR_30 = FUNC_31(VAR_15, VAR_22);

 FUNC_10(&VAR_31[0],
    VAR_6,
    VAR_7, VAR_16,
    FUNC_9(VAR_26));

 VAR_32 = FUNC_27(VAR_30, VAR_14, 1,
         ((void*)0), 1, VAR_31);

 VAR_33 = FUNC_29(VAR_32);

 if (!FUNC_4(VAR_33))
  FUNC_13(VAR_13, "could not find tuple for extension %u",
    VAR_26);


 VAR_33 = FUNC_22(VAR_33);
 VAR_34 = (Form_pg_extension) FUNC_2(VAR_33);

 FUNC_28(VAR_32);





 if (VAR_34->extnamespace == VAR_27)
 {
  FUNC_30(VAR_30, VAR_22);
  return VAR_17;
 }


 if (!VAR_34->extrelocatable)
  FUNC_14(VAR_13,
    (FUNC_15(VAR_11),
     FUNC_17("extension \"%s\" does not support SET SCHEMA",
      FUNC_7(VAR_34->extname))));

 VAR_38 = FUNC_23();





 VAR_35 = FUNC_31(VAR_10, VAR_3);

 FUNC_10(&VAR_31[0],
    VAR_4,
    VAR_7, VAR_16,
    FUNC_9(VAR_15));
 FUNC_10(&VAR_31[1],
    VAR_5,
    VAR_7, VAR_16,
    FUNC_9(VAR_26));

 VAR_36 = FUNC_27(VAR_35, VAR_9, 1,
         ((void*)0), 2, VAR_31);

 while (FUNC_4(VAR_37 = FUNC_29(VAR_36)))
 {
  Form_pg_depend VAR_40 = (Form_pg_depend) FUNC_2(VAR_37);
  ObjectAddress VAR_41;
  Oid VAR_42;






  if (VAR_40->deptype != VAR_8)
   continue;

  VAR_41.classId = VAR_40->classid;
  VAR_41.objectId = VAR_40->objid;
  VAR_41.objectSubId = VAR_40->objsubid;

  if (VAR_41.objectSubId != 0)
   FUNC_13(VAR_13, "extension should not have a sub-object dependency");


  VAR_42 = FUNC_0(VAR_41.classId,
             VAR_41.objectId,
             VAR_27,
             VAR_38);




  if (VAR_28 == VAR_18 && VAR_42 != VAR_18)
   VAR_28 = VAR_42;





  if (VAR_42 != VAR_18 && VAR_42 != VAR_28)
   FUNC_14(VAR_13,
     (FUNC_15(VAR_11),
      FUNC_17("extension \"%s\" does not support SET SCHEMA",
       FUNC_7(VAR_34->extname)),
      FUNC_16("%s is not in the extension's schema \"%s\"",
          FUNC_19(&VAR_41),
          FUNC_21(VAR_28))));
 }


 if (VAR_25)
  *VAR_25 = VAR_28;

 FUNC_28(VAR_36);

 FUNC_26(VAR_35, VAR_3);


 VAR_34->extnamespace = VAR_27;

 FUNC_1(VAR_30, &VAR_33->t_self, VAR_33);

 FUNC_30(VAR_30, VAR_22);


 FUNC_12(VAR_15, VAR_26,
      VAR_19, VAR_28, VAR_27);

 FUNC_5(VAR_15, VAR_26, 0);

 FUNC_8(VAR_39, VAR_15, VAR_26);

 return VAR_39;
}
