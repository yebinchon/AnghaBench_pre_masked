
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_5__ {int * RootFcb; } ;
typedef int * PVFATFCB ;
typedef TYPE_1__* PDEVICE_EXTENSION ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (TYPE_1__*) ;

PVFATFCB
FUNC_4(
    PDEVICE_EXTENSION VAR_0)
{
    PVFATFCB VAR_1;
    UNICODE_STRING VAR_2 = FUNC_1(L"\\");

    VAR_1 = FUNC_2(VAR_0, &VAR_2);
    if (VAR_1 == ((void*)0))
    {
        VAR_1 = FUNC_3(VAR_0);
    }
    FUNC_0(VAR_1 == VAR_0->RootFcb);

    return VAR_1;
}
