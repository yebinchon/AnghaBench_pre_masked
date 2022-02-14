
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nomatch_varno; int nomatch_option; int * targetlist; int * target_rte; } ;
typedef int ReplaceVarsNoMatchOption ;
typedef TYPE_1__ ReplaceVarsFromTargetList_context ;
typedef int RangeTblEntry ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 int * FUNC_0 (int *,int,int,int ,void*,int*) ;

Node *
FUNC_1(Node *VAR_1,
        int VAR_2, int VAR_3,
        RangeTblEntry *VAR_4,
        List *VAR_5,
        ReplaceVarsNoMatchOption VAR_6,
        int VAR_7,
        bool *VAR_8)
{
 ReplaceVarsFromTargetList_context VAR_9;

 VAR_9.target_rte = VAR_4;
 VAR_9.targetlist = VAR_5;
 VAR_9.nomatch_option = VAR_6;
 VAR_9.nomatch_varno = VAR_7;

 return FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_0,
         (void *) &VAR_9,
         VAR_8);
}
