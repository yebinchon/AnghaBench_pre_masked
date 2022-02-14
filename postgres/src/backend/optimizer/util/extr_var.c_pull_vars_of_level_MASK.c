
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sublevels_up; int * vars; } ;
typedef TYPE_1__ pull_vars_context ;
typedef int Node ;
typedef int List ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,void*,int ) ;

List *
FUNC_1(Node *VAR_2, int VAR_3)
{
 pull_vars_context VAR_4;

 VAR_4.vars = VAR_0;
 VAR_4.sublevels_up = VAR_3;





 FUNC_0(VAR_2,
         VAR_1,
         (void *) &VAR_4,
         0);

 return VAR_4.vars;
}
