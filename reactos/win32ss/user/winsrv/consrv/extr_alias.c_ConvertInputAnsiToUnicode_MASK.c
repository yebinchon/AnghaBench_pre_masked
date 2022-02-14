
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_3__ {int InputCodePage; } ;
typedef int * PWCHAR ;
typedef scalar_t__ PVOID ;
typedef int* PUSHORT ;
typedef TYPE_1__* PCONSRV_CONSOLE ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,scalar_t__,int ,int *,int) ;
 int VAR_1 ;

BOOLEAN
FUNC_3(PCONSRV_CONSOLE VAR_2,
                          PVOID VAR_3,
                          USHORT VAR_4,

                          PWCHAR* VAR_5,
                          PUSHORT VAR_6)
{
    FUNC_0(VAR_3 && VAR_5 && VAR_6);


    *VAR_6 = FUNC_2(VAR_2->InputCodePage, 0,
                                        VAR_3, VAR_4,
                                        ((void*)0), 0);
    *VAR_5 = FUNC_1(0, *VAR_6 * sizeof(WCHAR));
    if (*VAR_5 == ((void*)0)) return VAR_0;

    FUNC_2(VAR_2->InputCodePage, 0,
                        VAR_3, VAR_4,
                        *VAR_5, *VAR_6);


    *VAR_6 *= sizeof(WCHAR);

    return VAR_1;
}
