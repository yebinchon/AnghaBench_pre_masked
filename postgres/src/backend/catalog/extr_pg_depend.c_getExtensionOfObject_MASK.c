
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ refclassid; scalar_t__ deptype; int refobjid; } ;
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
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

Oid
FUNC_9(Oid VAR_10, Oid VAR_11)
{
 Oid VAR_12 = VAR_9;
 Relation VAR_13;
 ScanKeyData VAR_14[2];
 SysScanDesc VAR_15;
 HeapTuple VAR_16;

 VAR_13 = FUNC_8(VAR_6, VAR_0);

 FUNC_3(&VAR_14[0],
    VAR_1,
    VAR_3, VAR_8,
    FUNC_2(VAR_10));
 FUNC_3(&VAR_14[1],
    VAR_2,
    VAR_3, VAR_8,
    FUNC_2(VAR_11));

 VAR_15 = FUNC_4(VAR_13, VAR_5, 1,
         ((void*)0), 2, VAR_14);

 while (FUNC_1((VAR_16 = FUNC_6(VAR_15))))
 {
  Form_pg_depend VAR_17 = (Form_pg_depend) FUNC_0(VAR_16);

  if (VAR_17->refclassid == VAR_7 &&
   VAR_17->deptype == VAR_4)
  {
   VAR_12 = VAR_17->refobjid;
   break;
  }
 }

 FUNC_5(VAR_15);

 FUNC_7(VAR_13, VAR_0);

 return VAR_12;
}
