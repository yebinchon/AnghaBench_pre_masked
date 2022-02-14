
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ calculated_number ;
struct TYPE_3__ {int * ops; } ;
typedef TYPE_1__ EVAL_NODE ;
typedef int EVAL_EXPRESSION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

calculated_number FUNC_3(EVAL_EXPRESSION *VAR_2, EVAL_NODE *VAR_3, int *VAR_4) {
    calculated_number VAR_5 = FUNC_0(VAR_2, &VAR_3->ops[0], VAR_4);
    calculated_number VAR_6 = FUNC_0(VAR_2, &VAR_3->ops[1], VAR_4);
    if(FUNC_2(VAR_5) || FUNC_2(VAR_6)) return VAR_1;
    if(FUNC_1(VAR_5) || FUNC_1(VAR_6)) return VAR_0;
    return VAR_5 + VAR_6;
}
