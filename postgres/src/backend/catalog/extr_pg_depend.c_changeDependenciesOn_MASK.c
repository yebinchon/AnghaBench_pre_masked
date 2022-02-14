
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {void* refobjid; } ;
struct TYPE_14__ {int t_self; } ;
struct TYPE_13__ {void* objectId; scalar_t__ objectSubId; void* classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_depend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (void*) ;
 int VAR_8 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int ,int ,int,int *,int,int *) ;
 int FUNC_14 (int ) ;
 TYPE_2__* FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

long
FUNC_18(Oid VAR_9, Oid VAR_10,
      Oid VAR_11)
{
 long VAR_12 = 0;
 Relation VAR_13;
 ScanKeyData VAR_14[2];
 SysScanDesc VAR_15;
 HeapTuple VAR_16;
 ObjectAddress VAR_17;
 bool VAR_18;

 VAR_13 = FUNC_17(VAR_4, VAR_8);







 VAR_17.classId = VAR_9;
 VAR_17.objectId = VAR_10;
 VAR_17.objectSubId = 0;

 if (FUNC_12(&VAR_17, VAR_13))
  FUNC_6(VAR_6,
    (FUNC_7(VAR_5),
     FUNC_8("cannot remove dependency on %s because it is a system object",
      FUNC_9(&VAR_17))));





 VAR_17.objectId = VAR_11;

 VAR_18 = FUNC_12(&VAR_17, VAR_13);


 FUNC_5(&VAR_14[0],
    VAR_0,
    VAR_2, VAR_7,
    FUNC_4(VAR_9));
 FUNC_5(&VAR_14[1],
    VAR_1,
    VAR_2, VAR_7,
    FUNC_4(VAR_10));

 VAR_15 = FUNC_13(VAR_13, VAR_3, 1,
         ((void*)0), 2, VAR_14);

 while (FUNC_3((VAR_16 = FUNC_15(VAR_15))))
 {
  Form_pg_depend VAR_19 = (Form_pg_depend) FUNC_2(VAR_16);

  if (VAR_18)
   FUNC_0(VAR_13, &VAR_16->t_self);
  else
  {

   VAR_16 = FUNC_10(VAR_16);
   VAR_19 = (Form_pg_depend) FUNC_2(VAR_16);

   VAR_19->refobjid = VAR_11;

   FUNC_1(VAR_13, &VAR_16->t_self, VAR_16);

   FUNC_11(VAR_16);
  }

  VAR_12++;
 }

 FUNC_14(VAR_15);

 FUNC_16(VAR_13, VAR_8);

 return VAR_12;
}
