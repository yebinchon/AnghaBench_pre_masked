
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int * PVOID ;
typedef int HGDIOBJ ;
typedef scalar_t__ GDILOOBJTYPE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;

PVOID
FUNC_5(
    HGDIOBJ VAR_5,
    WORD VAR_6)
{
    GDILOOBJTYPE VAR_7;


    VAR_7 = FUNC_1(VAR_6);
    if ((VAR_7 == 0) || (FUNC_2(VAR_5) != VAR_7))
    {
        return ((void*)0);
    }


    if (VAR_7 == VAR_1)
    {

        return FUNC_4(VAR_5);
    }


    if ((VAR_7 == VAR_4) ||
        (VAR_7 == VAR_3) ||
        (VAR_7 == VAR_2))
    {
        return FUNC_3(VAR_5);
    }


    FUNC_0(VAR_0);
    return ((void*)0);
}
