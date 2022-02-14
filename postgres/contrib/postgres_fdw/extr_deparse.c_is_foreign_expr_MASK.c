
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ state; int collation; } ;
typedef TYPE_2__ foreign_loc_cxt ;
struct TYPE_12__ {int relids; TYPE_4__* foreignrel; int * root; } ;
typedef TYPE_3__ foreign_glob_cxt ;
struct TYPE_14__ {TYPE_1__* outerrel; } ;
struct TYPE_13__ {int relids; scalar_t__ fdw_private; } ;
struct TYPE_10__ {int relids; } ;
typedef TYPE_4__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_5__ PgFdwRelationInfo ;
typedef int Node ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_2__*) ;

bool
FUNC_3(PlannerInfo *VAR_3,
    RelOptInfo *VAR_4,
    Expr *VAR_5)
{
 foreign_glob_cxt VAR_6;
 foreign_loc_cxt VAR_7;
 PgFdwRelationInfo *VAR_8 = (PgFdwRelationInfo *) (VAR_4->fdw_private);





 VAR_6.root = VAR_3;
 VAR_6.foreignrel = VAR_4;






 if (FUNC_0(VAR_4))
  VAR_6.relids = VAR_8->outerrel->relids;
 else
  VAR_6.relids = VAR_4->relids;
 VAR_7.collation = VAR_2;
 VAR_7.state = VAR_0;
 if (!FUNC_2((Node *) VAR_5, &VAR_6, &VAR_7))
  return 0;





 if (VAR_7.state == VAR_1)
  return 0;
 if (FUNC_1((Node *) VAR_5))
  return 0;


 return 1;
}
