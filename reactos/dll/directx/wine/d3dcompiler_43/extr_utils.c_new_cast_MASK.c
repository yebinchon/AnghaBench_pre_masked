
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct source_location {int dummy; } ;
struct hlsl_type {int dummy; } ;
struct hlsl_ir_node {struct hlsl_type* data_type; } ;
struct hlsl_ir_expr {int dummy; } ;


 int VAR_0 ;
 struct hlsl_ir_expr* FUNC_0 (struct hlsl_ir_node*) ;
 struct hlsl_ir_node* FUNC_1 (int ,struct hlsl_ir_node*,struct source_location) ;

struct hlsl_ir_expr *FUNC_2(struct hlsl_ir_node *VAR_1, struct hlsl_type *VAR_2,
        struct source_location *VAR_3)
{
    struct hlsl_ir_node *VAR_4;

    VAR_4 = FUNC_1(VAR_0, VAR_1, *VAR_3);
    if (VAR_4)
        VAR_4->data_type = VAR_2;
    return FUNC_0(VAR_4);
}
