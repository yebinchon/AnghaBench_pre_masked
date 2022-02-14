
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,short) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_11(vbdisp_t *VAR_1, VARIANT *VAR_2, unsigned VAR_3, VARIANT *VAR_4)
{
    BSTR VAR_5, VAR_6;
    int VAR_7, VAR_8;
    HRESULT VAR_9;
    short VAR_10;

    FUNC_3("(%s %s ...)\n", FUNC_5(VAR_2), FUNC_5(VAR_2+1));

    FUNC_4(VAR_3 == 2 || VAR_3 == 3);

    if (VAR_3 == 3) {
        VAR_9 = FUNC_9(VAR_2+2, &VAR_7);
        if(FUNC_0(VAR_9))
            return VAR_9;

        if (VAR_7 != 0 && VAR_7 != 1) {
            FUNC_1("unknown compare mode = %d\n", VAR_7);
            return VAR_0;
        }
    }
    else
        VAR_7 = 0;

    VAR_9 = FUNC_10(VAR_2, &VAR_5);
    if(FUNC_0(VAR_9))
        return VAR_9;

    VAR_9 = FUNC_10(VAR_2+1, &VAR_6);
    if(FUNC_0(VAR_9))
    {
        FUNC_2(VAR_5);
        return VAR_9;
    }

    VAR_8 = VAR_7 ? FUNC_8(VAR_5, VAR_6) : FUNC_7(VAR_5, VAR_6);
    VAR_10 = VAR_8 < 0 ? -1 : (VAR_8 > 0 ? 1 : 0);

    FUNC_2(VAR_5);
    FUNC_2(VAR_6);
    return FUNC_6(VAR_4, VAR_10);
}
