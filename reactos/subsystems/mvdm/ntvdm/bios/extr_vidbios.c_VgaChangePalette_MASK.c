
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int COLORREF ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int const*,int ) ;

__attribute__((used)) static VOID FUNC_2(BYTE VAR_4)
{
    const COLORREF* VAR_5;
    ULONG VAR_6;

    if (VAR_4 >= 0x13)
    {

        VAR_5 = VAR_3;
        VAR_6 = FUNC_0(VAR_3);
    }
    else if (VAR_4 == 0x10)
    {

        VAR_5 = VAR_2;
        VAR_6 = FUNC_0(VAR_2);
    }
    else
    {

        VAR_5 = VAR_1;
        VAR_6 = FUNC_0(VAR_1);
    }

    FUNC_1(VAR_5, VAR_6);
}
