
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t ULONG ;
typedef int COLORREF ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ,size_t) ;
 size_t FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static VOID FUNC_5(const COLORREF* VAR_3, ULONG VAR_4)
{
    ULONG VAR_5;





    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        FUNC_3(VAR_1, VAR_5);
        FUNC_3(VAR_0, FUNC_4(FUNC_2(VAR_3[VAR_5])));
        FUNC_3(VAR_0, FUNC_4(FUNC_1(VAR_3[VAR_5])));
        FUNC_3(VAR_0, FUNC_4(FUNC_0(VAR_3[VAR_5])));
    }


    for (VAR_5 = VAR_4; VAR_5 < VAR_2; VAR_5++)
    {
        FUNC_3(VAR_1, VAR_5);
        FUNC_3(VAR_0, FUNC_4(0x00));
        FUNC_3(VAR_0, FUNC_4(0x00));
        FUNC_3(VAR_0, FUNC_4(0x00));
    }




}
