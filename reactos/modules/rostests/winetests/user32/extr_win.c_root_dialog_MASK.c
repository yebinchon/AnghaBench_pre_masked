
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static HWND FUNC_3(HWND VAR_7)
{
    while ((FUNC_2(VAR_7, VAR_2) & VAR_5) &&
           (FUNC_2(VAR_7, VAR_3) & (VAR_4|VAR_6)) == VAR_4)
    {
        HWND VAR_8 = FUNC_1(VAR_7);


        if (!FUNC_0(VAR_8, VAR_0, 0, 0))
            break;

        VAR_7 = VAR_8;

        if (!(FUNC_2(VAR_7, VAR_3) & VAR_1))
            break;
    }

    return VAR_7;
}
