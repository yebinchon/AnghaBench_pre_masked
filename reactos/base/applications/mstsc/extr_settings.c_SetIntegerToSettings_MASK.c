
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t NumSettings; TYPE_2__* pSettings; } ;
struct TYPE_5__ {size_t i; } ;
struct TYPE_6__ {int Type; TYPE_1__ Value; int Key; } ;
typedef TYPE_3__* PRDPSETTINGS ;
typedef int LPWSTR ;
typedef size_t INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

BOOL
FUNC_1(PRDPSETTINGS VAR_2,
                     LPWSTR VAR_3,
                     INT VAR_4)
{
    BOOL VAR_5 = VAR_0;

    if (VAR_2)
    {
        INT VAR_6;

        for (VAR_6 = 0; VAR_6 < VAR_2->NumSettings; VAR_6++)
        {
            if (FUNC_0(VAR_2->pSettings[VAR_6].Key, VAR_3) == 0)
            {
                if (VAR_2->pSettings[VAR_6].Type == 0)
                    VAR_2->pSettings[VAR_6].Type = L'i';

                VAR_2->pSettings[VAR_6].Value.i = VAR_4;
                VAR_5 = VAR_1;
                break;
            }
        }
    }

    return VAR_5;
}
