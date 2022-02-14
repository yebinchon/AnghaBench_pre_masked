
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int LPOLESTR ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *,int ,int ,unsigned char const*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int ,int,char*,int,int *,int *) ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,char) ;

__attribute__((used)) static HRESULT FUNC_14(BOOL VAR_8)
{
    HRESULT VAR_9;
    char VAR_10[256];
    LPOLESTR VAR_11;
    HKEY VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;

    VAR_9 = FUNC_5(&VAR_0, &VAR_11);
    FUNC_8(VAR_9, "StringFromCLSID");
    FUNC_11(VAR_10, "CLSID\\");
    FUNC_6(VAR_1, 0, VAR_11, -1, VAR_10 + FUNC_12(VAR_10), sizeof(VAR_10) - FUNC_12(VAR_10), ((void*)0), ((void*)0));
    FUNC_0(VAR_11);
    FUNC_10(VAR_10, "\\InprocHandler32");
    if (VAR_8)
    {
        VAR_14 = FUNC_2(VAR_5, VAR_10, 0, ((void*)0), 0, VAR_6, ((void*)0), &VAR_12, &VAR_13);
        if (VAR_14 == VAR_2)
        {
            FUNC_9("Not authorized to modify the Classes key\n");
            return VAR_4;
        }
        FUNC_7(VAR_14 == VAR_3, "RegCreateKeyEx failed with error %d\n", VAR_14);
        if (VAR_14 != VAR_3) VAR_9 = VAR_4;
        VAR_14 = FUNC_4(VAR_12, ((void*)0), 0, VAR_7, (const unsigned char *)"\"ole32.dll\"", FUNC_12("\"ole32.dll\"") + 1);
        FUNC_7(VAR_14 == VAR_3, "RegSetValueEx failed with error %d\n", VAR_14);
        if (VAR_14 != VAR_3) VAR_9 = VAR_4;
        FUNC_1(VAR_12);
    }
    else
    {
        FUNC_3(VAR_5, VAR_10);
        *FUNC_13(VAR_10, '\\') = '\0';
        FUNC_3(VAR_5, VAR_10);
    }
    return VAR_9;
}
