
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int relids; } ;
struct TYPE_5__ {scalar_t__ clause; int clause_relids; scalar_t__ pseudoconstant; } ;
typedef TYPE_1__ RestrictInfo ;
typedef TYPE_2__ RelOptInfo ;
typedef int Node ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(RestrictInfo *VAR_0, RelOptInfo *VAR_1)
{





 if (VAR_0->pseudoconstant)
  return 0;
 if (!FUNC_0(VAR_0->clause_relids, VAR_1->relids))
  return 0;


 if (FUNC_1((Node *) VAR_0->clause))
  return 0;

 return 1;
}
