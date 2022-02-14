
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ reltablespace; } ;
struct TYPE_17__ {int t_self; } ;
struct TYPE_16__ {TYPE_1__* rd_rel; } ;
struct TYPE_15__ {scalar_t__ reltablespace; int relkind; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_class ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_3__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_16 (int ,int ) ;

__attribute__((used)) static void
FUNC_17(Relation VAR_8, Oid VAR_9)
{
 HeapTuple VAR_10;
 Oid VAR_11;
 Relation VAR_12;
 Form_pg_class VAR_13;
 Oid VAR_14 = FUNC_8(VAR_8);





 FUNC_0(!FUNC_7(VAR_8->rd_rel->relkind));


 if (VAR_9 == VAR_2)
  FUNC_11(VAR_1,
    (FUNC_12(VAR_0),
     FUNC_13("only shared relations can be placed in pg_global tablespace")));




 VAR_11 = VAR_8->rd_rel->reltablespace;
 if (VAR_9 == VAR_11 ||
  (VAR_9 == VAR_4 && VAR_11 == 0))
 {
  FUNC_5(VAR_6, VAR_14, 0);
  return;
 }


 VAR_12 = FUNC_16(VAR_6, VAR_7);

 VAR_10 = FUNC_9(VAR_5, FUNC_6(VAR_14));
 if (!FUNC_4(VAR_10))
  FUNC_10(VAR_1, "cache lookup failed for relation %u", VAR_14);
 VAR_13 = (Form_pg_class) FUNC_3(VAR_10);


 VAR_13->reltablespace = (VAR_9 == VAR_4) ? VAR_3 : VAR_9;
 FUNC_1(VAR_12, &VAR_10->t_self, VAR_10);

 FUNC_5(VAR_6, VAR_14, 0);

 FUNC_14(VAR_10);

 FUNC_15(VAR_12, VAR_7);


 FUNC_2();
}
