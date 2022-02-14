
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* ptr; scalar_t__* end; int compiler; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef int jsstr_t ;
typedef scalar_t__ WCHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,scalar_t__ const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,size_t) ;
 scalar_t__* FUNC_4 (TYPE_1__*,size_t) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__*,size_t*) ;

__attribute__((used)) static int FUNC_6(parser_ctx_t *VAR_6, jsstr_t **VAR_7, WCHAR VAR_8)
{
    const WCHAR *VAR_9 = ++VAR_6->ptr, *VAR_10 = VAR_9;
    BOOL VAR_11 = VAR_2;
    WCHAR *VAR_12;
    size_t VAR_13;

    while(VAR_6->ptr < VAR_6->end && *VAR_6->ptr != VAR_8) {
        if(*VAR_6->ptr++ == '\\') {
            VAR_6->ptr++;
            VAR_11 = VAR_4;
        }
    }

    if(VAR_6->ptr == VAR_6->end)
        return FUNC_2(VAR_6, VAR_3);

    VAR_13 = VAR_6->ptr - VAR_9;
    VAR_6->ptr++;

    if(VAR_11) {
        VAR_10 = VAR_12 = FUNC_4(VAR_6, VAR_13 * sizeof(WCHAR));
        if(!VAR_12)
            return FUNC_2(VAR_6, VAR_1);
        FUNC_3(VAR_12, VAR_9, VAR_13 * sizeof(WCHAR));
        if(!FUNC_5(VAR_12, &VAR_13)) {
            FUNC_0("unescape failed\n");
            return FUNC_2(VAR_6, VAR_0);
        }
    }

    if(!(*VAR_7 = FUNC_1(VAR_6->compiler, VAR_10, VAR_13)))
        return FUNC_2(VAR_6, VAR_1);


    return VAR_5;
}
