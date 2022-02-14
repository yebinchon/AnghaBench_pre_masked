
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ stgclass; int * type; } ;
typedef TYPE_2__ var_t ;
typedef int type_t ;
struct TYPE_9__ {int * tref; } ;
struct TYPE_11__ {int type; int cval; void* is_const; TYPE_1__ u; struct TYPE_11__* ref; } ;
typedef TYPE_3__ expr_t ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int) ;

expr_t *FUNC_7(enum expr_type VAR_6, var_t *VAR_7, expr_t *VAR_8)
{
    expr_t *VAR_9;
    type_t *VAR_10;

    if (VAR_7->stgclass != VAR_3 && VAR_7->stgclass != VAR_4)
        FUNC_0("invalid storage class for type expression\n");

    VAR_10 = VAR_7->type;

    VAR_9 = FUNC_6(sizeof(expr_t));
    VAR_9->type = VAR_6;
    VAR_9->ref = VAR_8;
    VAR_9->u.tref = VAR_10;
    VAR_9->is_const = VAR_2;
    if (VAR_6 == VAR_1)
    {

        if (FUNC_3(VAR_10) || FUNC_2(VAR_10))
        {
            VAR_9->is_const = VAR_5;
            VAR_9->cval = FUNC_5(VAR_10);
        }
    }

    if (VAR_6 == VAR_0 && VAR_8->is_const)
    {
        if (FUNC_3(VAR_10))
        {
            unsigned int VAR_11 = FUNC_5(VAR_10) * 8;
            unsigned int VAR_12;

            VAR_9->is_const = VAR_5;
            if (FUNC_4(VAR_10))
            {
                VAR_12 = (1u << (VAR_11 - 1)) - 1;
                if (VAR_8->cval & (1u << (VAR_11 - 1)))
                    VAR_9->cval = -((-VAR_8->cval) & VAR_12);
                else
                    VAR_9->cval = VAR_8->cval & VAR_12;
            }
            else
            {

                VAR_12 = ((1u << (VAR_11 - 1)) - 1) |
                            1u << (VAR_11 - 1);
                VAR_9->cval = VAR_8->cval & VAR_12;
            }
        }
        else
        {
            VAR_9->is_const = VAR_5;
            VAR_9->cval = VAR_8->cval;
        }
    }
    FUNC_1(VAR_7);
    return VAR_9;
}
