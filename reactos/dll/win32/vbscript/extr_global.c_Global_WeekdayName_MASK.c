
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int,int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int*) ;

__attribute__((used)) static HRESULT FUNC_6(vbdisp_t *VAR_0, VARIANT *VAR_1, unsigned VAR_2, VARIANT *VAR_3)
{
    int VAR_4, VAR_5 = 1, VAR_6 = 0;
    BSTR VAR_7;
    HRESULT VAR_8;

    FUNC_1("\n");

    FUNC_3(1 <= VAR_2 && VAR_2 <= 3);

    VAR_8 = FUNC_5(VAR_1, &VAR_4);
    if(FUNC_0(VAR_8))
        return VAR_8;

    if(VAR_2 > 1) {
        VAR_8 = FUNC_5(VAR_1+1, &VAR_6);
        if(FUNC_0(VAR_8))
            return VAR_8;

        if(VAR_2 == 3) {
            VAR_8 = FUNC_5(VAR_1+2, &VAR_5);
            if(FUNC_0(VAR_8))
                return VAR_8;
        }
    }

    VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_5, 0, &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    return FUNC_4(VAR_3, VAR_7);
}
