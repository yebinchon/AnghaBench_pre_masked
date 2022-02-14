
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef scalar_t__ UINT ;
typedef int INT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int *,int **) ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_7, jsdisp_t *VAR_8,
        UINT VAR_9, jsstr_t *VAR_10, jsdisp_t **VAR_11)
{
    jsdisp_t *VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_2(VAR_7, ((void*)0), VAR_8, &VAR_12);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_13 = FUNC_3(VAR_12, VAR_6, VAR_2 | VAR_0,
                                       FUNC_5((INT)VAR_9));
    if(FUNC_0(VAR_13)) {
        FUNC_4(VAR_12);
        return VAR_13;
    }

    VAR_13 = FUNC_3(VAR_12, VAR_5,
                                       VAR_2 | VAR_1 | VAR_0,
                                       FUNC_6(VAR_10));
    if(FUNC_1(VAR_13))
        VAR_13 = FUNC_3(VAR_12, VAR_4, VAR_2 | VAR_0,
                                           FUNC_6(VAR_10));
    if(FUNC_0(VAR_13)) {
        FUNC_4(VAR_12);
        return VAR_13;
    }

    *VAR_11 = VAR_12;
    return VAR_3;
}
