
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int WCHAR ;
typedef int* PWSTR ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int* FUNC_0 (int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int* FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int*,int*) ;
 size_t FUNC_9 (int*) ;

__attribute__((used)) static BOOL
FUNC_10(HWND VAR_7, PWSTR VAR_8)
{
    WCHAR VAR_9[VAR_4];
    WCHAR VAR_10[VAR_4];
    PWSTR VAR_11;
    PWSTR VAR_12;
    BOOL VAR_13 = VAR_0;
    INT VAR_14;
    INT VAR_15;


    FUNC_5(VAR_7, VAR_1,
                        VAR_6,
                        (WPARAM)VAR_4,
                        (LPARAM)VAR_8);


    FUNC_5(VAR_7, VAR_2,
                        VAR_6,
                        (WPARAM)VAR_4,
                        (LPARAM)VAR_9);


    VAR_14 = FUNC_9(VAR_8);


    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    {
        if (VAR_8[VAR_15] == L'\'')
        {
            VAR_13 = !VAR_13;
        }

        if (FUNC_7(VAR_8[VAR_15]) &&
            !FUNC_6(VAR_8[VAR_15]) &&
            !VAR_13)
        {
            FUNC_3(VAR_3);
            return VAR_0;
        }
    }

    if (VAR_13 || VAR_14 == 0)
    {
        FUNC_3(VAR_3);
        return VAR_0;
    }

    VAR_12 = FUNC_0(VAR_8);
    if (VAR_12 != ((void*)0))
    {

        FUNC_8(VAR_10, VAR_12);
        VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_10);
        if (VAR_11 != ((void*)0))
        {
            FUNC_8(VAR_8, VAR_11);
            FUNC_2(FUNC_1(), 0, VAR_11);
        }

        FUNC_2(FUNC_1(), 0, VAR_12);
    }

    return VAR_5;
}
