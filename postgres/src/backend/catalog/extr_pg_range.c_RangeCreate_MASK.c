
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nulls ;
struct TYPE_4__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
typedef int Relation ;
typedef void* RegProcedure ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_4 (int ,int *,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_14, Oid VAR_15, Oid VAR_16,
   Oid VAR_17, RegProcedure VAR_18,
   RegProcedure VAR_19)
{
 Relation VAR_20;
 Datum VAR_21[VAR_8];
 bool VAR_22[VAR_8];
 HeapTuple VAR_23;
 ObjectAddress VAR_24;
 ObjectAddress VAR_25;

 VAR_20 = FUNC_9(VAR_11, VAR_12);

 FUNC_6(VAR_22, 0, sizeof(VAR_22));

 VAR_21[VAR_5 - 1] = FUNC_1(VAR_14);
 VAR_21[VAR_4 - 1] = FUNC_1(VAR_15);
 VAR_21[VAR_1 - 1] = FUNC_1(VAR_16);
 VAR_21[VAR_3 - 1] = FUNC_1(VAR_17);
 VAR_21[VAR_0 - 1] = FUNC_1(VAR_18);
 VAR_21[VAR_2 - 1] = FUNC_1(VAR_19);

 VAR_23 = FUNC_4(FUNC_3(VAR_20), VAR_21, VAR_22);

 FUNC_0(VAR_20, VAR_23);
 FUNC_5(VAR_23);



 VAR_24.classId = VAR_13;
 VAR_24.objectId = VAR_14;
 VAR_24.objectSubId = 0;

 VAR_25.classId = VAR_13;
 VAR_25.objectId = VAR_15;
 VAR_25.objectSubId = 0;
 FUNC_7(&VAR_24, &VAR_25, VAR_7);

 VAR_25.classId = VAR_9;
 VAR_25.objectId = VAR_17;
 VAR_25.objectSubId = 0;
 FUNC_7(&VAR_24, &VAR_25, VAR_7);

 if (FUNC_2(VAR_16))
 {
  VAR_25.classId = VAR_6;
  VAR_25.objectId = VAR_16;
  VAR_25.objectSubId = 0;
  FUNC_7(&VAR_24, &VAR_25, VAR_7);
 }

 if (FUNC_2(VAR_18))
 {
  VAR_25.classId = VAR_10;
  VAR_25.objectId = VAR_18;
  VAR_25.objectSubId = 0;
  FUNC_7(&VAR_24, &VAR_25, VAR_7);
 }

 if (FUNC_2(VAR_19))
 {
  VAR_25.classId = VAR_10;
  VAR_25.objectId = VAR_19;
  VAR_25.objectSubId = 0;
  FUNC_7(&VAR_24, &VAR_25, VAR_7);
 }

 FUNC_8(VAR_20, VAR_12);
}
