
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t NumSettings; TYPE_2__* pSettings; } ;
struct TYPE_5__ {int * s; } ;
struct TYPE_6__ {int Type; TYPE_1__ Value; int Key; } ;
typedef TYPE_3__* PRDPSETTINGS ;
typedef int * LPWSTR ;
typedef size_t INT ;


 scalar_t__ FUNC_0 (int ,int *) ;

LPWSTR
FUNC_1(PRDPSETTINGS VAR_0,
                      LPWSTR VAR_1)
{
    LPWSTR VAR_2 = ((void*)0);

    if (VAR_0)
    {
        INT VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_0->NumSettings; VAR_3++)
        {
            if (FUNC_0(VAR_0->pSettings[VAR_3].Key, VAR_1) == 0)
            {
                if (VAR_0->pSettings[VAR_3].Type == L's')
                {
                    VAR_2 = VAR_0->pSettings[VAR_3].Value.s;
                    break;
                }
            }
        }
    }

    return VAR_2;
}
