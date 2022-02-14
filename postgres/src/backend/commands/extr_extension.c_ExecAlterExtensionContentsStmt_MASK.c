
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ action; int extname; int object; int objtype; } ;
struct TYPE_11__ {scalar_t__ classId; scalar_t__ objectId; scalar_t__ objectSubId; } ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__ AlterExtensionContentsStmt ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_1__,int ,int *) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 TYPE_1__ FUNC_18 (int ,int ,int **,int ,int) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (scalar_t__,scalar_t__) ;

ObjectAddress
FUNC_24(AlterExtensionContentsStmt *VAR_10,
          ObjectAddress *VAR_11)
{
 ObjectAddress VAR_12;
 ObjectAddress VAR_13;
 Relation VAR_14;
 Oid VAR_15;

 VAR_12.classId = VAR_4;
 VAR_12.objectId = FUNC_15(VAR_10->extname, 0);
 VAR_12.objectSubId = 0;


 if (!FUNC_19(VAR_12.objectId, FUNC_1()))
  FUNC_4(VAR_0, VAR_7,
        VAR_10->extname);







 VAR_13 = FUNC_18(VAR_10->objtype, VAR_10->object,
        &VAR_14, VAR_9, 0);

 FUNC_0(VAR_13.objectSubId == 0);
 if (VAR_11)
  *VAR_11 = VAR_13;


 FUNC_5(FUNC_1(), VAR_10->objtype, VAR_13,
         VAR_10->object, VAR_14);




 VAR_15 = FUNC_12(VAR_13.classId, VAR_13.objectId);

 if (VAR_10->action > 0)
 {



  if (FUNC_3(VAR_15))
   FUNC_8(VAR_3,
     (FUNC_9(VAR_2),
      FUNC_10("%s is already a member of extension \"%s\"",
       FUNC_13(&VAR_13),
       FUNC_14(VAR_15))));





  if (VAR_13.classId == VAR_5 &&
   VAR_13.objectId == FUNC_16(VAR_12.objectId))
   FUNC_8(VAR_3,
     (FUNC_9(VAR_2),
      FUNC_10("cannot add schema \"%s\" to extension \"%s\" "
       "because the schema contains the extension",
       FUNC_17(VAR_13.objectId),
       VAR_10->extname)));




  FUNC_20(&VAR_13, &VAR_12, VAR_1);
  FUNC_21(VAR_13.objectId, VAR_13.classId);
 }
 else
 {



  if (VAR_15 != VAR_12.objectId)
   FUNC_8(VAR_3,
     (FUNC_9(VAR_2),
      FUNC_10("%s is not a member of extension \"%s\"",
       FUNC_13(&VAR_13),
       VAR_10->extname)));




  if (FUNC_6(VAR_13.classId, VAR_13.objectId,
           VAR_4,
           VAR_1) != 1)
   FUNC_7(VAR_3, "unexpected number of extension dependency records");





  if (VAR_13.classId == VAR_8)
   FUNC_11(VAR_12.objectId, VAR_13.objectId);
  FUNC_23(VAR_13.objectId, VAR_13.classId);
 }

 FUNC_2(VAR_4, VAR_12.objectId, 0);







 if (VAR_14 != ((void*)0))
  FUNC_22(VAR_14, VAR_6);

 return VAR_12;
}
