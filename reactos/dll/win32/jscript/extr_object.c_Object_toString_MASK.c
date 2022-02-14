
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
struct TYPE_5__ {TYPE_1__* builtin_info; } ;
typedef TYPE_2__ jsdisp_t ;
typedef int WORD ;
typedef char WCHAR ;
struct TYPE_4__ {size_t class; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__,char**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,char const*) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    jsdisp_t *VAR_10;
    const WCHAR *VAR_11;

    static const WCHAR VAR_12[] = {'[','o','b','j','e','c','t',' ','%','s',']',0};

    static const WCHAR VAR_13[] = {'A','r','r','a','y',0};
    static const WCHAR VAR_14[] = {'B','o','o','l','e','a','n',0};
    static const WCHAR VAR_15[] = {'D','a','t','e',0};
    static const WCHAR VAR_16[] = {'E','r','r','o','r',0};
    static const WCHAR VAR_17[] = {'F','u','n','c','t','i','o','n',0};
    static const WCHAR VAR_18[] = {'M','a','t','h',0};
    static const WCHAR VAR_19[] = {'N','u','m','b','e','r',0};
    static const WCHAR VAR_20[] = {'O','b','j','e','c','t',0};
    static const WCHAR VAR_21[] = {'R','e','g','E','x','p',0};
    static const WCHAR VAR_22[] = {'S','t','r','i','n','g',0};

    static const WCHAR *VAR_23[] = {((void*)0), VAR_13, VAR_14, VAR_15, VAR_20, VAR_16,
        VAR_17, ((void*)0), VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_20, VAR_20, VAR_20};

    FUNC_1("\n");

    VAR_10 = FUNC_3(VAR_5);
    if(!VAR_10) {
        VAR_11 = VAR_20;
    }else if(VAR_23[VAR_10->builtin_info->class]) {
        VAR_11 = VAR_23[VAR_10->builtin_info->class];
    }else {
        FUNC_2(VAR_10->builtin_info->class != VAR_2);
        FUNC_0("jdisp->builtin_info->class = %d\n", VAR_10->builtin_info->class);
        return VAR_0;
    }

    if(VAR_9) {
        jsstr_t *VAR_24;
        WCHAR *VAR_25;

        VAR_24 = FUNC_4(9+FUNC_6(VAR_11), &VAR_25);
        if(!VAR_24)
            return VAR_1;

        FUNC_7(VAR_25, VAR_12, VAR_11);
        *VAR_9 = FUNC_5(VAR_24);
    }

    return VAR_3;
}
