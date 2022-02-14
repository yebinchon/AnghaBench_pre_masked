
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef scalar_t__ WORD ;
typedef int INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static WORD
FUNC_1(HWND VAR_3)
{
    INT VAR_4;
    WORD VAR_5 = (WORD)-1;

    VAR_4 = (INT)FUNC_0(VAR_3,
                          VAR_1,
                          0,
                          0);
    if (VAR_4 != VAR_0)
    {
        VAR_4 = (INT)FUNC_0(VAR_3,
                              VAR_2,
                              (WPARAM)VAR_4,
                              0);

        if (VAR_4 >= 1 && VAR_4 <= 13)
            VAR_5 = (WORD)VAR_4;
    }

    return VAR_5;
}
