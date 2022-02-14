
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source_location {int dummy; } ;
struct hlsl_type {int dummy; } ;
struct hlsl_ir_node {int data_type; } ;
struct TYPE_2__ {struct hlsl_ir_node node; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,struct hlsl_type*) ;
 int FUNC_2 (struct hlsl_type*) ;
 TYPE_1__* FUNC_3 (struct hlsl_ir_node*,struct hlsl_type*,struct source_location*) ;

__attribute__((used)) static struct hlsl_ir_node *FUNC_4(struct hlsl_ir_node *VAR_0, struct hlsl_type *VAR_1,
        struct source_location *VAR_2)
{
    if (FUNC_1(VAR_0->data_type, VAR_1))
        return VAR_0;
    FUNC_0("Implicit conversion of expression to %s\n", FUNC_2(VAR_1));
    return &FUNC_3(VAR_0, VAR_1, VAR_2)->node;
}
