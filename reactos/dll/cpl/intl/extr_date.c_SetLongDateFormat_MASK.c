
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int* PWSTR ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 size_t FUNC_4 (int*) ;

__attribute__((used)) static BOOL
FUNC_5(HWND VAR_6, PWSTR VAR_7)
{
    BOOL VAR_8 = VAR_0;
    INT VAR_9;
    INT VAR_10;


    FUNC_1(VAR_6, VAR_1,
                        VAR_5,
                        (WPARAM)VAR_3,
                        (LPARAM)VAR_7);


    VAR_9 = FUNC_4(VAR_7);


    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
        if (VAR_7[VAR_10] == L'\'')
        {
            VAR_8 = !VAR_8;
        }

        if (FUNC_3(VAR_7[VAR_10]) &&
            !FUNC_2(VAR_7[VAR_10]) &&
            !VAR_8)
        {
            FUNC_0(VAR_2);
            return VAR_0;
        }
    }

    if (VAR_8 || VAR_9 == 0)
    {
        FUNC_0(VAR_2);
        return VAR_0;
    }

    return VAR_4;
}
