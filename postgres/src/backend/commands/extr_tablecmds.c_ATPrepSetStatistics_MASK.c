
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int Node ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(Relation VAR_10, const char *VAR_11, int16 VAR_12, Node *VAR_13, LOCKMODE VAR_14)
{






 if (VAR_10->rd_rel->relkind != VAR_9 &&
  VAR_10->rd_rel->relkind != VAR_6 &&
  VAR_10->rd_rel->relkind != VAR_5 &&
  VAR_10->rd_rel->relkind != VAR_7 &&
  VAR_10->rd_rel->relkind != VAR_4 &&
  VAR_10->rd_rel->relkind != VAR_8)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("\"%s\" is not a table, materialized view, index, or foreign table",
      FUNC_1(VAR_10))));





 if (VAR_10->rd_rel->relkind != VAR_5 &&
  VAR_10->rd_rel->relkind != VAR_7 &&
  !VAR_11)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_1),
     FUNC_6("cannot refer to non-index column by number")));


 if (!FUNC_8(FUNC_2(VAR_10), FUNC_0()))
  FUNC_3(VAR_0, FUNC_7(VAR_10->rd_rel->relkind),
        FUNC_1(VAR_10));
}
