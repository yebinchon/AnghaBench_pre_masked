
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int jsval_t ;
typedef int jsstr_t ;
struct TYPE_6__ {char* ptr; int end; int ctx; } ;
typedef TYPE_1__ json_parse_ctx_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int ,int *,int **) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (char) ;
 int FUNC_9 (int *,unsigned int,int ) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int VAR_6 ;
 int FUNC_19 (char**,int ,double*) ;
 int FUNC_20 (TYPE_1__*,int **) ;
 char FUNC_21 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_22(json_parse_ctx_t *VAR_8, jsval_t *VAR_9)
{
    HRESULT VAR_10;

    switch(FUNC_21(VAR_8)) {


    case 'n':
        if(!FUNC_7(VAR_8, VAR_6))
            break;
        *VAR_9 = FUNC_14();
        return VAR_3;


    case 't':
        if(!FUNC_7(VAR_8, VAR_7))
            break;
        *VAR_9 = FUNC_13(VAR_4);
        return VAR_3;
    case 'f':
        if(!FUNC_7(VAR_8, VAR_5))
            break;
        *VAR_9 = FUNC_13(VAR_2);
        return VAR_3;


    case '{': {
        WCHAR *VAR_11;
        jsdisp_t *VAR_12;
        jsval_t VAR_13;

        VAR_10 = FUNC_4(VAR_8->ctx, ((void*)0), &VAR_12);
        if(FUNC_0(VAR_10))
            return VAR_10;

        VAR_8->ptr++;
        if(FUNC_21(VAR_8) == '}') {
            VAR_8->ptr++;
            *VAR_9 = FUNC_16(VAR_12);
            return VAR_3;
        }

        while(1) {
            if(*VAR_8->ptr != '"')
                break;
            VAR_10 = FUNC_20(VAR_8, &VAR_11);
            if(FUNC_0(VAR_10))
                break;

            if(FUNC_21(VAR_8) != ':') {
                FUNC_1("missing ':'\n");
                FUNC_6(VAR_11);
                break;
            }

            VAR_8->ptr++;
            VAR_10 = FUNC_22(VAR_8, &VAR_13);
            if(FUNC_2(VAR_10)) {
                VAR_10 = FUNC_10(VAR_12, VAR_11, VAR_13);
                FUNC_17(VAR_13);
            }
            FUNC_6(VAR_11);
            if(FUNC_0(VAR_10))
                break;

            if(FUNC_21(VAR_8) == '}') {
                VAR_8->ptr++;
                *VAR_9 = FUNC_16(VAR_12);
                return VAR_3;
            }

            if(*VAR_8->ptr++ != ',') {
                FUNC_1("expected ','\n");
                break;
            }
            FUNC_21(VAR_8);
        }

        FUNC_11(VAR_12);
        break;
    }


    case '"': {
        WCHAR *VAR_14;
        jsstr_t *VAR_15;

        VAR_10 = FUNC_20(VAR_8, &VAR_14);
        if(FUNC_0(VAR_10))
            return VAR_10;


        VAR_15 = FUNC_12(VAR_14);
        FUNC_6(VAR_14);
        if(!VAR_15)
            return VAR_1;

        *VAR_9 = FUNC_18(VAR_15);
        return VAR_3;
    }


    case '[': {
        jsdisp_t *VAR_16;
        unsigned VAR_17 = 0;
        jsval_t VAR_18;

        VAR_10 = FUNC_3(VAR_8->ctx, 0, &VAR_16);
        if(FUNC_0(VAR_10))
            return VAR_10;

        VAR_8->ptr++;
        if(FUNC_21(VAR_8) == ']') {
            VAR_8->ptr++;
            *VAR_9 = FUNC_16(VAR_16);
            return VAR_3;
        }

        while(1) {
            VAR_10 = FUNC_22(VAR_8, &VAR_18);
            if(FUNC_0(VAR_10))
                break;

            VAR_10 = FUNC_9(VAR_16, VAR_17, VAR_18);
            FUNC_17(VAR_18);
            if(FUNC_0(VAR_10))
                break;

            if(FUNC_21(VAR_8) == ']') {
                VAR_8->ptr++;
                *VAR_9 = FUNC_16(VAR_16);
                return VAR_3;
            }

            if(*VAR_8->ptr != ',') {
                FUNC_1("expected ','\n");
                break;
            }

            VAR_8->ptr++;
            VAR_17++;
        }

        FUNC_11(VAR_16);
        break;
    }


    default: {
        int VAR_19 = 1;
        double VAR_20;

        if(*VAR_8->ptr == '-') {
            VAR_19 = -1;
            VAR_8->ptr++;
            FUNC_21(VAR_8);
        }

        if(*VAR_8->ptr == '0' && VAR_8->ptr + 1 < VAR_8->end && FUNC_8(VAR_8->ptr[1]))
            break;

        VAR_10 = FUNC_19(&VAR_8->ptr, VAR_8->end, &VAR_20);
        if(FUNC_0(VAR_10))
            break;

        *VAR_9 = FUNC_15(VAR_19*VAR_20);
        return VAR_3;
    }
    }

    FUNC_1("Syntax error at %s\n", FUNC_5(VAR_8->ptr));
    return VAR_0;
}
