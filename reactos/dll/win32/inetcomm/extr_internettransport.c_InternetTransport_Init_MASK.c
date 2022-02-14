
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Socket; int * fnCompletion; int fCommandLogging; int Status; int * pCallback; } ;
typedef TYPE_1__ InternetTransport ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

HRESULT FUNC_0(InternetTransport *VAR_3)
{
    VAR_3->pCallback = ((void*)0);
    VAR_3->Status = VAR_1;
    VAR_3->Socket = -1;
    VAR_3->fCommandLogging = VAR_0;
    VAR_3->fnCompletion = ((void*)0);

    return VAR_2;
}
