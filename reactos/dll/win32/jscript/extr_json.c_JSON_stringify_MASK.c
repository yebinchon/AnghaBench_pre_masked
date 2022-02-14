
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char* gap; int stack; int buf; int buf_len; int stack_top; TYPE_1__ member_7; int member_6; int member_5; int * member_4; int member_3; int member_2; int * member_1; int * member_0; } ;
typedef TYPE_2__ stringify_ctx_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (double) ;
 double FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int ,size_t,char*) ;
 size_t FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (int *,int ,int *) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_21(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7, jsval_t *VAR_8)
{
    stringify_ctx_t VAR_9 = {VAR_3, ((void*)0),0,0, ((void*)0),0,0, 0};
    HRESULT VAR_10;

    FUNC_3("\n");

    if(!VAR_6) {
        if(VAR_8)
            *VAR_8 = FUNC_18();
        return VAR_2;
    }

    if(VAR_6 >= 2 && FUNC_11(VAR_7[1])) {
        FUNC_1("Replacer %s not yet supported\n", FUNC_5(VAR_7[1]));
        return VAR_0;
    }

    if(VAR_6 >= 3) {
        jsval_t VAR_11;

        VAR_10 = FUNC_19(VAR_3, VAR_7[2], &VAR_11);
        if(FUNC_0(VAR_10))
            return VAR_10;

        if(FUNC_10(VAR_11)) {
            double VAR_12 = FUNC_7(VAR_11);
            if(VAR_12 >= 1) {
                int VAR_13, VAR_14;
                if(VAR_12 > 10)
                    VAR_12 = 10;
                VAR_14 = FUNC_6(VAR_12);
                for(VAR_13=0; VAR_13 < VAR_14; VAR_13++)
                    VAR_9.gap[VAR_13] = ' ';
                VAR_9.gap[VAR_14] = 0;
            }
        }else if(FUNC_12(VAR_11)) {
            jsstr_t *VAR_15 = FUNC_8(VAR_11);
            size_t VAR_16 = FUNC_15(VAR_15);
            if(VAR_16 > 10)
                VAR_16 = 10;
            FUNC_14(VAR_15, 0, VAR_16, VAR_9.gap);
        }

        FUNC_16(VAR_11);
    }

    VAR_10 = FUNC_20(&VAR_9, VAR_7[0]);
    if(FUNC_2(VAR_10) && VAR_8) {
        FUNC_4(!VAR_9.stack_top);

        if(VAR_10 == VAR_2) {
            jsstr_t *VAR_17 = FUNC_13(VAR_9.buf, VAR_9.buf_len);
            if(VAR_17)
                *VAR_8 = FUNC_17(VAR_17);
            else
                VAR_10 = VAR_1;
        }else {
            *VAR_8 = FUNC_18();
        }
    }

    FUNC_9(VAR_9.buf);
    FUNC_9(VAR_9.stack);
    return VAR_10;
}
