
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double dval; } ;
struct TYPE_6__ {int type; double cval; int is_const; TYPE_1__ u; int * ref; } ;
typedef TYPE_2__ expr_t ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

expr_t *FUNC_1(enum expr_type VAR_1, double VAR_2)
{
    expr_t *VAR_3 = FUNC_0(sizeof(expr_t));
    VAR_3->type = VAR_1;
    VAR_3->ref = ((void*)0);
    VAR_3->u.dval = VAR_2;
    VAR_3->is_const = VAR_0;
    VAR_3->cval = VAR_2;
    return VAR_3;
}
