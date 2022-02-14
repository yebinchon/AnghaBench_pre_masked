
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* name; TYPE_2__* eval; } ;
typedef TYPE_3__ var_t ;
struct TYPE_8__ {char* sval; } ;
struct TYPE_11__ {int type; char cval; void* is_const; TYPE_1__ u; int * ref; } ;
typedef TYPE_4__ expr_t ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;
struct TYPE_9__ {char cval; } ;




 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_4__* FUNC_3 (int) ;

expr_t *FUNC_4(enum expr_type VAR_2, char *VAR_3)
{
    expr_t *VAR_4;
    VAR_4 = FUNC_3(sizeof(expr_t));
    VAR_4->type = VAR_2;
    VAR_4->ref = ((void*)0);
    VAR_4->u.sval = VAR_3;
    VAR_4->is_const = VAR_0;

    switch (VAR_2)
    {
    case 128:
    {
        var_t *VAR_5 = FUNC_1(VAR_3, 0);
        if (VAR_5)
        {
            VAR_4->u.sval = VAR_5->name;
            FUNC_2(VAR_3);
            VAR_4->is_const = VAR_1;
            VAR_4->cval = VAR_5->eval->cval;
        }
        break;
    }
    case 129:
        if (!VAR_3[0])
            FUNC_0("empty character constant\n");
        else if (VAR_3[1])
            FUNC_0("multi-character constants are endian dependent\n");
        else
        {
            VAR_4->is_const = VAR_1;
            VAR_4->cval = *VAR_3;
        }
        break;
    default:
        break;
    }
    return VAR_4;
}
