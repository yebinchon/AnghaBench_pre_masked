
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* hres; } ;
typedef TYPE_1__ parser_ctx_t ;
struct TYPE_9__ {scalar_t__ type; struct TYPE_9__* next; struct TYPE_9__* next_prop_func; int name; } ;
typedef TYPE_2__ function_decl_t ;
struct TYPE_10__ {TYPE_2__* funcs; int name; } ;
typedef TYPE_3__ class_decl_t ;


 void* VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static class_decl_t *FUNC_3(parser_ctx_t *VAR_3, class_decl_t *VAR_4, function_decl_t *VAR_5)
{
    function_decl_t *VAR_6;

    for(VAR_6 = VAR_4->funcs; VAR_6; VAR_6 = VAR_6->next) {
        if(!FUNC_2(VAR_6->name, VAR_5->name)) {
            if(VAR_5->type == VAR_2 || VAR_5->type == VAR_1) {
                FUNC_0("Redefinition of %s::%s\n", FUNC_1(VAR_4->name), FUNC_1(VAR_5->name));
                VAR_3->hres = VAR_0;
                return ((void*)0);
            }

            while(1) {
                if(VAR_6->type == VAR_5->type) {
                    FUNC_0("Redefinition of %s::%s\n", FUNC_1(VAR_4->name), FUNC_1(VAR_5->name));
                    VAR_3->hres = VAR_0;
                    return ((void*)0);
                }
                if(!VAR_6->next_prop_func)
                    break;
                VAR_6 = VAR_6->next_prop_func;
            }

            VAR_6->next_prop_func = VAR_5;
            return VAR_4;
        }
    }

    VAR_5->next = VAR_4->funcs;
    VAR_4->funcs = VAR_5;
    return VAR_4;
}
