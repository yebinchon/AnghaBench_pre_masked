
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int calculated_number ;
struct TYPE_3__ {int * ops; } ;
typedef TYPE_1__ EVAL_NODE ;
typedef int EVAL_EXPRESSION ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

calculated_number FUNC_4(EVAL_EXPRESSION *VAR_0, EVAL_NODE *VAR_1, int *VAR_2) {
    calculated_number VAR_3 = FUNC_1(VAR_0, &VAR_1->ops[0], VAR_2);
    calculated_number VAR_4 = FUNC_1(VAR_0, &VAR_1->ops[1], VAR_2);
    if(FUNC_3(VAR_3) && FUNC_3(VAR_4)) return 1;
    if(FUNC_2(VAR_3) && FUNC_2(VAR_4)) return 1;
    if(FUNC_3(VAR_3) || FUNC_3(VAR_4)) return 0;
    if(FUNC_2(VAR_3) || FUNC_2(VAR_4)) return 0;
    return FUNC_0(VAR_3, VAR_4);
}
