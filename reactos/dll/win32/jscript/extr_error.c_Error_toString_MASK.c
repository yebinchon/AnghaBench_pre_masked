
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_4__ {int version; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int * FUNC_6 (char const*) ;
 int * FUNC_7 (unsigned int,char**) ;
 int FUNC_8 (int *,char*) ;
 unsigned int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (TYPE_1__*,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6,
        unsigned VAR_7, jsval_t *VAR_8, jsval_t *VAR_9)
{
    jsdisp_t *VAR_10;
    jsstr_t *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    jsval_t VAR_14;
    HRESULT VAR_15;

    static const WCHAR VAR_16[] = {'[','o','b','j','e','c','t',' ','E','r','r','o','r',']',0};

    FUNC_2("\n");

    VAR_10 = FUNC_3(VAR_5);
    if(!VAR_10 || VAR_4->version < 2) {
        if(VAR_9) {
            jsstr_t *VAR_17;

            VAR_17 = FUNC_6(VAR_16);
            if(!VAR_17)
                return VAR_0;
            *VAR_9 = FUNC_12(VAR_17);
        }
        return VAR_1;
    }

    VAR_15 = FUNC_5(VAR_10, VAR_3, &VAR_14);
    if(FUNC_0(VAR_15))
        return VAR_15;

    if(!FUNC_4(VAR_14)) {
        VAR_15 = FUNC_13(VAR_4, VAR_14, &VAR_11);
        FUNC_11(VAR_14);
        if(FUNC_0(VAR_15))
            return VAR_15;
    }

    VAR_15 = FUNC_5(VAR_10, VAR_2, &VAR_14);
    if(FUNC_1(VAR_15)) {
        if(!FUNC_4(VAR_14)) {
            VAR_15 = FUNC_13(VAR_4, VAR_14, &VAR_12);
            FUNC_11(VAR_14);
        }
    }

    if(FUNC_1(VAR_15)) {
        unsigned VAR_18 = VAR_11 ? FUNC_9(VAR_11) : 0;
        unsigned VAR_19 = VAR_12 ? FUNC_9(VAR_12) : 0;

        if(VAR_18 && VAR_19) {
            WCHAR *VAR_20;

            VAR_13 = FUNC_7(VAR_18 + VAR_19 + 2, &VAR_20);
            if(VAR_13) {
                FUNC_8(VAR_11, VAR_20);
                VAR_20[VAR_18] = ':';
                VAR_20[VAR_18+1] = ' ';
                FUNC_8(VAR_12, VAR_20+VAR_18+2);
            }else {
                VAR_15 = VAR_0;
            }
        }else if(VAR_18) {
            VAR_13 = VAR_11;
            VAR_11 = ((void*)0);
        }else if(VAR_19) {
            VAR_13 = VAR_12;
            VAR_12 = ((void*)0);
        }else {
            VAR_13 = FUNC_6(VAR_16);
        }
    }

    if(VAR_12)
        FUNC_10(VAR_12);
    if(VAR_11)
        FUNC_10(VAR_11);
    if(FUNC_0(VAR_15))
        return VAR_15;
    if(!VAR_13)
        return VAR_0;

    if(VAR_9)
        *VAR_9 = FUNC_12(VAR_13);
    else
        FUNC_10(VAR_13);
    return VAR_1;
}
