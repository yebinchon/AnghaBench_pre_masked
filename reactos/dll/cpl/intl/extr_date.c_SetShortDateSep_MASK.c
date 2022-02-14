
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
 scalar_t__ FUNC_2 (int) ;
 size_t FUNC_3 (int*) ;

__attribute__((used)) static BOOL
FUNC_4(HWND VAR_6, PWSTR VAR_7)
{
    INT VAR_8;
    INT VAR_9;


    FUNC_1(VAR_6, VAR_1,
                        VAR_5,
                        (WPARAM)VAR_3,
                        (LPARAM)VAR_7);


    VAR_8 = FUNC_3(VAR_7);


    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
        if (FUNC_2(VAR_7[VAR_9]) || (VAR_7[VAR_9] == L'\''))
        {
            FUNC_0(VAR_2);
            return VAR_0;
        }
    }

    if (VAR_8 == 0)
    {
        FUNC_0(VAR_2);
        return VAR_0;
    }

    return VAR_4;
}
