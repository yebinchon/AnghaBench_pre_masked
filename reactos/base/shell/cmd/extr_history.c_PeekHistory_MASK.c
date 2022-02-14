
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * string; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__* LPHIST_ENTRY ;
typedef int * LPCTSTR ;
typedef scalar_t__ INT ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

LPCTSTR FUNC_1(INT VAR_3)
{
    LPHIST_ENTRY VAR_4 = VAR_2;

    FUNC_0(VAR_1 && VAR_0);

    if (VAR_3 == 0)
        return ((void*)0);

    if (VAR_3 < 0)
    {

        if (VAR_4->next == VAR_1 || VAR_4 == VAR_1)
        {



            return ((void*)0);

        }
        VAR_4 = VAR_4->next;
    }
    else
    {

        if (VAR_4->prev == VAR_0 || VAR_4 == VAR_0)
        {



            return ((void*)0);

        }
        VAR_4 = VAR_4->prev;
    }

    return VAR_4->string;
}
