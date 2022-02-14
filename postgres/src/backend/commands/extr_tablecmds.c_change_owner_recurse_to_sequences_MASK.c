
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ relkind; } ;
struct TYPE_3__ {scalar_t__ refobjsubid; scalar_t__ classid; scalar_t__ objsubid; scalar_t__ deptype; int objid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int LOCKMODE ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_depend ;


 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 TYPE_2__* FUNC_4 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void
FUNC_12(Oid VAR_12, Oid VAR_13, LOCKMODE VAR_14)
{
 Relation VAR_15;
 SysScanDesc VAR_16;
 ScanKeyData VAR_17[2];
 HeapTuple VAR_18;





 VAR_15 = FUNC_11(VAR_7, VAR_0);

 FUNC_5(&VAR_17[0],
    VAR_1,
    VAR_3, VAR_8,
    FUNC_3(VAR_11));
 FUNC_5(&VAR_17[1],
    VAR_2,
    VAR_3, VAR_8,
    FUNC_3(VAR_12));


 VAR_16 = FUNC_8(VAR_15, VAR_6, 1,
         ((void*)0), 2, VAR_17);

 while (FUNC_2(VAR_18 = FUNC_10(VAR_16)))
 {
  Form_pg_depend VAR_19 = (Form_pg_depend) FUNC_1(VAR_18);
  Relation VAR_20;


  if (VAR_19->refobjsubid == 0 ||
   VAR_19->classid != VAR_11 ||
   VAR_19->objsubid != 0 ||
   !(VAR_19->deptype == VAR_4 || VAR_19->deptype == VAR_5))
   continue;


  VAR_20 = FUNC_7(VAR_19->objid, VAR_14);


  if (FUNC_4(VAR_20)->relkind != VAR_10)
  {

   FUNC_6(VAR_20, VAR_14);
   continue;
  }


  FUNC_0(VAR_19->objid, VAR_13, 1, VAR_14);


  FUNC_6(VAR_20, VAR_9);
 }

 FUNC_9(VAR_16);

 FUNC_6(VAR_15, VAR_0);
}
