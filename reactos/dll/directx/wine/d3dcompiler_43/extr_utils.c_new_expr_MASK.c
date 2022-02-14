
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct source_location {int dummy; } ;
struct hlsl_type {int dimx; int dimy; } ;
struct TYPE_4__ {int col; int line; int file; } ;
struct hlsl_ir_node {TYPE_2__ loc; struct hlsl_type* data_type; } ;
struct TYPE_3__ {struct hlsl_type* data_type; struct source_location loc; int type; } ;
struct hlsl_ir_expr {int op; struct hlsl_ir_node** operands; TYPE_1__ node; } ;
typedef enum hlsl_ir_expr_op { ____Placeholder_hlsl_ir_expr_op } hlsl_ir_expr_op ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct hlsl_type*,struct hlsl_type*) ;
 struct hlsl_ir_expr* FUNC_3 (int) ;
 int FUNC_4 (struct hlsl_ir_expr*) ;
 int FUNC_5 (struct hlsl_type*) ;
 struct hlsl_type* FUNC_6 (struct hlsl_type*,struct hlsl_type*,struct source_location*) ;
 int FUNC_7 (int ,int ,int ,int ,char*) ;
 struct hlsl_ir_node* FUNC_8 (struct hlsl_ir_node*,struct hlsl_type*,TYPE_2__*) ;

struct hlsl_ir_expr *FUNC_9(enum hlsl_ir_expr_op VAR_2, struct hlsl_ir_node **VAR_3,
        struct source_location *VAR_4)
{
    struct hlsl_ir_expr *VAR_5 = FUNC_3(sizeof(*VAR_5));
    struct hlsl_type *VAR_6;
    unsigned int VAR_7;

    if (!VAR_5)
    {
        FUNC_0("Out of memory\n");
        return ((void*)0);
    }
    VAR_5->node.type = VAR_0;
    VAR_5->node.loc = *VAR_4;
    VAR_6 = VAR_3[0]->data_type;
    for (VAR_7 = 1; VAR_7 <= 2; ++VAR_7)
    {
        if (!VAR_3[VAR_7])
            break;
        VAR_6 = FUNC_6(VAR_6, VAR_3[VAR_7]->data_type, VAR_4);
        if (!VAR_6)
        {
            FUNC_4(VAR_5);
            return ((void*)0);
        }
    }
    for (VAR_7 = 0; VAR_7 <= 2; ++VAR_7)
    {
        if (!VAR_3[VAR_7])
            break;
        if (FUNC_2(VAR_3[VAR_7]->data_type, VAR_6))
            continue;
        FUNC_1("Implicitly converting %s into %s in an expression\n", FUNC_5(VAR_3[VAR_7]->data_type), FUNC_5(VAR_6));
        if (VAR_3[VAR_7]->data_type->dimx * VAR_3[VAR_7]->data_type->dimy != 1
                && VAR_3[VAR_7]->data_type->dimx * VAR_3[VAR_7]->data_type->dimy != VAR_6->dimx * VAR_6->dimy)
        {
            FUNC_7(VAR_3[VAR_7]->loc.file,
                    VAR_3[VAR_7]->loc.line, VAR_3[VAR_7]->loc.col, VAR_1,
                    "implicit truncation of vector/matrix type");
        }
        VAR_3[VAR_7] = FUNC_8(VAR_3[VAR_7], VAR_6, &VAR_3[VAR_7]->loc);
        if (!VAR_3[VAR_7])
        {
            FUNC_0("Impossible to convert expression operand %u to %s\n", VAR_7 + 1, FUNC_5(VAR_6));
            FUNC_4(VAR_5);
            return ((void*)0);
        }
    }
    VAR_5->node.data_type = VAR_6;
    VAR_5->op = VAR_2;
    VAR_5->operands[0] = VAR_3[0];
    VAR_5->operands[1] = VAR_3[1];
    VAR_5->operands[2] = VAR_3[2];

    return VAR_5;
}
