
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_14__ {scalar_t__ attnum; int attname; } ;
struct TYPE_13__ {int relkind; scalar_t__ relnamespace; int relname; } ;
struct TYPE_12__ {scalar_t__ objectId; scalar_t__ objectSubId; void* classId; } ;
struct TYPE_11__ {int data; } ;
typedef int SysScanDesc ;
typedef TYPE_1__ StringInfoData ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_class ;
typedef TYPE_4__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 void* VAR_9 ;
 int FUNC_3 (void*) ;
 scalar_t__ VAR_10 ;





 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int VAR_21 ;
 int FUNC_6 (TYPE_1__*,char*,int ,int ,...) ;
 int FUNC_7 (int ,char*,void*) ;
 int FUNC_8 (TYPE_2__*) ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*,int ,int ,int ,int) ;
 int FUNC_15 (char*,int ,int ,int ,int) ;
 char* FUNC_16 (char*,char*,int ,char*) ;
 char* FUNC_17 () ;
 char* FUNC_18 (void*,scalar_t__,int ) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (int ,int ,int,int ,int,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (void*,int ) ;

void
FUNC_25(Oid VAR_22)
{
 Relation VAR_23;
 ScanKeyData VAR_24;
 SysScanDesc VAR_25;
 HeapTuple VAR_26;
 Form_pg_class VAR_27;
 ObjectAddress VAR_28;
 uint16_t VAR_29;
 char *VAR_30;
 char *VAR_31;
 char *VAR_32;
 char *VAR_33;
 char *VAR_34;
 StringInfoData VAR_35;





 VAR_23 = FUNC_24(VAR_11, VAR_0);

 FUNC_4(&VAR_24,
    VAR_2,
    VAR_5, VAR_8,
    FUNC_3(VAR_22));

 VAR_25 = FUNC_20(VAR_23, VAR_6, 1,
          VAR_21, 1, &VAR_24);

 VAR_26 = FUNC_22(VAR_25);
 if (!FUNC_1(VAR_26))
  FUNC_7(VAR_7, "could not find tuple for relation %u", VAR_22);

 VAR_27 = (Form_pg_class) FUNC_0(VAR_26);


 if (VAR_27->relkind == 132 &&
  VAR_27->relnamespace == VAR_10)
  goto out;




 VAR_28.classId = VAR_9;
 VAR_28.objectId = VAR_27->relnamespace;
 VAR_28.objectSubId = 0;
 FUNC_14(&VAR_28,
       VAR_14,
       VAR_20,
       FUNC_8(&VAR_28),
       1);

 switch (VAR_27->relkind)
 {
  case 130:
  case 131:
   VAR_29 = VAR_16;
   break;
  case 129:
   VAR_29 = VAR_15;
   break;
  case 128:
   VAR_29 = VAR_17;
   break;
  case 132:

   FUNC_19(VAR_22);
   goto out;
  default:

   goto out;
 }





 VAR_30 = FUNC_17();
 VAR_31 = FUNC_18(VAR_9,
         VAR_27->relnamespace, 0);
 VAR_32 = FUNC_16(VAR_30, VAR_31, VAR_29,
           FUNC_2(VAR_27->relname));




 VAR_34 = FUNC_9(VAR_27->relnamespace);
 FUNC_10(&VAR_35);
 FUNC_6(&VAR_35, "%s.%s",
      FUNC_12(VAR_34),
      FUNC_12(FUNC_2(VAR_27->relname)));
 FUNC_15(VAR_32,
          VAR_29,
          VAR_19,
          VAR_35.data,
          1);





 VAR_28.classId = VAR_11;
 VAR_28.objectId = VAR_22;
 VAR_28.objectSubId = 0;
 FUNC_5(&VAR_28, VAR_12, VAR_32);




 if (VAR_27->relkind == 130 ||
  VAR_27->relkind == 131)
 {
  Relation VAR_36;
  ScanKeyData VAR_37;
  SysScanDesc VAR_38;
  HeapTuple VAR_39;
  Form_pg_attribute VAR_40;

  VAR_36 = FUNC_24(VAR_3, VAR_0);

  FUNC_4(&VAR_37,
     VAR_1,
     VAR_5, VAR_8,
     FUNC_3(VAR_22));

  VAR_38 = FUNC_20(VAR_36, VAR_4, 1,
           VAR_21, 1, &VAR_37);

  while (FUNC_1(VAR_39 = FUNC_22(VAR_38)))
  {
   VAR_40 = (Form_pg_attribute) FUNC_0(VAR_39);

   FUNC_13(&VAR_35);
   FUNC_6(&VAR_35, "%s.%s.%s",
        FUNC_12(VAR_34),
        FUNC_12(FUNC_2(VAR_27->relname)),
        FUNC_12(FUNC_2(VAR_40->attname)));

   VAR_33 = FUNC_16(VAR_30,
             VAR_32,
             VAR_13,
             FUNC_2(VAR_40->attname));




   FUNC_15(VAR_33,
            VAR_13,
            VAR_18,
            VAR_35.data,
            1);

   VAR_28.classId = VAR_11;
   VAR_28.objectId = VAR_22;
   VAR_28.objectSubId = VAR_40->attnum;
   FUNC_5(&VAR_28, VAR_12, VAR_33);

   FUNC_11(VAR_33);
  }
  FUNC_21(VAR_38);
  FUNC_23(VAR_36, VAR_0);
 }
 FUNC_11(VAR_32);

out:
 FUNC_21(VAR_25);
 FUNC_23(VAR_23, VAR_0);
}
