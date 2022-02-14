
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** sortgrouprefs; int exprs; } ;
typedef TYPE_1__ PathTarget ;
typedef void* Index ;
typedef int Expr ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (void**,int) ;

void
FUNC_4(PathTarget *VAR_0, Expr *VAR_1, Index VAR_2)
{

 VAR_0->exprs = FUNC_0(VAR_0->exprs, VAR_1);

 if (VAR_0->sortgrouprefs)
 {
  int VAR_3 = FUNC_1(VAR_0->exprs);


  VAR_0->sortgrouprefs = (Index *)
   FUNC_3(VAR_0->sortgrouprefs, VAR_3 * sizeof(Index));
  VAR_0->sortgrouprefs[VAR_3 - 1] = VAR_2;
 }
 else if (VAR_2)
 {

  int VAR_4 = FUNC_1(VAR_0->exprs);

  VAR_0->sortgrouprefs = (Index *) FUNC_2(VAR_4 * sizeof(Index));
  VAR_0->sortgrouprefs[VAR_4 - 1] = VAR_2;
 }
}
