
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nargs; int* usecounts; int * args; } ;
typedef TYPE_1__ substitute_actual_parameters_context ;
typedef int Node ;
typedef int List ;


 int * FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static Node *
FUNC_1(Node *VAR_0, int VAR_1, List *VAR_2,
        int *VAR_3)
{
 substitute_actual_parameters_context VAR_4;

 VAR_4.nargs = VAR_1;
 VAR_4.args = VAR_2;
 VAR_4.usecounts = VAR_3;

 return FUNC_0(VAR_0, &VAR_4);
}
