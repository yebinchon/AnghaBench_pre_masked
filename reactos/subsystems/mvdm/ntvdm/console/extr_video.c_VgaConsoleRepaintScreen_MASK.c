
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int Left; int Right; int Top; int Bottom; } ;
typedef TYPE_1__ SMALL_RECT ;
typedef TYPE_1__* PSMALL_RECT ;
typedef int * HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*) ;

VOID FUNC_1(PSMALL_RECT VAR_6)
{
    HANDLE VAR_7 = ((void*)0);
    SMALL_RECT VAR_8 = *VAR_6;


    if (VAR_4 == VAR_2)
    {

        VAR_7 = VAR_3;


        if (VAR_1)
        {
            VAR_8.Left *= 2;
            VAR_8.Right = VAR_8.Right * 2 + 1;
        }
        if (VAR_0)
        {
            VAR_8.Top *= 2;
            VAR_8.Bottom = VAR_8.Bottom * 2 + 1;
        }
    }
    else
    {

        VAR_7 = VAR_5;
    }


    FUNC_0(VAR_7, &VAR_8);
}
