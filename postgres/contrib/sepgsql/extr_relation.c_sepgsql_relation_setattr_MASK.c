
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ relnamespace; int relname; } ;
struct TYPE_5__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;





 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_12 ;
 int FUNC_7 (int ,char*,int ) ;
 char* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*,int ,int ,char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int,int ,int,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;

void
FUNC_22(Oid VAR_13)
{
 Relation VAR_14;
 ScanKeyData VAR_15;
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 HeapTuple VAR_18;
 Form_pg_class VAR_19;
 Form_pg_class VAR_20;
 ObjectAddress VAR_21;
 char *VAR_22;
 uint16_t VAR_23;

 switch (FUNC_9(VAR_13))
 {
  case 130:
  case 131:
   VAR_23 = VAR_9;
   break;
  case 129:
   VAR_23 = VAR_8;
   break;
  case 128:
   VAR_23 = VAR_10;
   break;
  case 132:

   FUNC_12(VAR_13);
   return;
  default:

   return;
 }




 VAR_14 = FUNC_21(VAR_7, VAR_0);

 FUNC_5(&VAR_15,
    VAR_1,
    VAR_2, VAR_5,
    FUNC_3(VAR_13));

 VAR_16 = FUNC_17(VAR_14, VAR_3, 1,
          VAR_12, 1, &VAR_15);

 VAR_18 = FUNC_19(VAR_16);
 if (!FUNC_1(VAR_18))
  FUNC_7(VAR_4, "could not find tuple for relation %u", VAR_13);
 VAR_20 = (Form_pg_class) FUNC_0(VAR_18);




 VAR_17 = FUNC_6(VAR_6, FUNC_3(VAR_13));
 if (!FUNC_1(VAR_17))
  FUNC_7(VAR_4, "cache lookup failed for relation %u", VAR_13);
 VAR_19 = (Form_pg_class) FUNC_0(VAR_17);




 if (VAR_20->relnamespace != VAR_19->relnamespace)
 {
  FUNC_14(VAR_19->relnamespace);
  FUNC_13(VAR_20->relnamespace);
 }
 if (FUNC_16(FUNC_2(VAR_20->relname), FUNC_2(VAR_19->relname)) != 0)
  FUNC_15(VAR_19->relnamespace);
 VAR_21.classId = VAR_7;
 VAR_21.objectId = VAR_13;
 VAR_21.objectSubId = 0;
 VAR_22 = FUNC_8(&VAR_21);

 FUNC_11(&VAR_21,
       VAR_23,
       VAR_11,
       VAR_22,
       1);
 FUNC_10(VAR_22);

 FUNC_4(VAR_17);
 FUNC_18(VAR_16);
 FUNC_20(VAR_14, VAR_0);
}
