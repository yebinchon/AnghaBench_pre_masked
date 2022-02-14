
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dispex; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
struct TYPE_10__ {int version; } ;
typedef TYPE_3__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef scalar_t__ HRESULT ;
typedef unsigned int DWORD ;
typedef int DISPID ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*,int **,unsigned int*) ;
 int * FUNC_6 (unsigned int,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int *) ;
 scalar_t__ FUNC_9 (int *,unsigned int,int ) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int *,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsdisp_t *VAR_8;
    WCHAR VAR_9[14], *VAR_10, *VAR_11;
    DWORD VAR_12, VAR_13;
    jsval_t VAR_14;
    DISPID VAR_15;
    HRESULT VAR_16;

    FUNC_4("\n");

    VAR_16 = FUNC_5(VAR_2, VAR_3, &VAR_8, &VAR_13);
    if(FUNC_1(VAR_16))
        return VAR_16;

    if(VAR_5) {
        VAR_10 = VAR_9 + FUNC_0(VAR_9)-1;
        *VAR_10-- = 0;
        VAR_12 = VAR_13;

        while(VAR_12--) {
            VAR_11 = FUNC_6(VAR_12, VAR_10);

            VAR_16 = FUNC_7(VAR_8, VAR_11, 0, &VAR_15);
            if(FUNC_3(VAR_16)) {
                VAR_16 = FUNC_8(VAR_8, VAR_15, &VAR_14);
                if(FUNC_1(VAR_16))
                    return VAR_16;

                VAR_16 = FUNC_9(VAR_8, VAR_12+VAR_5, VAR_14);
                FUNC_11(VAR_14);
            }else if(VAR_16 == VAR_0) {
                VAR_16 = FUNC_2(VAR_3->u.dispex, VAR_15);
            }
        }

        if(FUNC_1(VAR_16))
            return VAR_16;
    }

    for(VAR_12=0; VAR_12<VAR_5; VAR_12++) {
        VAR_16 = FUNC_9(VAR_8, VAR_12, VAR_6[VAR_12]);
        if(FUNC_1(VAR_16))
            return VAR_16;
    }

    if(VAR_5) {
        VAR_13 += VAR_5;
        VAR_16 = FUNC_13(VAR_8, VAR_13);
        if(FUNC_1(VAR_16))
            return VAR_16;
    }

    if(VAR_7)
        *VAR_7 = VAR_2->version < 2 ? FUNC_12() : FUNC_10(VAR_13);
    return VAR_1;
}
