
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ attnum; char attidentity; } ;
struct TYPE_14__ {int t_self; } ;
struct TYPE_13__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int LOCKMODE ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,TYPE_2__*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__,int ,int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char const*,...) ;
 int FUNC_13 (int ,scalar_t__,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_1__*,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_18(Relation VAR_12, const char *VAR_13, bool VAR_14, LOCKMODE VAR_15)
{
 HeapTuple VAR_16;
 Form_pg_attribute VAR_17;
 AttrNumber VAR_18;
 Relation VAR_19;
 ObjectAddress VAR_20;
 Oid VAR_21;
 ObjectAddress VAR_22;

 VAR_19 = FUNC_17(VAR_0, VAR_11);
 VAR_16 = FUNC_8(FUNC_7(VAR_12), VAR_13);
 if (!FUNC_3(VAR_16))
  FUNC_10(VAR_6,
    (FUNC_11(VAR_5),
     FUNC_12("column \"%s\" of relation \"%s\" does not exist",
      VAR_13, FUNC_6(VAR_12))));

 VAR_17 = (Form_pg_attribute) FUNC_2(VAR_16);
 VAR_18 = VAR_17->attnum;

 if (VAR_18 <= 0)
  FUNC_10(VAR_6,
    (FUNC_11(VAR_3),
     FUNC_12("cannot alter system column \"%s\"",
      VAR_13)));

 if (!VAR_17->attidentity)
 {
  if (!VAR_14)
   FUNC_10(VAR_6,
     (FUNC_11(VAR_4),
      FUNC_12("column \"%s\" of relation \"%s\" is not an identity column",
       VAR_13, FUNC_6(VAR_12))));
  else
  {
   FUNC_10(VAR_8,
     (FUNC_12("column \"%s\" of relation \"%s\" is not an identity column, skipping",
       VAR_13, FUNC_6(VAR_12))));
   FUNC_14(VAR_16);
   FUNC_16(VAR_19, VAR_11);
   return VAR_7;
  }
 }

 VAR_17->attidentity = '\0';
 FUNC_0(VAR_19, &VAR_16->t_self, VAR_16);

 FUNC_4(VAR_10,
         FUNC_7(VAR_12),
         VAR_17->attnum);
 FUNC_5(VAR_20, VAR_10,
      FUNC_7(VAR_12), VAR_18);
 FUNC_14(VAR_16);

 FUNC_16(VAR_19, VAR_11);


 VAR_21 = FUNC_13(FUNC_7(VAR_12), VAR_18, 0);
 FUNC_9(VAR_10, VAR_21,
         VAR_10, VAR_1);
 FUNC_1();
 VAR_22.classId = VAR_10;
 VAR_22.objectId = VAR_21;
 VAR_22.objectSubId = 0;
 FUNC_15(&VAR_22, VAR_2, VAR_9);

 return VAR_20;
}
