
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {size_t NumSettings; TYPE_2__* pSettings; } ;
struct TYPE_5__ {int s; int i; } ;
struct TYPE_6__ {int Type; TYPE_1__ Value; int Key; } ;
typedef int SIZE_T ;
typedef TYPE_3__* PRDPSETTINGS ;
typedef size_t INT ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int,scalar_t__*,int *) ;
 int FUNC_1 (int *,int,char*,int ,int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static BOOL
FUNC_4(HANDLE VAR_6,
             PRDPSETTINGS VAR_7)
{
    WCHAR VAR_8[VAR_1 + VAR_2 + 4];
    SIZE_T VAR_9;
    ULONG VAR_10;
    BOOL VAR_11;
    INT VAR_12, VAR_13;

    for (VAR_12 = 0; VAR_12 < VAR_7->NumSettings; VAR_12++)
    {

        for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
        {
            if (FUNC_2(VAR_5[VAR_13], VAR_7->pSettings[VAR_12].Key) == 0)
            {
                if (VAR_7->pSettings[VAR_12].Type == L'i')
                {
                    FUNC_1(VAR_8, VAR_1 + VAR_2 + 4, L"%s:i:%d\r\n",
                               VAR_7->pSettings[VAR_12].Key,
                               VAR_7->pSettings[VAR_12].Value.i);
                }
                else
                {
                    FUNC_1(VAR_8, VAR_1 + VAR_2 + 4, L"%s:s:%s\r\n",
                               VAR_7->pSettings[VAR_12].Key,
                               VAR_7->pSettings[VAR_12].Value.s);
                }

                VAR_9 = FUNC_3(VAR_8) * sizeof(WCHAR);

                VAR_11 = FUNC_0(VAR_6,
                                 VAR_8,
                                 VAR_9,
                                 &VAR_10,
                                 ((void*)0));
                if (!VAR_11 || VAR_10 == 0)
                    return VAR_0;
            }
        }
    }

    return VAR_4;
}
