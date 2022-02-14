
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hasJoinRTEs; int have_non_var_grouping; int in_agg_direct_args; scalar_t__ sublevels_up; int * func_grouped_rels; int groupClauseCommonVars; int * groupClauses; int * qry; int * pstate; } ;
typedef TYPE_1__ check_ungrouped_columns_context ;
typedef int Query ;
typedef int ParseState ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(Node *VAR_1, ParseState *VAR_2, Query *VAR_3,
      List *VAR_4, bool VAR_5,
      bool VAR_6)
{
 check_ungrouped_columns_context VAR_7;

 VAR_7.pstate = VAR_2;
 VAR_7.qry = VAR_3;
 VAR_7.hasJoinRTEs = VAR_5;
 VAR_7.groupClauses = VAR_4;
 VAR_7.groupClauseCommonVars = VAR_0;
 VAR_7.have_non_var_grouping = VAR_6;
 VAR_7.func_grouped_rels = ((void*)0);
 VAR_7.sublevels_up = 0;
 VAR_7.in_agg_direct_args = 0;
 FUNC_0(VAR_1, &VAR_7);
}
