
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int *,int **) ;

__attribute__((used)) static HRESULT FUNC_12(vbdisp_t *VAR_3, VARIANT *VAR_4, unsigned VAR_5, VARIANT *VAR_6)
{
    BSTR VAR_7, VAR_8, VAR_9 = ((void*)0);
    int VAR_10, VAR_11;
    HRESULT VAR_12;

    FUNC_5("(%s %s)\n", FUNC_8(VAR_4+1), FUNC_8(VAR_4));

    if(FUNC_7(VAR_4) == VAR_2) {
        VAR_7 = FUNC_6(VAR_4);
    }else {
        VAR_12 = FUNC_11(VAR_4, &VAR_9);
        if(FUNC_0(VAR_12))
            return VAR_12;
        VAR_7 = VAR_9;
    }

    VAR_12 = FUNC_10(VAR_4+1, &VAR_10);
    if(FUNC_0(VAR_12))
        return VAR_12;

    if(VAR_10 < 0) {
        FUNC_1("len = %d\n", VAR_10);
        return VAR_0;
    }

    VAR_11 = FUNC_4(VAR_7);
    if(VAR_10 > VAR_11)
        VAR_10 = VAR_11;

    VAR_8 = FUNC_2(VAR_7, VAR_10);
    FUNC_3(VAR_9);
    if(!VAR_8)
        return VAR_1;

    return FUNC_9(VAR_6, VAR_8);
}
