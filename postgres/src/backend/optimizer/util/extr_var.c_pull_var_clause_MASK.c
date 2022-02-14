
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int * varlist; } ;
typedef TYPE_1__ pull_var_clause_context ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_1__*) ;

List *
FUNC_2(Node *VAR_7, int VAR_8)
{
 pull_var_clause_context VAR_9;


 FUNC_0((VAR_8 & (VAR_1 | VAR_4))
     != (VAR_1 | VAR_4));
 FUNC_0((VAR_8 & (VAR_3 | VAR_6))
     != (VAR_3 | VAR_6));
 FUNC_0((VAR_8 & (VAR_2 | VAR_5))
     != (VAR_2 | VAR_5));

 VAR_9.varlist = VAR_0;
 VAR_9.flags = VAR_8;

 FUNC_1(VAR_7, &VAR_9);
 return VAR_9.varlist;
}
