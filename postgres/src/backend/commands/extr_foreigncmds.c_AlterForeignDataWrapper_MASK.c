
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int repl_val ;
typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_21__ {int options; int func_options; int fdwname; } ;
struct TYPE_20__ {void* fdwvalidator; void* oid; } ;
struct TYPE_19__ {int t_self; } ;
struct TYPE_18__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_foreign_data_wrapper ;
typedef int Datum ;
typedef TYPE_4__ AlterFdwStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,void*,int ) ;
 int VAR_10 ;
 int FUNC_6 (TYPE_1__,int ,void*) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 void* VAR_11 ;
 int FUNC_11 (int ) ;
 int VAR_12 ;
 TYPE_2__* FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,TYPE_2__*,int,int*) ;
 int VAR_13 ;
 int FUNC_14 (int ,void*,void*,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (TYPE_2__*) ;
 TYPE_2__* FUNC_20 (TYPE_2__*,int ,int*,int*,int*) ;
 int FUNC_21 (int*,int,int) ;
 int FUNC_22 (int ,int*,void**,int*,void**) ;
 int FUNC_23 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int,int ,void*) ;

ObjectAddress
FUNC_28(AlterFdwStmt *VAR_14)
{
 Relation VAR_15;
 HeapTuple VAR_16;
 Form_pg_foreign_data_wrapper VAR_17;
 Datum VAR_18[VAR_10];
 bool VAR_19[VAR_10];
 bool VAR_20[VAR_10];
 Oid VAR_21;
 bool VAR_22;
 Datum VAR_23;
 bool VAR_24;
 bool VAR_25;
 Oid VAR_26;
 Oid VAR_27;
 ObjectAddress VAR_28;

 VAR_15 = FUNC_26(VAR_9, VAR_12);


 if (!FUNC_24())
  FUNC_15(VAR_6,
    (FUNC_16(VAR_4),
     FUNC_18("permission denied to alter foreign-data wrapper \"%s\"",
      VAR_14->fdwname),
     FUNC_17("Must be superuser to alter a foreign-data wrapper.")));

 VAR_16 = FUNC_12(VAR_7,
        FUNC_0(VAR_14->fdwname));

 if (!FUNC_4(VAR_16))
  FUNC_15(VAR_6,
    (FUNC_16(VAR_5),
     FUNC_18("foreign-data wrapper \"%s\" does not exist", VAR_14->fdwname)));

 VAR_17 = (Form_pg_foreign_data_wrapper) FUNC_3(VAR_16);
 VAR_21 = VAR_17->oid;

 FUNC_21(VAR_18, 0, sizeof(VAR_18));
 FUNC_21(VAR_19, 0, sizeof(VAR_19));
 FUNC_21(VAR_20, 0, sizeof(VAR_20));

 FUNC_22(VAR_14->func_options,
        &VAR_24, &VAR_26,
        &VAR_25, &VAR_27);

 if (VAR_24)
 {
  VAR_18[VAR_0 - 1] = FUNC_7(VAR_26);
  VAR_20[VAR_0 - 1] = 1;





  FUNC_15(VAR_13,
    (FUNC_18("changing the foreign-data wrapper handler can change behavior of existing foreign tables")));
 }

 if (VAR_25)
 {
  VAR_18[VAR_2 - 1] = FUNC_7(VAR_27);
  VAR_20[VAR_2 - 1] = 1;






  if (FUNC_8(VAR_27))
   FUNC_15(VAR_13,
     (FUNC_18("changing the foreign-data wrapper validator can cause "
       "the options for dependent objects to become invalid")));
 }
 else
 {



  VAR_27 = VAR_17->fdwvalidator;
 }




 if (VAR_14->options)
 {

  VAR_23 = FUNC_13(VAR_8,
        VAR_16,
        VAR_1,
        &VAR_22);
  if (VAR_22)
   VAR_23 = FUNC_9(((void*)0));


  VAR_23 = FUNC_27(VAR_9,
          VAR_23,
          VAR_14->options,
          VAR_27);

  if (FUNC_10(FUNC_2(VAR_23)))
   VAR_18[VAR_1 - 1] = VAR_23;
  else
   VAR_19[VAR_1 - 1] = 1;

  VAR_20[VAR_1 - 1] = 1;
 }


 VAR_16 = FUNC_20(VAR_16, FUNC_11(VAR_15),
         VAR_18, VAR_19, VAR_20);

 FUNC_1(VAR_15, &VAR_16->t_self, VAR_16);

 FUNC_19(VAR_16);

 FUNC_6(VAR_28, VAR_9, VAR_21);


 if (VAR_24 || VAR_25)
 {
  ObjectAddress VAR_29;





  FUNC_14(VAR_9,
          VAR_21,
          VAR_11,
          VAR_3);



  if (FUNC_8(VAR_26))
  {
   VAR_29.classId = VAR_11;
   VAR_29.objectId = VAR_26;
   VAR_29.objectSubId = 0;
   FUNC_23(&VAR_28, &VAR_29, VAR_3);
  }

  if (FUNC_8(VAR_27))
  {
   VAR_29.classId = VAR_11;
   VAR_29.objectId = VAR_27;
   VAR_29.objectSubId = 0;
   FUNC_23(&VAR_28, &VAR_29, VAR_3);
  }
 }

 FUNC_5(VAR_9, VAR_21, 0);

 FUNC_25(VAR_15, VAR_12);

 return VAR_28;
}
