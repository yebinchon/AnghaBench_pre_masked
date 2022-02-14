
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {void* oid; } ;
struct TYPE_7__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
struct TYPE_6__ {int * constr; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef void* Oid ;
typedef int ObjectType ;
typedef TYPE_2__ ObjectAddress ;
typedef int List ;
typedef int LOCKMODE ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_attrdef ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 TYPE_1__* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (void*,char const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (void*,int ) ;
 int FUNC_20 (int ,int ) ;
 char* FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,int,int *,int,int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static ObjectAddress
FUNC_25(ObjectType VAR_13, List *VAR_14,
         Relation *VAR_15, LOCKMODE VAR_16,
         bool VAR_17)
{
 ObjectAddress VAR_18;
 List *VAR_19;
 Oid VAR_20;
 Relation VAR_21;
 const char *VAR_22;
 AttrNumber VAR_23;
 TupleDesc VAR_24;
 Oid VAR_25;


 if (FUNC_14(VAR_14) < 2)
  FUNC_9(VAR_8,
    (FUNC_10(VAR_6),
     FUNC_11("column name must be qualified")));
 VAR_22 = FUNC_21(FUNC_16(VAR_14));
 VAR_19 = FUNC_15(FUNC_13(VAR_14), FUNC_14(VAR_14) - 1);

 VAR_21 = FUNC_20(FUNC_17(VAR_19), VAR_16);
 VAR_20 = FUNC_7(VAR_21);

 VAR_24 = FUNC_6(VAR_21);


 VAR_23 = FUNC_12(VAR_20, VAR_22);
 VAR_25 = VAR_12;
 if (VAR_23 != VAR_11 && VAR_24->constr != ((void*)0))
 {
  Relation VAR_26;
  ScanKeyData VAR_27[2];
  SysScanDesc VAR_28;
  HeapTuple VAR_29;

  VAR_26 = FUNC_19(VAR_4, VAR_0);
  FUNC_8(&VAR_27[0],
     VAR_2,
     VAR_5,
     VAR_10,
     FUNC_4(VAR_20));
  FUNC_8(&VAR_27[1],
     VAR_1,
     VAR_5,
     VAR_9,
     FUNC_2(VAR_23));
  VAR_28 = FUNC_22(VAR_26, VAR_3, 1,
          ((void*)0), 2, VAR_27);
  if (FUNC_1(VAR_29 = FUNC_24(VAR_28)))
  {
   Form_pg_attrdef VAR_30 = (Form_pg_attrdef) FUNC_0(VAR_29);

   VAR_25 = VAR_30->oid;
  }

  FUNC_23(VAR_28);
  FUNC_18(VAR_26, VAR_0);
 }
 if (!FUNC_5(VAR_25))
 {
  if (!VAR_17)
   FUNC_9(VAR_8,
     (FUNC_10(VAR_7),
      FUNC_11("default value for column \"%s\" of relation \"%s\" does not exist",
       VAR_22, FUNC_3(VAR_19))));

  VAR_18.classId = VAR_4;
  VAR_18.objectId = VAR_12;
  VAR_18.objectSubId = VAR_11;
  FUNC_18(VAR_21, VAR_16);
  return VAR_18;
 }

 VAR_18.classId = VAR_4;
 VAR_18.objectId = VAR_25;
 VAR_18.objectSubId = 0;

 *VAR_15 = VAR_21;
 return VAR_18;
}
