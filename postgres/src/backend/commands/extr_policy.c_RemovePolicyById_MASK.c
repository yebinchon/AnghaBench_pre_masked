
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int polrelid; } ;
struct TYPE_17__ {int t_self; } ;
struct TYPE_16__ {TYPE_1__* rd_rel; } ;
struct TYPE_15__ {scalar_t__ relkind; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_policy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 TYPE_3__* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_16 (int ,int ) ;

void
FUNC_17(Oid VAR_14)
{
 Relation VAR_15;
 SysScanDesc VAR_16;
 ScanKeyData VAR_17[1];
 HeapTuple VAR_18;
 Oid VAR_19;
 Relation VAR_20;

 VAR_15 = FUNC_16(VAR_9, VAR_12);




 FUNC_7(&VAR_17[0],
    VAR_1,
    VAR_2, VAR_6,
    FUNC_5(VAR_14));

 VAR_16 = FUNC_12(VAR_15, VAR_8, 1,
          ((void*)0), 1, VAR_17);

 VAR_18 = FUNC_14(VAR_16);


 if (!FUNC_3(VAR_18))
  FUNC_8(VAR_5, "could not find tuple for policy %u", VAR_14);







 VAR_19 = ((Form_pg_policy) FUNC_2(VAR_18))->polrelid;

 VAR_20 = FUNC_16(VAR_19, VAR_0);
 if (VAR_20->rd_rel->relkind != VAR_11 &&
  VAR_20->rd_rel->relkind != VAR_10)
  FUNC_9(VAR_5,
    (FUNC_10(VAR_4),
     FUNC_11("\"%s\" is not a table",
      FUNC_6(VAR_20))));

 if (!VAR_13 && FUNC_4(VAR_20))
  FUNC_9(VAR_5,
    (FUNC_10(VAR_3),
     FUNC_11("permission denied: \"%s\" is a system catalog",
      FUNC_6(VAR_20))));

 FUNC_1(VAR_15, &VAR_18->t_self);

 FUNC_13(VAR_16);
 FUNC_0(VAR_20);

 FUNC_15(VAR_20, VAR_7);


 FUNC_15(VAR_15, VAR_12);
}
