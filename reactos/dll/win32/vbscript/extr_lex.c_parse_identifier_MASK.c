
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ const* ptr; scalar_t__ const* end; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef scalar_t__ WCHAR ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__* FUNC_2 (TYPE_1__*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(parser_ctx_t *VAR_1, const WCHAR **VAR_2)
{
    const WCHAR *VAR_3 = VAR_1->ptr++;
    WCHAR *VAR_4;
    int VAR_5;

    while(VAR_1->ptr < VAR_1->end && FUNC_0(*VAR_1->ptr))
        VAR_1->ptr++;
    VAR_5 = VAR_1->ptr-VAR_3;

    VAR_4 = FUNC_2(VAR_1, (VAR_5+1)*sizeof(WCHAR));
    if(!VAR_4)
        return 0;

    FUNC_1(VAR_4, VAR_3, (VAR_5+1)*sizeof(WCHAR));
    VAR_4[VAR_5] = 0;
    *VAR_2 = VAR_4;
    return VAR_0;
}
