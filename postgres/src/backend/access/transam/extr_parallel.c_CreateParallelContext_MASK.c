
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nworkers; int node; int estimator; int error_context_stack; void* function_name; void* library_name; int subid; } ;
typedef TYPE_1__ ParallelContext ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_2 ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;

ParallelContext *
FUNC_8(const char *VAR_3, const char *VAR_4,
       int VAR_5)
{
 MemoryContext VAR_6;
 ParallelContext *VAR_7;


 FUNC_0(FUNC_2());


 FUNC_0(VAR_5 >= 0);


 VAR_6 = FUNC_3(VAR_0);


 VAR_7 = FUNC_5(sizeof(ParallelContext));
 VAR_7->subid = FUNC_1();
 VAR_7->nworkers = VAR_5;
 VAR_7->library_name = FUNC_6(VAR_3);
 VAR_7->function_name = FUNC_6(VAR_4);
 VAR_7->error_context_stack = VAR_1;
 FUNC_7(&VAR_7->estimator);
 FUNC_4(&VAR_2, &VAR_7->node);


 FUNC_3(VAR_6);

 return VAR_7;
}
