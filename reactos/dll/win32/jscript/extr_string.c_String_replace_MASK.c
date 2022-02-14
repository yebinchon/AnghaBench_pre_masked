
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_17__ {TYPE_4__* buf; int len; int member_2; int member_1; int * member_0; } ;
typedef TYPE_2__ strbuf_t ;
struct TYPE_18__ {int last_match_index; int last_match_length; int * last_match; } ;
typedef TYPE_3__ script_ctx_t ;
struct TYPE_19__ {int const* cp; int match_len; int paren_count; TYPE_1__* parens; int member_0; } ;
typedef TYPE_4__ match_state_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_16__ {int index; int length; } ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int *,int **,int const**) ;
 int FUNC_7 (TYPE_4__*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (TYPE_4__*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (TYPE_3__*,int *,int,int *,TYPE_4__**) ;
 scalar_t__ FUNC_19 (TYPE_3__*,int *,int *,int const*,TYPE_4__*,int **) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int const*,...) ;
 scalar_t__ FUNC_21 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_22 (TYPE_3__*,int ,int **,int const**) ;
 int* FUNC_23 (int const*,char) ;
 int const* FUNC_24 (int const*,int const*) ;

__attribute__((used)) static HRESULT FUNC_25(script_ctx_t *VAR_8, vdisp_t *VAR_9, WORD VAR_10, unsigned VAR_11, jsval_t *VAR_12,
        jsval_t *VAR_13)
{
    const WCHAR *VAR_14, *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    jsstr_t *VAR_17, *VAR_18, *VAR_19;
    jsdisp_t *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
    match_state_t *VAR_22 = ((void*)0), VAR_23 = {0};
    strbuf_t VAR_24 = {((void*)0),0,0};
    DWORD VAR_25 = VAR_5|VAR_3;
    DWORD VAR_26=0;
    HRESULT VAR_27 = VAR_7;

    FUNC_3("\n");

    VAR_27 = FUNC_6(VAR_8, VAR_9, &VAR_19, &VAR_14);
    if(FUNC_1(VAR_27))
        return VAR_27;

    if(!VAR_11) {
        if(VAR_13)
            *VAR_13 = FUNC_17(VAR_19);
        else
            FUNC_16(VAR_19);
        return VAR_7;
    }

    if(FUNC_10(VAR_12[0])) {
        VAR_21 = FUNC_8(FUNC_5(VAR_12[0]));
        if(VAR_21 && !FUNC_9(VAR_21, VAR_2)) {
            FUNC_12(VAR_21);
            VAR_21 = ((void*)0);
        }
    }

    if(!VAR_21) {
        VAR_27 = FUNC_22(VAR_8, VAR_12[0], &VAR_18, &VAR_15);
        if(FUNC_1(VAR_27)) {
            FUNC_16(VAR_19);
            return VAR_27;
        }
    }

    if(VAR_11 >= 2) {
        if(FUNC_10(VAR_12[1])) {
            VAR_20 = FUNC_8(FUNC_5(VAR_12[1]));
            if(VAR_20 && !FUNC_9(VAR_20, VAR_1)) {
                FUNC_12(VAR_20);
                VAR_20 = ((void*)0);
            }
        }

        if(!VAR_20) {
            VAR_27 = FUNC_22(VAR_8, VAR_12[1], &VAR_17, &VAR_16);
            if(FUNC_2(VAR_27))
                VAR_26 = FUNC_15(VAR_17);
        }
    }

    if(FUNC_2(VAR_27)) {
        const WCHAR *VAR_28 = VAR_14;

        while(1) {
            if(VAR_21) {
                VAR_27 = FUNC_18(VAR_8, VAR_21, VAR_25, VAR_19, &VAR_22);
                VAR_25 = (VAR_25 | VAR_4) & (~VAR_3);

                if(VAR_27 == VAR_6) {
                    VAR_27 = VAR_7;
                    break;
                }
                if(FUNC_1(VAR_27))
                    break;

                VAR_23.cp = VAR_22->cp;
                VAR_23.match_len = VAR_22->match_len;
            }else {
                if(VAR_25 & VAR_3) {
                    VAR_25 &= ~VAR_3;
                    VAR_22 = &VAR_23;
                    VAR_22->cp = VAR_14;
                }

                VAR_22->cp = FUNC_24(VAR_22->cp, VAR_15);
                if(!VAR_22->cp)
                    break;
                VAR_22->match_len = FUNC_15(VAR_18);
                VAR_22->cp += VAR_22->match_len;
            }

            VAR_27 = FUNC_20(&VAR_24, VAR_28, VAR_22->cp-VAR_28-VAR_22->match_len);
            VAR_28 = VAR_22->cp;
            if(FUNC_1(VAR_27))
                break;

            if(VAR_20) {
                jsstr_t *VAR_29;

                VAR_27 = FUNC_19(VAR_8, VAR_20, VAR_19, VAR_14, VAR_22, &VAR_29);
                if(FUNC_1(VAR_27))
                    break;

                VAR_27 = FUNC_21(&VAR_24, VAR_29);
                FUNC_16(VAR_29);
                if(FUNC_1(VAR_27))
                    break;
            }else if(VAR_16 && VAR_21) {
                const WCHAR *VAR_30 = VAR_16, *VAR_31;

                while((VAR_31 = FUNC_23(VAR_30, '$'))) {
                    VAR_27 = FUNC_20(&VAR_24, VAR_30, VAR_31-VAR_30);
                    if(FUNC_1(VAR_27))
                        break;

                    switch(VAR_31[1]) {
                    case '$':
                        VAR_27 = FUNC_20(&VAR_24, VAR_31, 1);
                        VAR_30 = VAR_31+2;
                        break;
                    case '&':
                        VAR_27 = FUNC_20(&VAR_24, VAR_22->cp-VAR_22->match_len, VAR_22->match_len);
                        VAR_30 = VAR_31+2;
                        break;
                    case '`':
                        VAR_27 = FUNC_20(&VAR_24, VAR_14, VAR_22->cp-VAR_14-VAR_22->match_len);
                        VAR_30 = VAR_31+2;
                        break;
                    case '\'':
                        VAR_27 = FUNC_20(&VAR_24, VAR_28, (VAR_14+FUNC_15(VAR_19))-VAR_28);
                        VAR_30 = VAR_31+2;
                        break;
                    default: {
                        DWORD VAR_32;

                        if(!FUNC_11(VAR_31[1])) {
                            VAR_27 = FUNC_20(&VAR_24, VAR_31, 1);
                            VAR_30 = VAR_31+1;
                            break;
                        }

                        VAR_32 = VAR_31[1] - '0';
                        if(FUNC_11(VAR_31[2]) && VAR_32*10 + (VAR_31[2]-'0') <= VAR_22->paren_count) {
                            VAR_32 = VAR_32*10 + (VAR_30[2]-'0');
                            VAR_30 = VAR_31+3;
                        }else if(VAR_32 && VAR_32 <= VAR_22->paren_count) {
                            VAR_30 = VAR_31+2;
                        }else {
                            VAR_27 = FUNC_20(&VAR_24, VAR_31, 1);
                            VAR_30 = VAR_31+1;
                            break;
                        }

                        if(VAR_22->parens[VAR_32-1].index != -1)
                            VAR_27 = FUNC_20(&VAR_24, VAR_14+VAR_22->parens[VAR_32-1].index,
                                    VAR_22->parens[VAR_32-1].length);
                    }
                    }

                    if(FUNC_1(VAR_27))
                        break;
                }

                if(FUNC_2(VAR_27))
                    VAR_27 = FUNC_20(&VAR_24, VAR_30, (VAR_16+VAR_26)-VAR_30);
                if(FUNC_1(VAR_27))
                    break;
            }else if(VAR_16) {
                VAR_27 = FUNC_20(&VAR_24, VAR_16, VAR_26);
                if(FUNC_1(VAR_27))
                    break;
            }else {
                static const WCHAR VAR_33[] = {'u','n','d','e','f','i','n','e','d'};

                VAR_27 = FUNC_20(&VAR_24, VAR_33, FUNC_0(VAR_33));
                if(FUNC_1(VAR_27))
                    break;
            }

            if(!VAR_21)
                break;
            else if(!VAR_22->match_len)
                VAR_22->cp++;
        }

        if(FUNC_2(VAR_27))
            VAR_27 = FUNC_20(&VAR_24, VAR_28, VAR_14+FUNC_15(VAR_19)-VAR_28);
    }

    if(VAR_20)
        FUNC_12(VAR_20);
    if(VAR_16)
        FUNC_16(VAR_17);
    if(VAR_15)
        FUNC_16(VAR_18);
    if(VAR_21)
        FUNC_7(VAR_22);

    if(FUNC_2(VAR_27) && VAR_23.cp && VAR_21) {
        FUNC_16(VAR_8->last_match);
        VAR_8->last_match = FUNC_13(VAR_19);
        VAR_8->last_match_index = VAR_23.cp-VAR_14-VAR_23.match_len;
        VAR_8->last_match_length = VAR_23.match_len;
    }

    if(VAR_21)
        FUNC_12(VAR_21);
    FUNC_16(VAR_19);

    if(FUNC_2(VAR_27) && VAR_13) {
        jsstr_t *VAR_34;

        VAR_34 = FUNC_14(VAR_24.buf, VAR_24.len);
        if(!VAR_34)
            return VAR_0;

        FUNC_3("= %s\n", FUNC_4(VAR_34));
        *VAR_13 = FUNC_17(VAR_34);
    }

    FUNC_7(VAR_24.buf);
    return VAR_27;
}
