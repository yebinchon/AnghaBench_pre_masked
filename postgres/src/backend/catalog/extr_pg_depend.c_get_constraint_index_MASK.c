
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ classid; scalar_t__ objsubid; scalar_t__ deptype; int objid; } ;
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
 int VAR_5 ;
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
 char VAR_12 ;
 char VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 char FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int *,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

Oid
FUNC_11(Oid VAR_15)
{
 Oid VAR_16 = VAR_11;
 Relation VAR_17;
 ScanKeyData VAR_18[3];
 SysScanDesc VAR_19;
 HeapTuple VAR_20;


 VAR_17 = FUNC_10(VAR_8, VAR_0);

 FUNC_4(&VAR_18[0],
    VAR_1,
    VAR_4, VAR_10,
    FUNC_3(VAR_5));
 FUNC_4(&VAR_18[1],
    VAR_2,
    VAR_4, VAR_10,
    FUNC_3(VAR_15));
 FUNC_4(&VAR_18[2],
    VAR_3,
    VAR_4, VAR_9,
    FUNC_2(0));

 VAR_19 = FUNC_6(VAR_17, VAR_7, 1,
         ((void*)0), 3, VAR_18);

 while (FUNC_1(VAR_20 = FUNC_8(VAR_19)))
 {
  Form_pg_depend VAR_21 = (Form_pg_depend) FUNC_0(VAR_20);





  if (VAR_21->classid == VAR_14 &&
   VAR_21->objsubid == 0 &&
   VAR_21->deptype == VAR_6)
  {
   char VAR_22 = FUNC_5(VAR_21->objid);





   if (VAR_22 != VAR_12 &&
    VAR_22 != VAR_13)
    continue;

   VAR_16 = VAR_21->objid;
   break;
  }
 }

 FUNC_7(VAR_19);
 FUNC_9(VAR_17, VAR_0);

 return VAR_16;
}
