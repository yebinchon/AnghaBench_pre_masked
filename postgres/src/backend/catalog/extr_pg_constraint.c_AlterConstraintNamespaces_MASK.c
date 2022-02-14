
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ connamespace; int oid; } ;
struct TYPE_13__ {int t_self; } ;
struct TYPE_12__ {int objectId; scalar_t__ objectSubId; int classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddresses ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int ,int ,int,int *,int,int *) ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

void
FUNC_14(Oid VAR_8, Oid VAR_9,
        Oid VAR_10, bool VAR_11, ObjectAddresses *VAR_12)
{
 Relation VAR_13;
 ScanKeyData VAR_14[2];
 SysScanDesc VAR_15;
 HeapTuple VAR_16;

 VAR_13 = FUNC_13(VAR_3, VAR_7);

 FUNC_5(&VAR_14[0],
    VAR_0,
    VAR_2, VAR_5,
    FUNC_4(VAR_11 ? VAR_6 : VAR_8));
 FUNC_5(&VAR_14[1],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_4(VAR_11 ? VAR_8 : VAR_6));

 VAR_15 = FUNC_9(VAR_13, VAR_4, 1,
         ((void*)0), 2, VAR_14);

 while (FUNC_2((VAR_16 = FUNC_11(VAR_15))))
 {
  Form_pg_constraint VAR_17 = (Form_pg_constraint) FUNC_1(VAR_16);
  ObjectAddress VAR_18;

  VAR_18.classId = VAR_3;
  VAR_18.objectId = VAR_17->oid;
  VAR_18.objectSubId = 0;

  if (FUNC_8(&VAR_18, VAR_12))
   continue;


  if (VAR_17->connamespace == VAR_9 && VAR_9 != VAR_10)
  {
   VAR_16 = FUNC_7(VAR_16);
   VAR_17 = (Form_pg_constraint) FUNC_1(VAR_16);

   VAR_17->connamespace = VAR_10;

   FUNC_0(VAR_13, &VAR_16->t_self, VAR_16);






  }

  FUNC_3(VAR_3, VAR_18.objectId, 0);

  FUNC_6(&VAR_18, VAR_12);
 }

 FUNC_10(VAR_15);

 FUNC_12(VAR_13, VAR_7);
}
