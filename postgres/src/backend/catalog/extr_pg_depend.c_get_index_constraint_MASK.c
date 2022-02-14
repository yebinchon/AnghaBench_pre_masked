
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ refclassid; scalar_t__ refobjsubid; scalar_t__ deptype; int refobjid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_depend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

Oid
FUNC_10(Oid VAR_13)
{
 Oid VAR_14 = VAR_11;
 Relation VAR_15;
 ScanKeyData VAR_16[3];
 SysScanDesc VAR_17;
 HeapTuple VAR_18;


 VAR_15 = FUNC_9(VAR_8, VAR_0);

 FUNC_4(&VAR_16[0],
    VAR_1,
    VAR_4, VAR_10,
    FUNC_3(VAR_12));
 FUNC_4(&VAR_16[1],
    VAR_2,
    VAR_4, VAR_10,
    FUNC_3(VAR_13));
 FUNC_4(&VAR_16[2],
    VAR_3,
    VAR_4, VAR_9,
    FUNC_2(0));

 VAR_17 = FUNC_5(VAR_15, VAR_7, 1,
         ((void*)0), 3, VAR_16);

 while (FUNC_1(VAR_18 = FUNC_7(VAR_17)))
 {
  Form_pg_depend VAR_19 = (Form_pg_depend) FUNC_0(VAR_18);





  if (VAR_19->refclassid == VAR_5 &&
   VAR_19->refobjsubid == 0 &&
   VAR_19->deptype == VAR_6)
  {
   VAR_14 = VAR_19->refobjid;
   break;
  }
 }

 FUNC_6(VAR_17);
 FUNC_8(VAR_15, VAR_0);

 return VAR_14;
}
