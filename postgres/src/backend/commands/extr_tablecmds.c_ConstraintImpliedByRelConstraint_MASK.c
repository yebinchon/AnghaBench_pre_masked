
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_check; TYPE_1__* check; } ;
typedef TYPE_2__ TupleConstr ;
struct TYPE_6__ {TYPE_2__* constr; } ;
struct TYPE_4__ {int ccbin; int ccvalid; } ;
typedef int Relation ;
typedef int Node ;
typedef int List ;
typedef int Expr ;


 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 int * FUNC_7 (int ) ;

bool
FUNC_8(Relation VAR_0, List *VAR_1, List *VAR_2)
{
 List *VAR_3 = FUNC_4(VAR_2);
 TupleConstr *VAR_4 = FUNC_0(VAR_0)->constr;
 int VAR_5,
    VAR_6;

 VAR_5 = (VAR_4 != ((void*)0)) ? VAR_4->num_check : 0;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  Node *VAR_7;





  if (!VAR_4->check[VAR_6].ccvalid)
   continue;

  VAR_7 = FUNC_7(VAR_4->check[VAR_6].ccbin);







  VAR_7 = FUNC_2(((void*)0), VAR_7);
  VAR_7 = (Node *) FUNC_1((Expr *) VAR_7, 1);

  VAR_3 = FUNC_3(VAR_3,
           FUNC_5((Expr *) VAR_7));
 }
 return FUNC_6(VAR_1, VAR_3, 1);
}
