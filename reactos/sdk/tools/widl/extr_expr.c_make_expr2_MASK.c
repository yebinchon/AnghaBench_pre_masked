
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ext; } ;
struct TYPE_8__ {int type; int cval; void* is_const; TYPE_1__ u; struct TYPE_8__* ref; } ;
typedef TYPE_2__ expr_t ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int) ;

expr_t *FUNC_2(enum expr_type VAR_2, expr_t *VAR_3, expr_t *VAR_4)
{
    expr_t *VAR_5;
    VAR_5 = FUNC_1(sizeof(expr_t));
    VAR_5->type = VAR_2;
    VAR_5->ref = VAR_3;
    VAR_5->u.ext = VAR_4;
    VAR_5->is_const = VAR_0;

    if (VAR_3->is_const && VAR_4->is_const)
    {
        VAR_5->is_const = VAR_1;
        switch (VAR_2)
        {
        case 145:
            VAR_5->cval = VAR_3->cval + VAR_4->cval;
            break;
        case 129:
            VAR_5->cval = VAR_3->cval - VAR_4->cval;
            break;
        case 134:
            if (VAR_4->cval == 0)
            {
                FUNC_0("divide by zero in expression\n");
                VAR_5->cval = 0;
            }
            else
                VAR_5->cval = VAR_3->cval % VAR_4->cval;
            break;
        case 133:
            VAR_5->cval = VAR_3->cval * VAR_4->cval;
            break;
        case 143:
            if (VAR_4->cval == 0)
            {
                FUNC_0("divide by zero in expression\n");
                VAR_5->cval = 0;
            }
            else
                VAR_5->cval = VAR_3->cval / VAR_4->cval;
            break;
        case 132:
            VAR_5->cval = VAR_3->cval | VAR_4->cval;
            break;
        case 144:
            VAR_5->cval = VAR_3->cval & VAR_4->cval;
            break;
        case 131:
            VAR_5->cval = VAR_3->cval << VAR_4->cval;
            break;
        case 130:
            VAR_5->cval = VAR_3->cval >> VAR_4->cval;
            break;
        case 135:
            VAR_5->cval = VAR_3->cval || VAR_4->cval;
            break;
        case 136:
            VAR_5->cval = VAR_3->cval && VAR_4->cval;
            break;
        case 128:
            VAR_5->cval = VAR_3->cval ^ VAR_4->cval;
            break;
        case 142:
            VAR_5->cval = VAR_3->cval == VAR_4->cval;
            break;
        case 139:
            VAR_5->cval = VAR_3->cval != VAR_4->cval;
            break;
        case 141:
            VAR_5->cval = VAR_3->cval > VAR_4->cval;
            break;
        case 138:
            VAR_5->cval = VAR_3->cval < VAR_4->cval;
            break;
        case 140:
            VAR_5->cval = VAR_3->cval >= VAR_4->cval;
            break;
        case 137:
            VAR_5->cval = VAR_3->cval <= VAR_4->cval;
            break;
        default:
            VAR_5->is_const = VAR_0;
            break;
        }
    }
    return VAR_5;
}
