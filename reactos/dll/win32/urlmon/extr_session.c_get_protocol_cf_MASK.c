
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wszProtocolsKey ;
typedef int str_clsid ;
typedef char WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef char const* LPCWSTR ;
typedef int LPBYTE ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int * HKEY ;
typedef int DWORD ;
typedef int CLSID ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *,int ,int *,int *,void**) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__,int **) ;
 int FUNC_6 (int *,char const*,int *,int*,int ,int*) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_6 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,char const*,int) ;

__attribute__((used)) static HRESULT FUNC_13(LPCWSTR VAR_7, DWORD VAR_8, CLSID *VAR_9, IClassFactory **VAR_10)
{
    WCHAR VAR_11[64];
    HKEY VAR_12 = ((void*)0);
    DWORD VAR_13, VAR_14, VAR_15;
    CLSID VAR_16;
    LPWSTR VAR_17;
    HRESULT VAR_18;

    static const WCHAR VAR_19[] =
        {'P','R','O','T','O','C','O','L','S','\\','H','a','n','d','l','e','r','\\'};
    static const WCHAR VAR_20[] = {'C','L','S','I','D',0};

    VAR_17 = FUNC_10(sizeof(VAR_19)+(VAR_8+1)*sizeof(WCHAR));
    FUNC_12(VAR_17, VAR_19, sizeof(VAR_19));
    FUNC_12(VAR_17 + FUNC_0(VAR_19), VAR_7, (VAR_8+1)*sizeof(WCHAR));

    VAR_13 = FUNC_5(VAR_2, VAR_17, &VAR_12);
    FUNC_11(VAR_17);
    if(VAR_13 != VAR_1) {
        FUNC_8("Could not open protocol handler key\n");
        return VAR_4;
    }

    VAR_15 = sizeof(VAR_11);
    VAR_13 = FUNC_6(VAR_12, VAR_20, ((void*)0), &VAR_14, (LPBYTE)VAR_11, &VAR_15);
    FUNC_4(VAR_12);
    if(VAR_13 != VAR_1 || VAR_14 != VAR_5) {
        FUNC_9("Could not get protocol CLSID res=%d\n", VAR_13);
        return VAR_4;
    }

    VAR_18 = FUNC_1(VAR_11, &VAR_16);
    if(FUNC_3(VAR_18)) {
        FUNC_9("CLSIDFromString failed: %08x\n", VAR_18);
        return VAR_18;
    }

    if(VAR_9)
        *VAR_9 = VAR_16;

    if(!VAR_10)
        return VAR_6;

    VAR_18 = FUNC_2(&VAR_16, VAR_0, ((void*)0), &VAR_3, (void**)VAR_10);
    return FUNC_7(VAR_18) ? VAR_6 : VAR_4;
}
