
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ varattno; scalar_t__ vartype; scalar_t__ varno; scalar_t__ varlevelsup; } ;
typedef TYPE_1__ Var ;
struct TYPE_6__ {scalar_t__ relid; } ;
typedef TYPE_2__ RelOptInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(Var *VAR_2, RelOptInfo *VAR_3)
{

 if (VAR_2->varattno == VAR_0 &&
  VAR_2->vartype == VAR_1 &&
  VAR_2->varno == VAR_3->relid &&
  VAR_2->varlevelsup == 0)
  return 1;
 return 0;
}
