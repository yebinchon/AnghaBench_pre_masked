
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* ext; } ;
struct TYPE_9__ {int type; void* is_const; int cval; struct TYPE_9__* ext2; TYPE_1__ u; struct TYPE_9__* ref; } ;
typedef TYPE_2__ expr_t ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;



 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;

expr_t *FUNC_1(enum expr_type VAR_2, expr_t *VAR_3, expr_t *VAR_4, expr_t *VAR_5)
{
    expr_t *VAR_6;
    VAR_6 = FUNC_0(sizeof(expr_t));
    VAR_6->type = VAR_2;
    VAR_6->ref = VAR_3;
    VAR_6->u.ext = VAR_4;
    VAR_6->ext2 = VAR_5;
    VAR_6->is_const = VAR_0;

    if (VAR_3->is_const && VAR_4->is_const && VAR_5->is_const)
    {
        VAR_6->is_const = VAR_1;
        switch (VAR_2)
        {
        case 128:
            VAR_6->cval = VAR_3->cval ? VAR_4->cval : VAR_5->cval;
            break;
        default:
            VAR_6->is_const = VAR_0;
            break;
        }
    }
    return VAR_6;
}
