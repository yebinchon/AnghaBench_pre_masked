
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef char* LPWSTR ;
typedef int LPVOID ;
typedef char* LPSTR ;
typedef int LPGUID ;
typedef int (* LPDSENUMCALLBACKW ) (int ,char*,char*,int ) ;
typedef int (* LPDSENUMCALLBACKA ) (int ,char*,char*,int ) ;
typedef int DriverNameA ;
typedef int Buffer ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*,int,char*,int,int *,int *) ;
 int FUNC_3 (char*,char*) ;

BOOL
FUNC_4(
    LPDSENUMCALLBACKA VAR_3,
    LPDSENUMCALLBACKW VAR_4,
    LPGUID VAR_5,
    UINT VAR_6,
    LPWSTR VAR_7,
    LPWSTR VAR_8,
    LPVOID VAR_9)
{
    WCHAR VAR_10[200] = {0};
    char VAR_11[200];

    static LPWSTR VAR_12 = L"Primary Sound Driver";
    static LPWSTR VAR_13 = L"Primary Sound Driver";

    if (VAR_4)
    {
        if (VAR_6)
        {

            VAR_10[0] = 0;
            FUNC_1(VAR_6, (LPVOID)VAR_10, sizeof(VAR_10)/sizeof(WCHAR), (LPVOID)VAR_12, VAR_2);
            VAR_10[(sizeof(VAR_10)/sizeof(WCHAR))-1] = '\0';
        }
        else
        {

            FUNC_0(VAR_7);
            FUNC_3(VAR_10, VAR_7);
        }


        return VAR_4(VAR_5, VAR_10, VAR_8, VAR_9);
    }
    else
    {
        if (VAR_6)
        {

            VAR_10[0] = 0;
            FUNC_1(VAR_6, (LPVOID)VAR_10, sizeof(VAR_10)/sizeof(char), (LPVOID)VAR_13, VAR_1);
            VAR_10[(sizeof(VAR_10)/sizeof(WCHAR))-1] = 0;
        }
        else
        {

            VAR_10[0] = 0;
            FUNC_2(VAR_0, 0, VAR_7, -1, (LPSTR)VAR_10, sizeof(VAR_10) / sizeof(char), ((void*)0), ((void*)0));
            VAR_10[(sizeof(VAR_10)/sizeof(WCHAR))-1] = 0;
        }

        VAR_11[0] = 0;
        if (VAR_7)
        {
            FUNC_2(VAR_0, 0, VAR_7, -1, VAR_11, sizeof(VAR_11) / sizeof(char), ((void*)0), ((void*)0));
            VAR_11[(sizeof(VAR_11) / sizeof(char))-1] = 0;
        }

        return VAR_3(VAR_5, (LPSTR)VAR_10, VAR_11, VAR_9);
    }
}
