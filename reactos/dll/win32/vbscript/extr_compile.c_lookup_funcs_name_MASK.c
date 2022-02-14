
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ function_t ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
typedef TYPE_2__ compile_ctx_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static BOOL FUNC_1(compile_ctx_t *VAR_2, const WCHAR *VAR_3)
{
    function_t *VAR_4;

    for(VAR_4 = VAR_2->funcs; VAR_4; VAR_4 = VAR_4->next) {
        if(!FUNC_0(VAR_4->name, VAR_3))
            return VAR_1;
    }

    return VAR_0;
}
