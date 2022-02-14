
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int indexed_tlist ;
struct TYPE_3__ {int rtoffset; int newvarno; int * subplan_itlist; int * root; } ;
typedef TYPE_1__ fix_upper_expr_context ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int Index ;


 int * FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static Node *
FUNC_1(PlannerInfo *VAR_0,
      Node *VAR_1,
      indexed_tlist *VAR_2,
      Index VAR_3,
      int VAR_4)
{
 fix_upper_expr_context VAR_5;

 VAR_5.root = VAR_0;
 VAR_5.subplan_itlist = VAR_2;
 VAR_5.newvarno = VAR_3;
 VAR_5.rtoffset = VAR_4;
 return FUNC_0(VAR_1, &VAR_5);
}
