
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int WCHAR ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int*) ;

__attribute__((used)) static HRESULT FUNC_12(vbdisp_t *VAR_5, VARIANT *VAR_6, unsigned VAR_7, VARIANT *VAR_8)
{
    VARIANT *VAR_9, *VAR_10, *VAR_11;
    BSTR VAR_12, VAR_13;
    int VAR_14, VAR_15;
    HRESULT VAR_16;

    FUNC_3("\n");

    FUNC_6(2 <= VAR_7 && VAR_7 <= 4);

    switch(VAR_7) {
    case 2:
        VAR_9 = ((void*)0);
        VAR_10 = VAR_6;
        VAR_11 = VAR_6+1;
        break;
    case 3:
        VAR_9 = VAR_6;
        VAR_10 = VAR_6+1;
        VAR_11 = VAR_6+2;
        break;
    case 4:
        FUNC_1("unsupported compare argument %s\n", FUNC_7(VAR_6));
        return VAR_2;
    VAR_0;
    }

    if(VAR_9) {
        VAR_16 = FUNC_11(VAR_9, &VAR_14);
        if(FUNC_0(VAR_16))
            return VAR_16;
        if(--VAR_14 < 0) {
            FUNC_1("start %d\n", VAR_14);
            return VAR_1;
        }
    }else {
        VAR_14 = 0;
    }

    if(FUNC_5(VAR_10) == VAR_4 || FUNC_5(VAR_11) == VAR_4)
        return FUNC_9(VAR_8);

    if(FUNC_5(VAR_10) != VAR_3) {
        FUNC_1("Unsupported str1 type %s\n", FUNC_7(VAR_10));
        return VAR_2;
    }
    VAR_12 = FUNC_4(VAR_10);

    if(FUNC_5(VAR_11) != VAR_3) {
        FUNC_1("Unsupported str2 type %s\n", FUNC_7(VAR_11));
        return VAR_2;
    }
    VAR_13 = FUNC_4(VAR_11);

    if(VAR_14 < FUNC_2(VAR_12)) {
        WCHAR *VAR_17;

        VAR_17 = FUNC_10(VAR_12+VAR_14, VAR_13);
        VAR_15 = VAR_17 ? VAR_17-VAR_12+1 : 0;
    }else {
        VAR_15 = 0;
    }

    return FUNC_8(VAR_8, VAR_15);
}
