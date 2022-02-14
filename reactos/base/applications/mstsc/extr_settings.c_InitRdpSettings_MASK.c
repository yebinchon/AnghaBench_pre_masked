
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_5__ {scalar_t__ i; } ;
struct TYPE_7__ {TYPE_1__ Value; scalar_t__ Type; int Key; } ;
struct TYPE_6__ {int NumSettings; TYPE_4__* pSettings; } ;
typedef int SETTINGS ;
typedef TYPE_2__* PRDPSETTINGS ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int ,int ) ;

BOOL
FUNC_3(PRDPSETTINGS VAR_4)
{
    BOOL VAR_5 = VAR_0;

    VAR_4->pSettings = FUNC_1(FUNC_0(),
                                        0,
                                        sizeof(SETTINGS) * VAR_1);
    if (VAR_4->pSettings)
    {
        INT VAR_6;

        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
        {
            FUNC_2(VAR_4->pSettings[VAR_6].Key, VAR_3[VAR_6]);
            VAR_4->pSettings[VAR_6].Type = (WCHAR)0;
            VAR_4->pSettings[VAR_6].Value.i = 0;
        }

        VAR_4->NumSettings = VAR_1;

        VAR_5 = VAR_2;
    }

    return VAR_5;
}
