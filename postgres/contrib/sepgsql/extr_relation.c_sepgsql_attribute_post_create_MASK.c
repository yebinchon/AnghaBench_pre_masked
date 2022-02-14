
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int attname; } ;
struct TYPE_9__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
struct TYPE_8__ {int data; } ;
typedef int SysScanDesc ;
typedef TYPE_1__ StringInfoData ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 char VAR_9 ;
 char VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 int VAR_15 ;
 int FUNC_7 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_8 (int ,char*,scalar_t__,void*) ;
 int FUNC_9 (TYPE_2__*) ;
 char FUNC_10 (void*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int ,int ,int ,int) ;
 char* FUNC_15 (char*,char*,int ,int ) ;
 char* FUNC_16 () ;
 char* FUNC_17 (void*,void*,int ) ;
 int FUNC_18 (int ,int ,int,int ,int,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;

void
FUNC_23(Oid VAR_16, AttrNumber VAR_17)
{
 Relation VAR_18;
 ScanKeyData VAR_19[2];
 SysScanDesc VAR_20;
 HeapTuple VAR_21;
 char *VAR_22;
 char *VAR_23;
 char *VAR_24;
 ObjectAddress VAR_25;
 Form_pg_attribute VAR_26;
 StringInfoData VAR_27;
 char VAR_28 = FUNC_10(VAR_16);





 if (VAR_28 != VAR_10 && VAR_28 != VAR_9)
  return;





 VAR_18 = FUNC_22(VAR_3, VAR_0);

 FUNC_5(&VAR_19[0],
    VAR_2,
    VAR_5, VAR_8,
    FUNC_4(VAR_16));
 FUNC_5(&VAR_19[1],
    VAR_1,
    VAR_5, VAR_7,
    FUNC_2(VAR_17));

 VAR_20 = FUNC_18(VAR_18, VAR_4, 1,
          VAR_15, 2, &VAR_19[0]);

 VAR_21 = FUNC_20(VAR_20);
 if (!FUNC_1(VAR_21))
  FUNC_8(VAR_6, "could not find tuple for column %d of relation %u",
    VAR_17, VAR_16);

 VAR_26 = (Form_pg_attribute) FUNC_0(VAR_21);

 VAR_22 = FUNC_16();
 VAR_23 = FUNC_17(VAR_11, VAR_16, 0);
 VAR_24 = FUNC_15(VAR_22, VAR_23,
           VAR_13,
           FUNC_3(VAR_26->attname));




 VAR_25.classId = VAR_11;
 VAR_25.objectId = VAR_16;
 VAR_25.objectSubId = 0;

 FUNC_11(&VAR_27);
 FUNC_7(&VAR_27, "%s.%s",
      FUNC_9(&VAR_25),
      FUNC_13(FUNC_3(VAR_26->attname)));
 FUNC_14(VAR_24,
          VAR_13,
          VAR_14,
          VAR_27.data,
          1);




 VAR_25.classId = VAR_11;
 VAR_25.objectId = VAR_16;
 VAR_25.objectSubId = VAR_17;
 FUNC_6(&VAR_25, VAR_12, VAR_24);

 FUNC_19(VAR_20);
 FUNC_21(VAR_18, VAR_0);

 FUNC_12(VAR_23);
 FUNC_12(VAR_24);
}
