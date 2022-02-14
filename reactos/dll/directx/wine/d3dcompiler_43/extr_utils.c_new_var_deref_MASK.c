
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hlsl_ir_var {int data_type; } ;
struct TYPE_4__ {struct hlsl_ir_var* var; } ;
struct TYPE_3__ {int data_type; int type; } ;
struct hlsl_ir_deref {TYPE_2__ v; int type; TYPE_1__ node; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hlsl_ir_deref* FUNC_1 (int) ;

struct hlsl_ir_deref *FUNC_2(struct hlsl_ir_var *VAR_2)
{
    struct hlsl_ir_deref *VAR_3 = FUNC_1(sizeof(*VAR_3));

    if (!VAR_3)
    {
        FUNC_0("Out of memory.\n");
        return ((void*)0);
    }
    VAR_3->node.type = VAR_0;
    VAR_3->node.data_type = VAR_2->data_type;
    VAR_3->type = VAR_1;
    VAR_3->v.var = VAR_2;
    return VAR_3;
}
