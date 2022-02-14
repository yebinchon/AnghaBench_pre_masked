
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ refclassid; scalar_t__ refobjid; } ;
struct TYPE_15__ {int t_self; } ;
struct TYPE_14__ {scalar_t__ objectSubId; scalar_t__ objectId; scalar_t__ classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
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
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_10 (int ,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

long
FUNC_15(Oid VAR_8, Oid VAR_9,
     Oid VAR_10, Oid VAR_11,
     Oid VAR_12)
{
 long VAR_13 = 0;
 Relation VAR_14;
 ScanKeyData VAR_15[2];
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 ObjectAddress VAR_18;
 ObjectAddress VAR_19;
 bool VAR_20;
 bool VAR_21;

 VAR_14 = FUNC_14(VAR_5, VAR_7);







 VAR_18.classId = VAR_10;
 VAR_18.objectId = VAR_11;
 VAR_18.objectSubId = 0;

 VAR_20 = FUNC_8(&VAR_18, VAR_14);

 VAR_18.objectId = VAR_12;

 VAR_21 = FUNC_8(&VAR_18, VAR_14);

 if (VAR_20)
 {
  FUNC_13(VAR_14, VAR_7);





  if (VAR_21)
   return 1;





  VAR_19.classId = VAR_8;
  VAR_19.objectId = VAR_9;
  VAR_19.objectSubId = 0;
  FUNC_9(&VAR_19, &VAR_18, VAR_3);

  return 1;
 }


 FUNC_5(&VAR_15[0],
    VAR_0,
    VAR_2, VAR_6,
    FUNC_4(VAR_8));
 FUNC_5(&VAR_15[1],
    VAR_1,
    VAR_2, VAR_6,
    FUNC_4(VAR_9));

 VAR_16 = FUNC_10(VAR_14, VAR_4, 1,
         ((void*)0), 2, VAR_15);

 while (FUNC_3((VAR_17 = FUNC_12(VAR_16))))
 {
  Form_pg_depend VAR_22 = (Form_pg_depend) FUNC_2(VAR_17);

  if (VAR_22->refclassid == VAR_10 &&
   VAR_22->refobjid == VAR_11)
  {
   if (VAR_21)
    FUNC_0(VAR_14, &VAR_17->t_self);
   else
   {

    VAR_17 = FUNC_6(VAR_17);
    VAR_22 = (Form_pg_depend) FUNC_2(VAR_17);

    VAR_22->refobjid = VAR_12;

    FUNC_1(VAR_14, &VAR_17->t_self, VAR_17);

    FUNC_7(VAR_17);
   }

   VAR_13++;
  }
 }

 FUNC_11(VAR_16);

 FUNC_13(VAR_14, VAR_7);

 return VAR_13;
}
