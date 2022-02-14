
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {scalar_t__ Preinstalled; int File; } ;
typedef int LPVOID ;
typedef int LPCWSTR ;
typedef int HRSRC ;
typedef int HMODULE ;
typedef int HGLOBAL ;
typedef int HANDLE ;
typedef TYPE_1__ GFRI_ENTRY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char*,int ,int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,TYPE_1__ const*) ;
 int FUNC_15 (int *,TYPE_1__ const*) ;
 int FUNC_16 (int *,TYPE_1__ const*) ;
 int FUNC_17 (int *,TYPE_1__ const*) ;
 int FUNC_18 (int *,TYPE_1__ const*) ;
 int FUNC_19 (int *,TYPE_1__ const*) ;
 int FUNC_20 (int ,int ,int ,int *,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (char*,int *) ;
 int FUNC_23 (char*,int *) ;

__attribute__((used)) static void
FUNC_24(const GFRI_ENTRY *VAR_8)
{
    WCHAR VAR_9[VAR_6], VAR_10[VAR_6];
    BOOL VAR_11 = VAR_1;

    if (VAR_8->Preinstalled)
    {
        FUNC_7(VAR_9, VAR_8->File);
        FUNC_22("GetSystemFontPath: %S\n", VAR_9);
        if (FUNC_5(VAR_9) == VAR_5)
        {
            FUNC_23("Font file \"%S\" was not found\n", VAR_9);
            return;
        }
    }
    else
    {

        HANDLE VAR_12;
        HMODULE VAR_13 = FUNC_6(((void*)0));
        HRSRC VAR_14 = FUNC_4(VAR_13, VAR_8->File, (LPCWSTR)VAR_7);
        HGLOBAL VAR_15 = FUNC_10(VAR_13, VAR_14);
        DWORD VAR_16 = FUNC_13(VAR_13, VAR_14);
        LPVOID VAR_17 = FUNC_11(VAR_15);


        FUNC_9(FUNC_21(VAR_10), VAR_10);
        FUNC_8(VAR_10, L"FNT", 0, VAR_9);
        FUNC_22("GetTempFileNameW: %S\n", VAR_9);


        VAR_12 = FUNC_2(VAR_9, VAR_4, VAR_3, ((void*)0),
                            VAR_0, VAR_2, ((void*)0));
        FUNC_20(VAR_12, VAR_17, VAR_16, &VAR_16, ((void*)0));
        FUNC_1(VAR_12);


        if (FUNC_5(VAR_9) == VAR_5)
        {
            FUNC_23("Font file \"%S\" was not stored\n", VAR_9);
            return;
        }


        VAR_11 = !!FUNC_0(VAR_9);
        if (!VAR_11)
        {
            FUNC_23("Font file \"%S\" was not installed\n", VAR_9);
            FUNC_12(VAR_9);
            FUNC_3(VAR_9);
            return;
        }
    }

    FUNC_14(VAR_9, VAR_8);
    FUNC_15(VAR_9, VAR_8);
    FUNC_16(VAR_9, VAR_8);
    FUNC_17(VAR_9, VAR_8);
    FUNC_18(VAR_9, VAR_8);
    FUNC_19(VAR_9, VAR_8);

    if (!VAR_8->Preinstalled)
    {
        if (VAR_11)
        {
            FUNC_12(VAR_9);
            FUNC_3(VAR_9);
        }
    }
}
