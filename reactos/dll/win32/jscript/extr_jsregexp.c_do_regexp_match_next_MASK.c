
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int last_match_index; int last_match_length; TYPE_8__* match_parens; int * last_match; int tmp_heap; } ;
typedef TYPE_2__ script_ctx_t ;
struct TYPE_15__ {int match_len; int const* cp; TYPE_1__* parens; int paren_count; } ;
typedef TYPE_3__ match_state_t ;
typedef int jsstr_t ;
typedef int WCHAR ;
struct TYPE_17__ {int index; scalar_t__ length; } ;
struct TYPE_16__ {int jsregexp; } ;
struct TYPE_13__ {int index; scalar_t__ length; } ;
typedef TYPE_4__ RegExpInstance ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int FUNC_0 (TYPE_8__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*,int *,int const*,int ,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,int) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_4, RegExpInstance *VAR_5,
        DWORD VAR_6, jsstr_t *VAR_7, const WCHAR *VAR_8, match_state_t *VAR_9)
{
    HRESULT VAR_10;

    VAR_10 = FUNC_7(VAR_5->jsregexp, VAR_4, &VAR_4->tmp_heap,
            VAR_8, FUNC_3(VAR_7), VAR_9);
    if(FUNC_1(VAR_10))
        return VAR_10;
    if(VAR_10 == VAR_2) {
        if(VAR_6 & VAR_1)
            FUNC_8(VAR_5, 0);
        return VAR_2;
    }

    if(!(VAR_6 & VAR_0) && VAR_4->last_match != VAR_7) {
        FUNC_4(VAR_4->last_match);
        VAR_4->last_match = FUNC_2(VAR_7);
    }

    if(!(VAR_6 & VAR_0)) {
        DWORD VAR_11, VAR_12 = FUNC_6(FUNC_0(VAR_4->match_parens), VAR_9->paren_count);

        for(VAR_11=0; VAR_11 < VAR_12; VAR_11++) {
            if(VAR_9->parens[VAR_11].index == -1) {
                VAR_4->match_parens[VAR_11].index = 0;
                VAR_4->match_parens[VAR_11].length = 0;
            }else {
                VAR_4->match_parens[VAR_11].index = VAR_9->parens[VAR_11].index;
                VAR_4->match_parens[VAR_11].length = VAR_9->parens[VAR_11].length;
            }
        }

        if(VAR_12 < FUNC_0(VAR_4->match_parens))
            FUNC_5(VAR_4->match_parens+VAR_12, 0, sizeof(VAR_4->match_parens) - VAR_12*sizeof(VAR_4->match_parens[0]));
    }

    FUNC_8(VAR_5, VAR_9->cp-VAR_8);

    if(!(VAR_6 & VAR_0)) {
        VAR_4->last_match_index = VAR_9->cp-VAR_8-VAR_9->match_len;
        VAR_4->last_match_length = VAR_9->match_len;
    }

    return VAR_3;
}
