
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_1__* ops; } ;
struct TYPE_5__ {TYPE_2__* expression; int type; } ;
typedef TYPE_2__ EVAL_NODE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static inline void FUNC_1(EVAL_NODE *VAR_1, int VAR_2, EVAL_NODE *VAR_3) {
    if(VAR_2 >= VAR_1->count)
        FUNC_0("Invalid request to set position %d of OPERAND that has only %d values", VAR_2 + 1, VAR_1->count + 1);

    VAR_1->ops[VAR_2].type = VAR_0;
    VAR_1->ops[VAR_2].expression = VAR_3;
}
