
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lval; } ;
struct TYPE_6__ {int type; scalar_t__ cval; int is_const; TYPE_1__ u; int * ref; } ;
typedef TYPE_2__ expr_t ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

expr_t *FUNC_1(enum expr_type VAR_1)
{
    expr_t *VAR_2 = FUNC_0(sizeof(expr_t));
    VAR_2->type = VAR_1;
    VAR_2->ref = ((void*)0);
    VAR_2->u.lval = 0;
    VAR_2->is_const = VAR_0;
    VAR_2->cval = 0;
    return VAR_2;
}
