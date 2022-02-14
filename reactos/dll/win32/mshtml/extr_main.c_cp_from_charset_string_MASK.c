
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int uiInternetEncoding; } ;
typedef TYPE_1__ MIMECSETINFO ;
typedef int IMultiLanguage2 ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (void**,int *,int *) ;
 int VAR_4 ;

UINT FUNC_7(BSTR VAR_5)
{
    MIMECSETINFO VAR_6;
    HRESULT VAR_7;

    if(!VAR_4) {
        IMultiLanguage2 *VAR_8;

        VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                &VAR_3, (void**)&VAR_8);
        if(FUNC_2(VAR_7)) {
            FUNC_1("Could not create CMultiLanguage instance\n");
            return VAR_2;
        }

        if(FUNC_6((void**)&VAR_4, VAR_8, ((void*)0)))
            FUNC_5(VAR_8);
    }

    VAR_7 = FUNC_4(VAR_4, VAR_5, &VAR_6);
    if(FUNC_2(VAR_7)) {
        FUNC_3("GetCharsetInfo failed: %08x\n", VAR_7);
        return VAR_2;
    }

    return VAR_6.uiInternetEncoding;
}
