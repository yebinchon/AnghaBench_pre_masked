
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lval; } ;
struct TYPE_7__ {int type; int cval; void* is_const; TYPE_1__ u; struct TYPE_7__* ref; } ;
typedef TYPE_2__ expr_t ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;






 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;

expr_t *FUNC_1(enum expr_type VAR_2, expr_t *VAR_3)
{
    expr_t *VAR_4;
    VAR_4 = FUNC_0(sizeof(expr_t));
    VAR_4->type = VAR_2;
    VAR_4->ref = VAR_3;
    VAR_4->u.lval = 0;
    VAR_4->is_const = VAR_0;

    if (VAR_3->is_const)
    {
        VAR_4->is_const = VAR_1;
        switch (VAR_2)
        {
        case 131:
            VAR_4->cval = !VAR_3->cval;
            break;
        case 128:
            VAR_4->cval = +VAR_3->cval;
            break;
        case 130:
            VAR_4->cval = -VAR_3->cval;
            break;
        case 129:
            VAR_4->cval = ~VAR_3->cval;
            break;
        default:
            VAR_4->is_const = VAR_0;
            break;
        }
    }
    return VAR_4;
}
