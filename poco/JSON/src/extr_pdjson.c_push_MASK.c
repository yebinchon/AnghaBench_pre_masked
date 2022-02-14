
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct json_stack {int type; scalar_t__ count; } ;
struct TYPE_5__ {scalar_t__ (* realloc ) (struct json_stack*,int) ;} ;
struct TYPE_6__ {int stack_top; int stack_size; struct json_stack* stack; TYPE_1__ alloc; } ;
typedef TYPE_2__ json_stream ;
typedef enum json_type { ____Placeholder_json_type } json_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (struct json_stack*,int) ;

__attribute__((used)) static enum json_type
FUNC_2(json_stream *VAR_3, enum json_type VAR_4)
{
    VAR_3->stack_top++;

    if (VAR_3->stack_top >= VAR_3->stack_size) {
        struct json_stack *VAR_5;
        VAR_5 = (struct json_stack *) VAR_3->alloc.realloc(VAR_3->stack,
                (VAR_3->stack_size + VAR_1) * sizeof(*VAR_3->stack));
        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_3, VAR_2);
            return VAR_0;
        }

        VAR_3->stack_size += VAR_1;
        VAR_3->stack = VAR_5;
    }

    VAR_3->stack[VAR_3->stack_top].type = VAR_4;
    VAR_3->stack[VAR_3->stack_top].count = 0;

    return VAR_4;
}
