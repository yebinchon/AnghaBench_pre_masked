
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_15__ {int options; int func_options; int fdwname; } ;
struct TYPE_14__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
struct TYPE_13__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;
typedef int Datum ;
typedef TYPE_3__ CreateFdwStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int * FUNC_4 (int ,int) ;
 void* FUNC_5 (TYPE_1__*,int ,int) ;
 void* FUNC_6 () ;
 int FUNC_7 (void*,void*,int ) ;
 int VAR_13 ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (void*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (int ,int*,int*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int*,int,int) ;
 int VAR_16 ;
 int FUNC_19 (int ,int*,void**,int*,void**) ;
 int FUNC_20 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_21 (TYPE_2__*,int) ;
 int FUNC_22 (void*,void*,void*) ;
 int FUNC_23 () ;
 int FUNC_24 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_25 (void*,int ) ;
 int FUNC_26 (void*,int ,int ,void*) ;

ObjectAddress
FUNC_27(CreateFdwStmt *VAR_17)
{
 Relation VAR_18;
 Datum VAR_19[VAR_13];
 bool VAR_20[VAR_13];
 HeapTuple VAR_21;
 Oid VAR_22;
 bool VAR_23;
 bool VAR_24;
 Oid VAR_25;
 Oid VAR_26;
 Datum VAR_27;
 Oid VAR_28;
 ObjectAddress VAR_29;
 ObjectAddress VAR_30;

 VAR_18 = FUNC_25(VAR_12, VAR_15);


 if (!FUNC_23())
  FUNC_12(VAR_10,
    (FUNC_13(VAR_9),
     FUNC_15("permission denied to create foreign-data wrapper \"%s\"",
      VAR_17->fdwname),
     FUNC_14("Must be superuser to create a foreign-data wrapper.")));


 VAR_28 = FUNC_6();




 if (FUNC_4(VAR_17->fdwname, 1) != ((void*)0))
  FUNC_12(VAR_10,
    (FUNC_13(VAR_8),
     FUNC_15("foreign-data wrapper \"%s\" already exists",
      VAR_17->fdwname)));




 FUNC_18(VAR_19, 0, sizeof(VAR_19));
 FUNC_18(VAR_20, 0, sizeof(VAR_20));

 VAR_22 = FUNC_5(VAR_18, VAR_11,
          VAR_6);
 VAR_19[VAR_6 - 1] = FUNC_8(VAR_22);
 VAR_19[VAR_2 - 1] =
  FUNC_3(VAR_16, FUNC_0(VAR_17->fdwname));
 VAR_19[VAR_4 - 1] = FUNC_8(VAR_28);


 FUNC_19(VAR_17->func_options,
        &VAR_23, &VAR_25,
        &VAR_24, &VAR_26);

 VAR_19[VAR_1 - 1] = FUNC_8(VAR_25);
 VAR_19[VAR_5 - 1] = FUNC_8(VAR_26);

 VAR_20[VAR_0 - 1] = 1;

 VAR_27 = FUNC_26(VAR_12,
           FUNC_10(((void*)0)),
           VAR_17->options,
           VAR_26);

 if (FUNC_11(FUNC_2(VAR_27)))
  VAR_19[VAR_3 - 1] = VAR_27;
 else
  VAR_20[VAR_3 - 1] = 1;

 VAR_21 = FUNC_16(VAR_18->rd_att, VAR_19, VAR_20);

 FUNC_1(VAR_18, VAR_21);

 FUNC_17(VAR_21);


 VAR_29.classId = VAR_12;
 VAR_29.objectId = VAR_22;
 VAR_29.objectSubId = 0;

 if (FUNC_9(VAR_25))
 {
  VAR_30.classId = VAR_14;
  VAR_30.objectId = VAR_25;
  VAR_30.objectSubId = 0;
  FUNC_20(&VAR_29, &VAR_30, VAR_7);
 }

 if (FUNC_9(VAR_26))
 {
  VAR_30.classId = VAR_14;
  VAR_30.objectId = VAR_26;
  VAR_30.objectSubId = 0;
  FUNC_20(&VAR_29, &VAR_30, VAR_7);
 }

 FUNC_22(VAR_12, VAR_22, VAR_28);


 FUNC_21(&VAR_29, 0);


 FUNC_7(VAR_12, VAR_22, 0);

 FUNC_24(VAR_18, VAR_15);

 return VAR_29;
}
