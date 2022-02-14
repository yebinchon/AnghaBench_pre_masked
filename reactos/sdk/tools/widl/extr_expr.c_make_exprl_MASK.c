
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lval; } ;
struct TYPE_6__ {int type; int cval; int is_const; TYPE_1__ u; int * ref; } ;
typedef TYPE_2__ expr_t ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;

expr_t *FUNC_2(enum expr_type VAR_5, int VAR_6)
{
    expr_t *VAR_7 = FUNC_1(sizeof(expr_t));
    VAR_7->type = VAR_5;
    VAR_7->ref = ((void*)0);
    VAR_7->u.lval = VAR_6;
    VAR_7->is_const = VAR_3;

    if (VAR_5 == VAR_1 || VAR_5 == VAR_0 || VAR_5 == VAR_2)
    {

        FUNC_0(VAR_5 != VAR_2 || VAR_6 == 0 || VAR_6 == 1);
        VAR_7->is_const = VAR_4;
        VAR_7->cval = VAR_6;
    }
    return VAR_7;
}
