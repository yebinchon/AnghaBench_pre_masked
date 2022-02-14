
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int URLZONEREG ;
typedef int LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int *,int *,int *,int*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_8 ;


 int VAR_9 ;



 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static HRESULT FUNC_8(DWORD VAR_10, DWORD VAR_11, BYTE *VAR_12, DWORD VAR_13, URLZONEREG VAR_14)
{
    HKEY VAR_15;
    HKEY VAR_16;
    LONG VAR_17;
    HRESULT VAR_18;

    switch(VAR_11) {
    case 131:
    case 132:
        *(DWORD*)VAR_12 = VAR_9;
        return VAR_8;
    }

    switch(VAR_14) {
    case 130:
    case 129:
        VAR_15 = VAR_6;
        break;
    case 128:
        VAR_15 = VAR_7;
        break;
    default:
        FUNC_5("Unknown URLZONEREG: %d\n", VAR_14);
        return VAR_3;
    };

    VAR_18 = FUNC_6(VAR_15, VAR_10, &VAR_16);
    if(FUNC_4(VAR_18)) {
        WCHAR VAR_19[16];
        DWORD VAR_20 = VAR_13;

        static const WCHAR VAR_21[] = {'%','X',0};

        FUNC_7(VAR_19, VAR_21, VAR_11);

        VAR_17 = FUNC_3(VAR_16, VAR_19, ((void*)0), ((void*)0), VAR_12, &VAR_20);
        if(VAR_17 == VAR_1) {
            VAR_18 = VAR_4;
        }else if(VAR_17 == VAR_0) {
            VAR_18 = VAR_3;
        }else if(VAR_17 != VAR_2) {
            FUNC_0("RegQueryValue failed: %d\n", VAR_17);
            VAR_18 = VAR_5;
        }

        FUNC_2(VAR_16);
    }

    if(FUNC_1(VAR_18) && VAR_14 == 130)
        return FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, 128);

    return VAR_18;
}
