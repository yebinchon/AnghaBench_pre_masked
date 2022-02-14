
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int calculated_number ;
struct TYPE_3__ {int type; int variable; int number; int expression; } ;
typedef TYPE_1__ EVAL_VALUE ;
typedef int EVAL_EXPRESSION ;


 int VAR_0 ;



 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ,int*) ;

__attribute__((used)) static inline calculated_number FUNC_2(EVAL_EXPRESSION *VAR_1, EVAL_VALUE *VAR_2, int *VAR_3) {
    calculated_number VAR_4;

    switch(VAR_2->type) {
        case 130:
            VAR_4 = FUNC_0(VAR_1, VAR_2->expression, VAR_3);
            break;

        case 129:
            VAR_4 = VAR_2->number;
            break;

        case 128:
            VAR_4 = FUNC_1(VAR_1, VAR_2->variable, VAR_3);
            break;

        default:
            *VAR_3 = VAR_0;
            VAR_4 = 0;
            break;
    }

    return VAR_4;
}
