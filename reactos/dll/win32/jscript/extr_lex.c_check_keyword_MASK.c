
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* ptr; scalar_t__ const* end; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef scalar_t__ WCHAR ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static int FUNC_1(parser_ctx_t *VAR_0, const WCHAR *VAR_1, const WCHAR **VAR_2)
{
    const WCHAR *VAR_3 = VAR_0->ptr;
    const WCHAR *VAR_4 = VAR_1;

    while(VAR_3 < VAR_0->end && *VAR_4) {
        if(*VAR_3 != *VAR_4)
            return *VAR_3 - *VAR_4;
        VAR_3++;
        VAR_4++;
    }

    if(*VAR_4 || (VAR_3 < VAR_0->end && FUNC_0(*VAR_3)))
        return 1;

    if(VAR_2)
        *VAR_2 = VAR_1;
    VAR_0->ptr = VAR_3;
    return 0;
}
