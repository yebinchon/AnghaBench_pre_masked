
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int relispopulated; } ;
struct TYPE_17__ {int t_self; } ;
struct TYPE_16__ {TYPE_1__* rd_rel; } ;
struct TYPE_15__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_class ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_3__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_11 (int ,int ) ;

void
FUNC_12(Relation VAR_5, bool VAR_6)
{
 Relation VAR_7;
 HeapTuple VAR_8;

 FUNC_0(VAR_5->rd_rel->relkind == VAR_1);






 VAR_7 = FUNC_11(VAR_3, VAR_4);
 VAR_8 = FUNC_7(VAR_2,
        FUNC_5(FUNC_6(VAR_5)));
 if (!FUNC_4(VAR_8))
  FUNC_8(VAR_0, "cache lookup failed for relation %u",
    FUNC_6(VAR_5));

 ((Form_pg_class) FUNC_3(VAR_8))->relispopulated = VAR_6;

 FUNC_1(VAR_7, &VAR_8->t_self, VAR_8);

 FUNC_9(VAR_8);
 FUNC_10(VAR_7, VAR_4);





 FUNC_2();
}
