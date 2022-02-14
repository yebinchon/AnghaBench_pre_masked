
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int WCHAR ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int const* BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (char*,int ,int ,unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int const*,int const*,size_t) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int *,int const**) ;

__attribute__((used)) static HRESULT FUNC_14(vbdisp_t *VAR_3, VARIANT *VAR_4, unsigned VAR_5, VARIANT *VAR_6)
{
    int VAR_7, VAR_8 = 0;
    BSTR VAR_9, VAR_10;
    HRESULT VAR_11;

    FUNC_6("%s %s arg_cnt=%u\n", FUNC_9(VAR_4), FUNC_9(VAR_4+1), VAR_5);

    if(VAR_5 > 3) {
        FUNC_1("Unsupported args\n");
        return VAR_0;
    }

    FUNC_8(2 <= VAR_5 && VAR_5 <= 4);

    if(FUNC_7(VAR_4) == VAR_2 || FUNC_7(VAR_4+1) == VAR_2 || (VAR_5 > 2 && FUNC_7(VAR_4+2) == VAR_2))
        return FUNC_2(VAR_1);

    VAR_11 = FUNC_13(VAR_4, &VAR_9);
    if(FUNC_0(VAR_11))
        return VAR_11;

    VAR_11 = FUNC_13(VAR_4+1, &VAR_10);
    if(FUNC_3(VAR_11)) {
        if(VAR_5 > 2) {
            VAR_11 = FUNC_12(VAR_4+2, &VAR_7);
            if(FUNC_3(VAR_11) && VAR_7 <= 0) {
                FUNC_1("Unsupported start %d\n", VAR_7);
                VAR_11 = VAR_0;
            }
        }else {
            VAR_7 = FUNC_5(VAR_9);
        }
    } else {
        VAR_10 = ((void*)0);
    }

    if(FUNC_3(VAR_11)) {
        const WCHAR *VAR_12;
        size_t VAR_13;

        VAR_13 = FUNC_5(VAR_10);
        if(VAR_7 >= VAR_13 && VAR_7 <= FUNC_5(VAR_9)) {
            for(VAR_12 = VAR_9+VAR_7-FUNC_5(VAR_10); VAR_12 >= VAR_9; VAR_12--) {
                if(!FUNC_10(VAR_12, VAR_10, VAR_13*sizeof(WCHAR))) {
                    VAR_8 = VAR_12-VAR_9+1;
                    break;
                }
            }
        }
    }

    FUNC_4(VAR_9);
    FUNC_4(VAR_10);
    if(FUNC_0(VAR_11))
        return VAR_11;

    return FUNC_11(VAR_6, VAR_8);
}
