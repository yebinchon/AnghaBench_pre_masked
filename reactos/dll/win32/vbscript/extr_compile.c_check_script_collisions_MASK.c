
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_6__ {int name; struct TYPE_6__* next; } ;
typedef TYPE_1__ function_t ;
struct TYPE_7__ {int name; struct TYPE_7__* next; } ;
typedef TYPE_2__ dynamic_var_t ;
struct TYPE_8__ {TYPE_4__* classes; TYPE_1__* funcs; TYPE_2__* global_vars; } ;
typedef TYPE_3__ compile_ctx_t ;
struct TYPE_9__ {int name; struct TYPE_9__* next; } ;
typedef TYPE_4__ class_desc_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_3(compile_ctx_t *VAR_2, script_ctx_t *VAR_3)
{
    class_desc_t *VAR_4;
    dynamic_var_t *VAR_5;
    function_t *VAR_6;

    for(VAR_5 = VAR_2->global_vars; VAR_5; VAR_5 = VAR_5->next) {
        if(FUNC_2(VAR_3, VAR_5->name)) {
            FUNC_0("%s: redefined\n", FUNC_1(VAR_5->name));
            return VAR_0;
        }
    }

    for(VAR_6 = VAR_2->funcs; VAR_6; VAR_6 = VAR_6->next) {
        if(FUNC_2(VAR_3, VAR_6->name)) {
            FUNC_0("%s: redefined\n", FUNC_1(VAR_6->name));
            return VAR_0;
        }
    }

    for(VAR_4 = VAR_2->classes; VAR_4; VAR_4 = VAR_4->next) {
        if(FUNC_2(VAR_3, VAR_4->name)) {
            FUNC_0("%s: redefined\n", FUNC_1(VAR_4->name));
            return VAR_0;
        }
    }

    return VAR_1;
}
