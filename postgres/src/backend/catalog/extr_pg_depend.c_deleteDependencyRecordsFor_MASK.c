
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ deptype; } ;
struct TYPE_6__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_depend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

long
FUNC_10(Oid VAR_8, Oid VAR_9,
         bool VAR_10)
{
 long VAR_11 = 0;
 Relation VAR_12;
 ScanKeyData VAR_13[2];
 SysScanDesc VAR_14;
 HeapTuple VAR_15;

 VAR_12 = FUNC_9(VAR_5, VAR_7);

 FUNC_4(&VAR_13[0],
    VAR_0,
    VAR_2, VAR_6,
    FUNC_3(VAR_8));
 FUNC_4(&VAR_13[1],
    VAR_1,
    VAR_2, VAR_6,
    FUNC_3(VAR_9));

 VAR_14 = FUNC_5(VAR_12, VAR_4, 1,
         ((void*)0), 2, VAR_13);

 while (FUNC_2(VAR_15 = FUNC_7(VAR_14)))
 {
  if (VAR_10 &&
   ((Form_pg_depend) FUNC_1(VAR_15))->deptype == VAR_3)
   continue;

  FUNC_0(VAR_12, &VAR_15->t_self);
  VAR_11++;
 }

 FUNC_6(VAR_14);

 FUNC_8(VAR_12, VAR_7);

 return VAR_11;
}
