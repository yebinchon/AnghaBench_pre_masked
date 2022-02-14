
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct source_location {int dummy; } ;
struct TYPE_4__ {int data_type; struct source_location loc; int type; } ;
struct hlsl_ir_swizzle {int swizzle; struct hlsl_ir_node* val; TYPE_2__ node; } ;
struct hlsl_ir_node {TYPE_1__* data_type; } ;
struct TYPE_3__ {int base_type; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 struct hlsl_ir_swizzle* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,unsigned int,int) ;

__attribute__((used)) static struct hlsl_ir_swizzle *FUNC_2(DWORD VAR_2, unsigned int VAR_3,
        struct hlsl_ir_node *VAR_4, struct source_location *VAR_5)
{
    struct hlsl_ir_swizzle *VAR_6 = FUNC_0(sizeof(*VAR_6));

    if (!VAR_6)
        return ((void*)0);
    VAR_6->node.type = VAR_1;
    VAR_6->node.loc = *VAR_5;
    VAR_6->node.data_type = FUNC_1(((void*)0), VAR_0, VAR_4->data_type->base_type, VAR_3, 1);
    VAR_6->val = VAR_4;
    VAR_6->swizzle = VAR_2;
    return VAR_6;
}
