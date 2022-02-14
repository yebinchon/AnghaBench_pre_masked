
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int reloftype; } ;
struct TYPE_18__ {int t_self; } ;
struct TYPE_17__ {TYPE_1__* rd_rel; } ;
struct TYPE_16__ {int reloftype; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_class ;


 int FUNC_0 (TYPE_2__*,int *,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_8 (int ,int ) ;
 int VAR_7 ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_16 (int ,int ) ;

__attribute__((used)) static void
FUNC_17(Relation VAR_8, LOCKMODE VAR_9)
{
 Oid VAR_10 = FUNC_7(VAR_8);
 Relation VAR_11;
 HeapTuple VAR_12;

 if (!FUNC_5(VAR_8->rd_rel->reloftype))
  FUNC_11(VAR_2,
    (FUNC_12(VAR_1),
     FUNC_13("\"%s\" is not a typed table",
      FUNC_6(VAR_8))));






 FUNC_9(VAR_10, VAR_7, VAR_8->rd_rel->reloftype,
         VAR_0);


 VAR_11 = FUNC_16(VAR_5, VAR_6);
 VAR_12 = FUNC_8(VAR_4, FUNC_4(VAR_10));
 if (!FUNC_2(VAR_12))
  FUNC_10(VAR_2, "cache lookup failed for relation %u", VAR_10);
 ((Form_pg_class) FUNC_1(VAR_12))->reloftype = VAR_3;
 FUNC_0(VAR_11, &VAR_12->t_self, VAR_12);

 FUNC_3(VAR_5, VAR_10, 0);

 FUNC_14(VAR_12);
 FUNC_15(VAR_11, VAR_6);
}
