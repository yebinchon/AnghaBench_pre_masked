
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hlsl_struct_field {int type; } ;
struct hlsl_ir_node {int dummy; } ;
struct TYPE_4__ {struct hlsl_struct_field* field; struct hlsl_ir_node* record; } ;
struct TYPE_5__ {TYPE_1__ record; } ;
struct TYPE_6__ {int data_type; int type; } ;
struct hlsl_ir_deref {TYPE_2__ v; int type; TYPE_3__ node; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hlsl_ir_deref* FUNC_1 (int) ;

struct hlsl_ir_deref *FUNC_2(struct hlsl_ir_node *VAR_2, struct hlsl_struct_field *VAR_3)
{
    struct hlsl_ir_deref *VAR_4 = FUNC_1(sizeof(*VAR_4));

    if (!VAR_4)
    {
        FUNC_0("Out of memory.\n");
        return ((void*)0);
    }
    VAR_4->node.type = VAR_0;
    VAR_4->node.data_type = VAR_3->type;
    VAR_4->type = VAR_1;
    VAR_4->v.record.record = VAR_2;
    VAR_4->v.record.field = VAR_3;
    return VAR_4;
}
