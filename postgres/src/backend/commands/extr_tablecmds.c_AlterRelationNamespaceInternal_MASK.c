
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ relnamespace; int relname; } ;
struct TYPE_12__ {int t_self; } ;
struct TYPE_11__ {scalar_t__ objectSubId; scalar_t__ objectId; int classId; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddresses ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_class ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,scalar_t__,int ) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_1__*,int *) ;

void
FUNC_18(Relation VAR_6, Oid VAR_7,
          Oid VAR_8, Oid VAR_9,
          bool VAR_10,
          ObjectAddresses *VAR_11)
{
 HeapTuple VAR_12;
 Form_pg_class VAR_13;
 ObjectAddress VAR_14;
 bool VAR_15 = 0;

 VAR_12 = FUNC_7(VAR_4, FUNC_6(VAR_7));
 if (!FUNC_3(VAR_12))
  FUNC_10(VAR_1, "cache lookup failed for relation %u", VAR_7);
 VAR_13 = (Form_pg_class) FUNC_2(VAR_12);

 FUNC_0(VAR_13->relnamespace == VAR_8);

 VAR_14.classId = VAR_5;
 VAR_14.objectId = VAR_7;
 VAR_14.objectSubId = 0;






 VAR_15 = FUNC_17(&VAR_14, VAR_11);
 if (!VAR_15 && VAR_8 != VAR_9)
 {

  if (FUNC_15(FUNC_5(VAR_13->relname),
         VAR_9) != VAR_2)
   FUNC_11(VAR_1,
     (FUNC_12(VAR_0),
      FUNC_13("relation \"%s\" already exists in schema \"%s\"",
       FUNC_5(VAR_13->relname),
       FUNC_14(VAR_9))));


  VAR_13->relnamespace = VAR_9;

  FUNC_1(VAR_6, &VAR_12->t_self, VAR_12);


  if (VAR_10 &&
   FUNC_9(VAR_5,
        VAR_7,
        VAR_3,
        VAR_8,
        VAR_9) != 1)
   FUNC_10(VAR_1, "failed to change schema dependency for relation \"%s\"",
     FUNC_5(VAR_13->relname));
 }
 if (!VAR_15)
 {
  FUNC_8(&VAR_14, VAR_11);

  FUNC_4(VAR_5, VAR_7, 0);
 }

 FUNC_16(VAR_12);
}
