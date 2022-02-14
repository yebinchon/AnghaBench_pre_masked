
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_9__ {int amtype; int amname; int handler_name; } ;
struct TYPE_8__ {scalar_t__ objectSubId; void* objectId; int classId; } ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef int Datum ;
typedef TYPE_2__ CreateAmStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_4 (int ,int ,int) ;
 void* FUNC_5 (int ,int,int ) ;
 int VAR_11 ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int VAR_13 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int ,int*,int*) ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (int ,int ) ;
 int FUNC_16 (int*,int,int) ;
 int VAR_14 ;
 int FUNC_17 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_18 (TYPE_1__*,int) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;

ObjectAddress
FUNC_22(CreateAmStmt *VAR_15)
{
 Relation VAR_16;
 ObjectAddress VAR_17;
 ObjectAddress VAR_18;
 Oid VAR_19;
 Oid VAR_20;
 bool VAR_21[VAR_11];
 Datum VAR_22[VAR_11];
 HeapTuple VAR_23;

 VAR_16 = FUNC_21(VAR_1, VAR_13);


 if (!FUNC_19())
  FUNC_9(VAR_10,
    (FUNC_10(VAR_9),
     FUNC_12("permission denied to create access method \"%s\"",
      VAR_15->amname),
     FUNC_11("Must be superuser to create an access method.")));


 VAR_19 = FUNC_5(VAR_0, VAR_6,
       FUNC_0(VAR_15->amname));
 if (FUNC_7(VAR_19))
 {
  FUNC_9(VAR_10,
    (FUNC_10(VAR_8),
     FUNC_12("access method \"%s\" already exists",
      VAR_15->amname)));
 }




 VAR_20 = FUNC_15(VAR_15->handler_name, VAR_15->amtype);




 FUNC_16(VAR_22, 0, sizeof(VAR_22));
 FUNC_16(VAR_21, 0, sizeof(VAR_21));

 VAR_19 = FUNC_4(VAR_16, VAR_2, VAR_6);
 VAR_22[VAR_6 - 1] = FUNC_6(VAR_19);
 VAR_22[VAR_4 - 1] =
  FUNC_3(VAR_14, FUNC_0(VAR_15->amname));
 VAR_22[VAR_3 - 1] = FUNC_6(VAR_20);
 VAR_22[VAR_5 - 1] = FUNC_2(VAR_15->amtype);

 VAR_23 = FUNC_13(FUNC_8(VAR_16), VAR_22, VAR_21);

 FUNC_1(VAR_16, VAR_23);
 FUNC_14(VAR_23);

 VAR_17.classId = VAR_1;
 VAR_17.objectId = VAR_19;
 VAR_17.objectSubId = 0;


 VAR_18.classId = VAR_12;
 VAR_18.objectId = VAR_20;
 VAR_18.objectSubId = 0;

 FUNC_17(&VAR_17, &VAR_18, VAR_7);

 FUNC_18(&VAR_17, 0);

 FUNC_20(VAR_16, VAR_13);

 return VAR_17;
}
