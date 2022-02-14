
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int IUri ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef char* BSTR ;


 int FUNC_0 (char*) ;







 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,char**) ;
 scalar_t__ FUNC_5 (int *,char**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int *,scalar_t__*) ;
 scalar_t__ FUNC_8 (char*,scalar_t__*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static HRESULT FUNC_13(IUri *VAR_6, DWORD *VAR_7)
{
    HRESULT VAR_8;
    BSTR VAR_9;

    *VAR_7 = VAR_3;

    VAR_8 = FUNC_5(VAR_6, &VAR_9);
    if(FUNC_1(VAR_8))
        return VAR_8;

    if(!FUNC_12(VAR_9, VAR_5)) {
        BSTR VAR_10;
        WCHAR *VAR_11, *VAR_12, VAR_13[20];

        VAR_8 = FUNC_4(VAR_6, &VAR_10);
        if(FUNC_1(VAR_8)) {
            FUNC_6(VAR_9);
            return VAR_8;
        }

        if(*VAR_10 == '/' && FUNC_9(VAR_10+1))
            VAR_12 = VAR_10+1;
        else
            VAR_12 = VAR_10;

        if((VAR_11 = FUNC_11(VAR_12, ':')) && VAR_11-VAR_12+1 < FUNC_0(VAR_13)) {
            UINT VAR_14;

            FUNC_10(VAR_13, VAR_12, (VAR_11-VAR_12+1)*sizeof(WCHAR));
            VAR_13[VAR_11-VAR_12+1] = 0;

            VAR_14 = FUNC_3(VAR_13);

            switch(VAR_14) {
            case 128:
            case 132:
                break;
            case 129:
            case 133:
            case 134:
            case 131:
                *VAR_7 = VAR_4;
                VAR_8 = VAR_1;
                break;
            case 130:
                *VAR_7 = VAR_2;
                VAR_8 = VAR_1;
                break;
            default:
                FUNC_2("unsupported drive type %d\n", VAR_14);
            }
        }
        FUNC_6(VAR_10);
    }

    if(*VAR_7 == VAR_3) {
        VAR_8 = FUNC_7(VAR_6, VAR_7);
        if(VAR_8 == VAR_0)
            VAR_8 = FUNC_8(VAR_9, VAR_7);
    }

    FUNC_6(VAR_9);
    return VAR_8;
}
