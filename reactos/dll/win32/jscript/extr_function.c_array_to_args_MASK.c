
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int *,int ,int*) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_4, jsdisp_t *VAR_5, unsigned *VAR_6, jsval_t **VAR_7)
{
    jsval_t *VAR_8, VAR_9;
    DWORD VAR_10, VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_4(VAR_5, VAR_3, &VAR_9);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_12 = FUNC_7(VAR_4, VAR_9, &VAR_10);
    FUNC_5(VAR_9);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_8 = FUNC_1(VAR_10 * sizeof(*VAR_8));
    if(!VAR_8)
        return VAR_1;

    for(VAR_11=0; VAR_11<VAR_10; VAR_11++) {
        VAR_12 = FUNC_3(VAR_5, VAR_11, VAR_8+VAR_11);
        if(VAR_12 == VAR_0) {
            VAR_8[VAR_11] = FUNC_6();
        }else if(FUNC_0(VAR_12)) {
            while(VAR_11--)
                FUNC_5(VAR_8[VAR_11]);
            FUNC_2(VAR_8);
            return VAR_12;
        }
    }

    *VAR_6 = VAR_10;
    *VAR_7 = VAR_8;
    return VAR_2;
}
