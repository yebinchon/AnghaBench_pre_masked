
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ refclassid; scalar_t__ refobjid; scalar_t__ refobjsubid; scalar_t__ deptype; } ;
struct TYPE_6__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_depend ;
typedef scalar_t__ DependencyType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int,int *,int,int *) ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(Oid VAR_10, Oid VAR_11, Oid VAR_12,
        DependencyType VAR_13)
{
 Relation VAR_14;
 SysScanDesc VAR_15;
 ScanKeyData VAR_16[3];
 HeapTuple VAR_17;

 VAR_14 = FUNC_10(VAR_5, VAR_9);

 FUNC_5(&VAR_16[0],
    VAR_0,
    VAR_3, VAR_7,
    FUNC_4(VAR_8));
 FUNC_5(&VAR_16[1],
    VAR_1,
    VAR_3, VAR_7,
    FUNC_4(VAR_10));
 FUNC_5(&VAR_16[2],
    VAR_2,
    VAR_3, VAR_6,
    FUNC_3(0));

 VAR_15 = FUNC_6(VAR_14, VAR_4, 1,
         ((void*)0), 3, VAR_16);

 while (FUNC_2(VAR_17 = FUNC_8(VAR_15)))
 {
  Form_pg_depend VAR_18 = (Form_pg_depend) FUNC_1(VAR_17);

  if (VAR_18->refclassid == VAR_11 &&
   VAR_18->refobjid == VAR_12 &&
   VAR_18->refobjsubid == 0 &&
   VAR_18->deptype == VAR_13)
   FUNC_0(VAR_14, &VAR_17->t_self);
 }

 FUNC_7(VAR_15);
 FUNC_9(VAR_14, VAR_9);
}
