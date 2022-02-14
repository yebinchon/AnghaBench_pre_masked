
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int variable; int expression; } ;
typedef TYPE_1__ EVAL_VALUE ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(EVAL_VALUE *VAR_0) {
    switch(VAR_0->type) {
        case 129:
            FUNC_0(VAR_0->expression);
            break;

        case 128:
            FUNC_1(VAR_0->variable);
            break;

        default:
            break;
    }
}
