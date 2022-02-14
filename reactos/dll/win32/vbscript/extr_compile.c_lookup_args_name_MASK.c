
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* func; } ;
typedef TYPE_3__ compile_ctx_t ;
typedef int WCHAR ;
struct TYPE_6__ {unsigned int arg_cnt; TYPE_1__* args; } ;
struct TYPE_5__ {int name; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static BOOL FUNC_1(compile_ctx_t *VAR_2, const WCHAR *VAR_3)
{
    unsigned VAR_4;

    for(VAR_4 = 0; VAR_4 < VAR_2->func->arg_cnt; VAR_4++) {
        if(!FUNC_0(VAR_2->func->args[VAR_4].name, VAR_3))
            return VAR_1;
    }

    return VAR_0;
}
