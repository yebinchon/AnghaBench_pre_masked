
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hlsl_type {scalar_t__ type; int dimx; int dimy; int base_type; } ;
struct TYPE_5__ {int col; int line; int file; } ;
struct hlsl_ir_node {scalar_t__ type; TYPE_2__ loc; struct hlsl_type* data_type; } ;
struct TYPE_4__ {int var; } ;
struct hlsl_ir_deref {scalar_t__ type; int node; TYPE_1__ v; } ;
struct hlsl_ir_assignment {int writemask; struct hlsl_ir_node node; struct hlsl_ir_node* rhs; struct hlsl_ir_node* lhs; } ;
typedef enum parse_assign_op { ____Placeholder_parse_assign_op } parse_assign_op ;
typedef enum hlsl_type_class { ____Placeholder_hlsl_type_class } hlsl_type_class ;
typedef enum hlsl_ir_expr_op { ____Placeholder_hlsl_ir_expr_op } hlsl_ir_expr_op ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct hlsl_type*,struct hlsl_type*) ;
 struct hlsl_ir_assignment* FUNC_4 (int) ;
 int FUNC_5 (struct hlsl_ir_assignment*) ;
 int FUNC_6 (struct hlsl_type*) ;
 struct hlsl_ir_deref* FUNC_7 (struct hlsl_ir_node*) ;
 int FUNC_8 (struct hlsl_ir_node*) ;
 int FUNC_9 (int ,int ,int ,int ,char*,...) ;
 int FUNC_10 (struct hlsl_type*,struct hlsl_type*) ;
 struct hlsl_ir_node* FUNC_11 (struct hlsl_ir_node*,struct hlsl_type*,TYPE_2__*) ;
 struct hlsl_ir_node* FUNC_12 (int,int *,struct hlsl_ir_node*,TYPE_2__) ;
 struct hlsl_type* FUNC_13 (int *,int,int ,unsigned int,int) ;
 struct hlsl_ir_deref* FUNC_14 (int ) ;
 int FUNC_15 (int) ;

struct hlsl_ir_node *FUNC_16(struct hlsl_ir_node *VAR_10, enum parse_assign_op VAR_11,
        DWORD VAR_12, struct hlsl_ir_node *VAR_13)
{
    struct hlsl_ir_assignment *VAR_14 = FUNC_4(sizeof(*VAR_14));
    struct hlsl_type *VAR_15;
    struct hlsl_ir_node *VAR_16, *VAR_17;

    if (!VAR_14)
    {
        FUNC_0("Out of memory\n");
        return ((void*)0);
    }

    FUNC_2("Creating proper assignment expression.\n");
    VAR_17 = VAR_13;
    if (VAR_12 == VAR_1)
        VAR_15 = VAR_10->data_type;
    else
    {
        unsigned int VAR_18 = 0;
        DWORD VAR_19;
        enum hlsl_type_class VAR_20;

        if (VAR_10->data_type->type > VAR_2)
        {
            FUNC_9(VAR_10->loc.file, VAR_10->loc.line, VAR_10->loc.col, VAR_8,
                    "writemask on a non scalar/vector/matrix type");
            FUNC_5(VAR_14);
            return ((void*)0);
        }
        VAR_19 = VAR_12 & ((1 << VAR_10->data_type->dimx) - 1);
        while (VAR_19)
        {
            if (VAR_19 & 1)
                VAR_18++;
            VAR_19 >>= 1;
        }
        if (VAR_10->data_type->type == VAR_3)
            FUNC_1("Assignments with writemasks and matrices on lhs are not supported yet.\n");
        if (VAR_18 == 1)
            VAR_20 = VAR_4;
        else
            VAR_20 = VAR_10->data_type->type;
        VAR_15 = FUNC_13(((void*)0), VAR_20, VAR_10->data_type->base_type, VAR_18, 1);
    }
    VAR_14->node.type = VAR_5;
    VAR_14->node.loc = VAR_10->loc;
    VAR_14->node.data_type = VAR_15;
    VAR_14->writemask = VAR_12;
    FUNC_1("Check for casts in the lhs.\n");

    VAR_16 = VAR_10;


    if (!FUNC_3(VAR_15, VAR_17->data_type))
    {
        struct hlsl_ir_node *VAR_21;

        if (!FUNC_10(VAR_17->data_type, VAR_15))
        {
            FUNC_9(VAR_17->loc.file, VAR_17->loc.line, VAR_17->loc.col, VAR_8,
                    "can't implicitly convert %s to %s",
                    FUNC_6(VAR_17->data_type), FUNC_6(VAR_15));
            FUNC_8(VAR_16);
            FUNC_8(VAR_17);
            FUNC_5(VAR_14);
            return ((void*)0);
        }
        if (VAR_16->data_type->dimx * VAR_16->data_type->dimy < VAR_17->data_type->dimx * VAR_17->data_type->dimy)
            FUNC_9(VAR_17->loc.file, VAR_17->loc.line, VAR_17->loc.col, VAR_9,
                    "implicit truncation of vector type");

        VAR_21 = FUNC_11(VAR_17, VAR_15, &VAR_17->loc);
        if (!VAR_21)
        {
            FUNC_0("Couldn't implicitly convert expression to %s.\n", FUNC_6(VAR_15));
            FUNC_8(VAR_16);
            FUNC_8(VAR_17);
            FUNC_5(VAR_14);
            return ((void*)0);
        }
        VAR_17 = VAR_21;
    }

    VAR_14->lhs = VAR_16;
    if (VAR_11 != VAR_0)
    {
        enum hlsl_ir_expr_op VAR_22 = FUNC_15(VAR_11);
        struct hlsl_ir_node *VAR_23;

        if (VAR_16->type != VAR_6 || FUNC_7(VAR_16)->type != VAR_7)
        {
            FUNC_1("LHS expression not supported in compound assignments yet.\n");
            VAR_14->rhs = VAR_17;
        }
        else
        {
            struct hlsl_ir_deref *VAR_24 = FUNC_7(VAR_16), *VAR_25;

            FUNC_2("Adding an expression for the compound assignment.\n");
            VAR_25 = FUNC_14(VAR_24->v.var);
            VAR_23 = FUNC_12(VAR_22, &VAR_25->node, VAR_17, VAR_10->loc);
            VAR_14->rhs = VAR_23;
        }
    }
    else
        VAR_14->rhs = VAR_17;

    return &VAR_14->node;
}
