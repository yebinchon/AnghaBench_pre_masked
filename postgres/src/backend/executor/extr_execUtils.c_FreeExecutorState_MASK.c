
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int es_query_cxt; int * es_partition_directory; int * es_jit; scalar_t__ es_exprcontexts; } ;
typedef int ExprContext ;
typedef TYPE_1__ EState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void
FUNC_5(EState *VAR_0)
{






 while (VAR_0->es_exprcontexts)
 {




  FUNC_1((ExprContext *) FUNC_4(VAR_0->es_exprcontexts),
      1);

 }


 if (VAR_0->es_jit)
 {
  FUNC_3(VAR_0->es_jit);
  VAR_0->es_jit = ((void*)0);
 }


 if (VAR_0->es_partition_directory)
 {
  FUNC_0(VAR_0->es_partition_directory);
  VAR_0->es_partition_directory = ((void*)0);
 }





 FUNC_2(VAR_0->es_query_cxt);
}
