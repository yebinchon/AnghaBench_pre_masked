
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_5__ {size_t paren_count; char const* cp; int match_len; TYPE_1__* parens; } ;
typedef TYPE_2__ match_state_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef char WCHAR ;
struct TYPE_4__ {int index; int length; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef size_t DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,size_t,int **) ;
 int FUNC_3 (int *,size_t,int ) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (char const*,int) ;
 int * FUNC_8 () ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;

__attribute__((used)) static HRESULT FUNC_15(script_ctx_t *VAR_2, jsstr_t *VAR_3,
        const match_state_t *VAR_4, IDispatch **VAR_5)
{
    const WCHAR *VAR_6;
    jsdisp_t *VAR_7;
    jsstr_t *VAR_8;
    DWORD VAR_9;
    HRESULT VAR_10 = VAR_1;

    static const WCHAR VAR_11[] = {'i','n','d','e','x',0};
    static const WCHAR VAR_12[] = {'i','n','p','u','t',0};
    static const WCHAR VAR_13[] = {'l','a','s','t','I','n','d','e','x',0};
    static const WCHAR VAR_14[] = {'0',0};

    VAR_6 = FUNC_9(VAR_3);
    if(!VAR_6)
        return VAR_0;

    VAR_10 = FUNC_2(VAR_2, VAR_4->paren_count+1, &VAR_7);
    if(FUNC_0(VAR_10))
        return VAR_10;

    for(VAR_9=0; VAR_9 < VAR_4->paren_count; VAR_9++) {
        if(VAR_4->parens[VAR_9].index != -1)
            VAR_8 = FUNC_11(VAR_3, VAR_4->parens[VAR_9].index, VAR_4->parens[VAR_9].length);
        else
            VAR_8 = FUNC_8();
        if(!VAR_8) {
            VAR_10 = VAR_0;
            break;
        }

        VAR_10 = FUNC_3(VAR_7, VAR_9+1, FUNC_13(VAR_8));
        FUNC_10(VAR_8);
        if(FUNC_0(VAR_10))
            break;
    }

    while(FUNC_1(VAR_10)) {
        VAR_10 = FUNC_4(VAR_7, VAR_11, FUNC_12(VAR_4->cp-VAR_6-VAR_4->match_len));
        if(FUNC_0(VAR_10))
            break;

        VAR_10 = FUNC_4(VAR_7, VAR_13, FUNC_12(VAR_4->cp-VAR_6));
        if(FUNC_0(VAR_10))
            break;

        VAR_10 = FUNC_4(VAR_7, VAR_12, FUNC_13(FUNC_6(VAR_3)));
        if(FUNC_0(VAR_10))
            break;

        VAR_8 = FUNC_7(VAR_4->cp-VAR_4->match_len, VAR_4->match_len);
        if(!VAR_8) {
            VAR_10 = VAR_0;
            break;
        }
        VAR_10 = FUNC_4(VAR_7, VAR_14, FUNC_13(VAR_8));
        FUNC_10(VAR_8);
        break;
    }

    if(FUNC_0(VAR_10)) {
        FUNC_5(VAR_7);
        return VAR_10;
    }

    *VAR_5 = FUNC_14(VAR_7);
    return VAR_1;
}
