
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ relkind; int reltype; } ;
struct TYPE_3__ {scalar_t__ refobjsubid; scalar_t__ classid; scalar_t__ objsubid; scalar_t__ deptype; int objid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddresses ;
typedef int LOCKMODE ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_depend ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int,int *) ;
 int FUNC_1 (int ,int ,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 TYPE_2__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(Relation VAR_12, Relation VAR_13,
       Oid VAR_14, Oid VAR_15, ObjectAddresses *VAR_16,
       LOCKMODE VAR_17)
{
 Relation VAR_18;
 SysScanDesc VAR_19;
 ScanKeyData VAR_20[2];
 HeapTuple VAR_21;





 VAR_18 = FUNC_13(VAR_7, VAR_0);

 FUNC_7(&VAR_20[0],
    VAR_1,
    VAR_3, VAR_8,
    FUNC_4(VAR_11));
 FUNC_7(&VAR_20[1],
    VAR_2,
    VAR_3, VAR_8,
    FUNC_4(FUNC_6(VAR_13)));


 VAR_19 = FUNC_10(VAR_18, VAR_6, 1,
         ((void*)0), 2, VAR_20);

 while (FUNC_3(VAR_21 = FUNC_12(VAR_19)))
 {
  Form_pg_depend VAR_22 = (Form_pg_depend) FUNC_2(VAR_21);
  Relation VAR_23;


  if (VAR_22->refobjsubid == 0 ||
   VAR_22->classid != VAR_11 ||
   VAR_22->objsubid != 0 ||
   !(VAR_22->deptype == VAR_4 || VAR_22->deptype == VAR_5))
   continue;


  VAR_23 = FUNC_9(VAR_22->objid, VAR_17);


  if (FUNC_5(VAR_23)->relkind != VAR_10)
  {

   FUNC_8(VAR_23, VAR_17);
   continue;
  }


  FUNC_0(VAR_12, VAR_22->objid,
            VAR_14, VAR_15,
            1, VAR_16);





  FUNC_1(FUNC_5(VAR_23)->reltype,
           VAR_15, 0, 0, VAR_16);


  FUNC_8(VAR_23, VAR_9);
 }

 FUNC_11(VAR_19);

 FUNC_8(VAR_18, VAR_0);
}
