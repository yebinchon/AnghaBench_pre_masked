
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {int dummy; } ;
struct hlsl_type {int dummy; } ;
struct hlsl_ir_function_decl {struct list* parameters; struct hlsl_type* return_type; } ;


 int FUNC_0 (char*) ;
 struct hlsl_ir_function_decl* FUNC_1 (int) ;

struct hlsl_ir_function_decl *FUNC_2(struct hlsl_type *VAR_0, struct list *VAR_1)
{
    struct hlsl_ir_function_decl *VAR_2;

    VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (!VAR_2)
    {
        FUNC_0("Out of memory.\n");
        return ((void*)0);
    }
    VAR_2->return_type = VAR_0;
    VAR_2->parameters = VAR_1;

    return VAR_2;
}
