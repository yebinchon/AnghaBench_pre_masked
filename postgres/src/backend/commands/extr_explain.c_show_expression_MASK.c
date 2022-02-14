
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int deparse_cxt; } ;
typedef int PlanState ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ ExplainState ;


 int FUNC_0 (char const*,char*,TYPE_1__*) ;
 char* FUNC_1 (int *,int *,int,int) ;
 int * FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_3(Node *VAR_0, const char *VAR_1,
    PlanState *VAR_2, List *VAR_3,
    bool VAR_4, ExplainState *VAR_5)
{
 List *VAR_6;
 char *VAR_7;


 VAR_6 = FUNC_2(VAR_5->deparse_cxt,
           (Node *) VAR_2,
           VAR_3);


 VAR_7 = FUNC_1(VAR_0, VAR_6, VAR_4, 0);


 FUNC_0(VAR_1, VAR_7, VAR_5);
}
