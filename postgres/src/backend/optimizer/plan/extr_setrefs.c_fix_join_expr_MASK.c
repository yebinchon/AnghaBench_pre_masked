
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int indexed_tlist ;
struct TYPE_3__ {int rtoffset; int acceptable_rel; int * inner_itlist; int * outer_itlist; int * root; } ;
typedef TYPE_1__ fix_join_expr_context ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int List ;
typedef int Index ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static List *
FUNC_1(PlannerInfo *VAR_0,
     List *VAR_1,
     indexed_tlist *VAR_2,
     indexed_tlist *VAR_3,
     Index VAR_4,
     int VAR_5)
{
 fix_join_expr_context VAR_6;

 VAR_6.root = VAR_0;
 VAR_6.outer_itlist = VAR_2;
 VAR_6.inner_itlist = VAR_3;
 VAR_6.acceptable_rel = VAR_4;
 VAR_6.rtoffset = VAR_5;
 return (List *) FUNC_0((Node *) VAR_1, &VAR_6);
}
