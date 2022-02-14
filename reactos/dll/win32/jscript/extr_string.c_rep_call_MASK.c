
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_5__ {int paren_count; int match_len; int const* cp; TYPE_1__* parens; } ;
typedef TYPE_2__ match_state_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
struct TYPE_4__ {int index; int length; } ;
typedef int HRESULT ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,unsigned int,int *,int *) ;
 int * FUNC_6 (int const*,int) ;
 int * FUNC_7 () ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_3, jsdisp_t *VAR_4,
        jsstr_t *VAR_5, const WCHAR *VAR_6, match_state_t *VAR_7, jsstr_t **VAR_8)
{
    jsval_t *VAR_9;
    unsigned VAR_10;
    jsval_t VAR_11;
    jsstr_t *VAR_12;
    DWORD VAR_13;
    HRESULT VAR_14 = VAR_2;

    VAR_10 = VAR_7->paren_count+3;
    VAR_9 = FUNC_3(sizeof(*VAR_9)*VAR_10);
    if(!VAR_9)
        return VAR_1;

    VAR_12 = FUNC_6(VAR_7->cp-VAR_7->match_len, VAR_7->match_len);
    if(!VAR_12)
        VAR_14 = VAR_1;
    VAR_9[0] = FUNC_12(VAR_12);

    if(FUNC_1(VAR_14)) {
        for(VAR_13=0; VAR_13 < VAR_7->paren_count; VAR_13++) {
            if(VAR_7->parens[VAR_13].index != -1)
                VAR_12 = FUNC_9(VAR_5, VAR_7->parens[VAR_13].index, VAR_7->parens[VAR_13].length);
            else
                VAR_12 = FUNC_7();
            if(!VAR_12) {
               VAR_14 = VAR_1;
               break;
            }
            VAR_9[VAR_13+1] = FUNC_12(VAR_12);
        }
    }

    if(FUNC_1(VAR_14)) {
        VAR_9[VAR_7->paren_count+1] = FUNC_10(VAR_7->cp-VAR_6 - VAR_7->match_len);
        VAR_9[VAR_7->paren_count+2] = FUNC_12(VAR_5);
    }

    if(FUNC_1(VAR_14))
        VAR_14 = FUNC_5(VAR_4, ((void*)0), VAR_0, VAR_10, VAR_9, &VAR_11);

    for(VAR_13=0; VAR_13 <= VAR_7->paren_count; VAR_13++)
        FUNC_8(FUNC_2(VAR_9[VAR_13]));
    FUNC_4(VAR_9);

    if(FUNC_0(VAR_14))
        return VAR_14;

    VAR_14 = FUNC_13(VAR_3, VAR_11, VAR_8);
    FUNC_11(VAR_11);
    return VAR_14;
}
