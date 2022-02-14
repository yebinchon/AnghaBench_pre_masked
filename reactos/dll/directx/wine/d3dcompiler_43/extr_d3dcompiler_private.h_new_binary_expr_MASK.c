
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source_location {int dummy; } ;
struct hlsl_ir_node {int dummy; } ;
typedef enum hlsl_ir_expr_op { ____Placeholder_hlsl_ir_expr_op } hlsl_ir_expr_op ;
struct TYPE_2__ {struct hlsl_ir_node node; } ;


 TYPE_1__* FUNC_0 (int,struct hlsl_ir_node**,struct source_location*) ;

__attribute__((used)) static inline struct hlsl_ir_node *FUNC_1(enum hlsl_ir_expr_op VAR_0,
        struct hlsl_ir_node *VAR_1, struct hlsl_ir_node *VAR_2, struct source_location VAR_3)
{
    struct hlsl_ir_node *VAR_4[3] = {VAR_1, VAR_2};
    return &FUNC_0(VAR_0, VAR_4, &VAR_3)->node;
}
