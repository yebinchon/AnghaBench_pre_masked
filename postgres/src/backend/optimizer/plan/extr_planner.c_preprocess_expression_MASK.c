
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hasSubLinks; } ;
struct TYPE_7__ {int query_level; TYPE_3__* parse; scalar_t__ hasJoinRTEs; } ;
typedef TYPE_1__ PlannerInfo ;
typedef int Node ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (TYPE_1__*,int *,int) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int * FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static Node *
FUNC_8(PlannerInfo *VAR_6, Node *VAR_7, int VAR_8)
{





 if (VAR_7 == ((void*)0))
  return ((void*)0);
 if (VAR_6->hasJoinRTEs &&
  !(VAR_8 == VAR_1 ||
    VAR_8 == VAR_5 ||
    VAR_8 == VAR_4 ||
    VAR_8 == VAR_3))
  VAR_7 = FUNC_4(VAR_6->parse, VAR_7);
 if (!(VAR_8 == VAR_1 ||
    (VAR_8 == VAR_2 && !VAR_6->hasJoinRTEs)))
  VAR_7 = FUNC_3(VAR_6, VAR_7);




 if (VAR_8 == VAR_0)
 {
  VAR_7 = (Node *) FUNC_2((Expr *) VAR_7, 0);





 }


 if (VAR_6->parse->hasSubLinks)
  VAR_7 = FUNC_0(VAR_6, VAR_7, (VAR_8 == VAR_0));







 if (VAR_6->query_level > 1)
  VAR_7 = FUNC_1(VAR_6, VAR_7);







 if (VAR_8 == VAR_0)
  VAR_7 = (Node *) FUNC_5((Expr *) VAR_7);

 return VAR_7;
}
