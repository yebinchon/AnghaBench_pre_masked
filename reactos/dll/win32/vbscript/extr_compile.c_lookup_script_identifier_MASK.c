
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* classes; TYPE_2__* global_funcs; TYPE_3__* global_vars; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_7__ {int name; struct TYPE_7__* next; } ;
typedef TYPE_2__ function_t ;
struct TYPE_8__ {int name; struct TYPE_8__* next; } ;
typedef TYPE_3__ dynamic_var_t ;
struct TYPE_9__ {int name; struct TYPE_9__* next; } ;
typedef TYPE_4__ class_desc_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static BOOL FUNC_1(script_ctx_t *VAR_2, const WCHAR *VAR_3)
{
    class_desc_t *VAR_4;
    dynamic_var_t *VAR_5;
    function_t *VAR_6;

    for(VAR_5 = VAR_2->global_vars; VAR_5; VAR_5 = VAR_5->next) {
        if(!FUNC_0(VAR_5->name, VAR_3))
            return VAR_1;
    }

    for(VAR_6 = VAR_2->global_funcs; VAR_6; VAR_6 = VAR_6->next) {
        if(!FUNC_0(VAR_6->name, VAR_3))
            return VAR_1;
    }

    for(VAR_4 = VAR_2->classes; VAR_4; VAR_4 = VAR_4->next) {
        if(!FUNC_0(VAR_4->name, VAR_3))
            return VAR_1;
    }

    return VAR_0;
}
