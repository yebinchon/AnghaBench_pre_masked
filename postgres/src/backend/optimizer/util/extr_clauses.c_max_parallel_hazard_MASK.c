
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char max_hazard; int safe_param_ids; int max_interesting; } ;
typedef TYPE_1__ max_parallel_hazard_context ;
typedef int Query ;
typedef int Node ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;

char
FUNC_1(Query *VAR_3)
{
 max_parallel_hazard_context VAR_4;

 VAR_4.max_hazard = VAR_1;
 VAR_4.max_interesting = VAR_2;
 VAR_4.safe_param_ids = VAR_0;
 (void) FUNC_0((Node *) VAR_3, &VAR_4);
 return VAR_4.max_hazard;
}
