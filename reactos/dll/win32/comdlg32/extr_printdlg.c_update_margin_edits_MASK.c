
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pagesetup_data ;
typedef scalar_t__ WORD ;
typedef int WCHAR ;
typedef int HWND ;


 int FUNC_0 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*,int ,int *) ;

__attribute__((used)) static void FUNC_4(HWND VAR_2, const pagesetup_data *VAR_3, WORD VAR_4)
{
    WCHAR VAR_5[100];
    WORD VAR_6;

    for(VAR_6 = VAR_0; VAR_6 <= VAR_1; VAR_6++)
    {
        if(VAR_4 == 0 || VAR_4 == VAR_6)
        {
            FUNC_3(VAR_3, *FUNC_1(FUNC_2(VAR_3), VAR_6), VAR_5);
            FUNC_0(VAR_2, VAR_6, VAR_5);
        }
    }
}
