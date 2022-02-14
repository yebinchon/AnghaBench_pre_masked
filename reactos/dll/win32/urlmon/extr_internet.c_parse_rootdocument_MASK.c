
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int url_info ;
typedef int WCHAR ;
struct TYPE_3__ {int cbSize; int nScheme; int cchSuffix; char* pszSuffix; scalar_t__ cchProtocol; } ;
typedef TYPE_1__ PARSEDURLW ;
typedef scalar_t__ LPWSTR ;
typedef int LPCWSTR ;
typedef int IInternetProtocolInfo ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 int VAR_4 ;



 int FUNC_6 (int ,scalar_t__,scalar_t__*,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int ,int) ;

__attribute__((used)) static HRESULT FUNC_10(LPCWSTR VAR_5, DWORD VAR_6, LPWSTR VAR_7,
        DWORD VAR_8, DWORD *VAR_9)
{
    IInternetProtocolInfo *VAR_10;
    PARSEDURLW VAR_11;
    HRESULT VAR_12;

    FUNC_5("(%s %08x %p %d %p)\n", FUNC_7(VAR_5), VAR_6, VAR_7, VAR_8, VAR_9);

    VAR_10 = FUNC_8(VAR_5);

    if(VAR_10) {
        VAR_12 = FUNC_1(VAR_10, VAR_5, VAR_2,
                VAR_6, VAR_7, VAR_8, VAR_9, 0);
        FUNC_2(VAR_10);
        if(FUNC_4(VAR_12))
            return VAR_12;
    }

    VAR_11.cbSize = sizeof(VAR_11);
    if(FUNC_0(FUNC_3(VAR_5, &VAR_11)))
        return VAR_0;

    switch(VAR_11.nScheme) {
        case 130:
        case 129:
        case 128:
            if(VAR_11.cchSuffix<3 || *(VAR_11.pszSuffix)!='/'
                    || *(VAR_11.pszSuffix+1)!='/')
                return VAR_0;

            if(VAR_8 < VAR_11.cchProtocol+3) {
                VAR_8 = 0;
                VAR_12 = FUNC_6(VAR_5, VAR_7, &VAR_8, VAR_4, VAR_6);

                if(VAR_9)
                    *VAR_9 = VAR_8+VAR_11.cchProtocol+3;

                if(VAR_12 == VAR_1)
                    return VAR_3;

                return VAR_12;
            }

            VAR_8 -= VAR_11.cchProtocol+3;
            VAR_12 = FUNC_6(VAR_5, VAR_7+VAR_11.cchProtocol+3,
                    &VAR_8, VAR_4, VAR_6);

            if(VAR_12 == VAR_1)
                return VAR_3;

            if(FUNC_0(VAR_12))
                return VAR_0;

            if(VAR_9)
                *VAR_9 = VAR_8+VAR_11.cchProtocol+3;

            FUNC_9(VAR_7, VAR_5, (VAR_11.cchProtocol+3)*sizeof(WCHAR));
            return VAR_12;
        default:
            return VAR_0;
    }
}
