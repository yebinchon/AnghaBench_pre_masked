
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HRESULT ;
typedef int * HMODULE ;
typedef int HINF ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *,int ,int *) ;
 int FUNC_6 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int *,int,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;

BOOL
FUNC_12(HINF VAR_4, LPCWSTR VAR_5)
{
    INFCONTEXT VAR_6;
    BOOL VAR_7;
    WCHAR VAR_8[VAR_2];
    WCHAR VAR_9[VAR_2];
    INT VAR_10;
    LPWSTR VAR_11;
    HMODULE VAR_12;
    HRESULT VAR_13;


    VAR_7 = FUNC_6(VAR_4, VAR_5, ((void*)0), &VAR_6);
    if (!VAR_7) return VAR_1;

    do
    {

        if (!FUNC_9(&VAR_6, 1, VAR_8, FUNC_0(VAR_8), ((void*)0)))
        {
            FUNC_2("SetupGetStringFieldW failed\n");
            continue;
        }

        if (!FUNC_8(&VAR_6, 2, &VAR_10))
            VAR_10 = VAR_0;

        VAR_13 = FUNC_5(((void*)0), VAR_10, ((void*)0), 0, VAR_9);
        if (FUNC_1(VAR_13))
        {
            FUNC_2("SHGetFolderPathW failed hret=0x%lx\n", VAR_13);
            continue;
        }

        VAR_11 = FUNC_4(VAR_9);
        FUNC_11(VAR_11, VAR_8);

        VAR_12 = FUNC_3(VAR_8);
        if (VAR_12 == ((void*)0))
        {
            FUNC_2("LoadLibraryW failed\n");
            continue;
        }

        FUNC_10(VAR_12);

    } while (FUNC_7(&VAR_6, &VAR_6));

    return VAR_3;
}
