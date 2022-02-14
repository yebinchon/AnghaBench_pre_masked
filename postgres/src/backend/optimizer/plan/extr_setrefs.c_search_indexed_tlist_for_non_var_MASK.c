
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tlist; } ;
typedef TYPE_1__ indexed_tlist ;
struct TYPE_7__ {scalar_t__ varoattno; scalar_t__ varnoold; } ;
typedef TYPE_2__ Var ;
typedef int TargetEntry ;
typedef int Index ;
typedef int Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static Var *
FUNC_3(Expr *VAR_1,
         indexed_tlist *VAR_2, Index VAR_3)
{
 TargetEntry *VAR_4;
 if (FUNC_0(VAR_1, VAR_0))
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_1, VAR_2->tlist);
 if (VAR_4)
 {

  Var *VAR_5;

  VAR_5 = FUNC_1(VAR_3, VAR_4);
  VAR_5->varnoold = 0;
  VAR_5->varoattno = 0;
  return VAR_5;
 }
 return ((void*)0);
}
