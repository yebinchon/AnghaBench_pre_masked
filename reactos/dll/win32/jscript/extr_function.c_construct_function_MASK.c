
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int function_endW ;
typedef int function_beginW ;
typedef int function_anonymousW ;
struct TYPE_6__ {int func_cnt; int var_cnt; int funcs; } ;
struct TYPE_7__ {TYPE_1__ global_code; } ;
typedef TYPE_2__ bytecode_t ;
typedef float WCHAR ;
typedef int IDispatch ;
typedef int HRESULT ;


 int FUNC_0 (float const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,float*,int *,int *,int ,int ,TYPE_2__**) ;
 int FUNC_6 (int *,TYPE_2__*,int ,int *,int **) ;
 int FUNC_7 (float*) ;
 void* FUNC_8 (unsigned int) ;
 int FUNC_9 (float*) ;
 int FUNC_10 (int *,float*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (float*,float const*,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_17(script_ctx_t *VAR_4, unsigned VAR_5, jsval_t *VAR_6, IDispatch **VAR_7)
{
    WCHAR *VAR_8 = ((void*)0), *VAR_9;
    unsigned VAR_10 = 0, VAR_11 = 0;
    bytecode_t *VAR_12;
    jsdisp_t *VAR_13;
    jsstr_t **VAR_14 = ((void*)0);
    int VAR_15 = 0;
    HRESULT VAR_16 = VAR_3;

    static const WCHAR VAR_17[] = {'f','u','n','c','t','i','o','n',' ','a','n','o','n','y','m','o','u','s','('};
    static const WCHAR VAR_18[] = {')',' ','{','\n'};
    static const WCHAR VAR_19[] = {'\n','}',0};

    if(VAR_5) {
        VAR_14 = FUNC_8(VAR_5*sizeof(*VAR_14));
        if(!VAR_14)
            return VAR_0;

        if(VAR_5 > 2)
            VAR_10 = (VAR_5-2)*2;
        for(VAR_11=0; VAR_11 < VAR_5; VAR_11++) {
            VAR_16 = FUNC_16(VAR_4, VAR_6[VAR_11], VAR_14+VAR_11);
            if(FUNC_2(VAR_16))
                break;
            VAR_10 += FUNC_11(VAR_14[VAR_11]);
        }
    }

    if(FUNC_3(VAR_16)) {
        VAR_10 += FUNC_0(VAR_17) + FUNC_0(VAR_18) + FUNC_0(VAR_19);
        VAR_8 = FUNC_8(VAR_10*sizeof(WCHAR));
        if(VAR_8) {
            FUNC_13(VAR_8, VAR_17, sizeof(VAR_17));
            VAR_9 = VAR_8 + FUNC_0(VAR_17);
            if(VAR_5 > 1) {
                while(1) {
                    VAR_9 += FUNC_10(VAR_14[VAR_15], VAR_9);
                    if(++VAR_15 == VAR_5-1)
                        break;
                    *VAR_9++ = ',';
                    *VAR_9++ = ' ';
                }
            }
            FUNC_13(VAR_9, VAR_18, sizeof(VAR_18));
            VAR_9 += FUNC_0(VAR_18);
            if(VAR_5)
                VAR_9 += FUNC_10(VAR_14[VAR_5-1], VAR_9);
            FUNC_13(VAR_9, VAR_19, sizeof(VAR_19));

            FUNC_4("%s\n", FUNC_7(VAR_8));
        }else {
            VAR_16 = VAR_0;
        }
    }

    while(VAR_11)
        FUNC_12(VAR_14[--VAR_11]);
    FUNC_9(VAR_14);
    if(FUNC_2(VAR_16))
        return VAR_16;

    VAR_16 = FUNC_5(VAR_4, VAR_8, ((void*)0), ((void*)0), VAR_2, VAR_2, &VAR_12);
    FUNC_9(VAR_8);
    if(FUNC_2(VAR_16))
        return VAR_16;

    if(VAR_12->global_code.func_cnt != 1 || VAR_12->global_code.var_cnt != 1) {
        FUNC_1("Invalid parser result!\n");
        FUNC_14(VAR_12);
        return VAR_1;
    }

    VAR_16 = FUNC_6(VAR_4, VAR_12, VAR_12->global_code.funcs, ((void*)0), &VAR_13);
    FUNC_14(VAR_12);
    if(FUNC_2(VAR_16))
        return VAR_16;

    *VAR_7 = FUNC_15(VAR_13);
    return VAR_3;
}
