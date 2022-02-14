
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pCallback; } ;
typedef TYPE_1__ InternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

HRESULT FUNC_1(InternetTransport *VAR_2)
{
    if (!VAR_2->pCallback)
        return VAR_0;

    FUNC_0(VAR_2->pCallback);
    VAR_2->pCallback = ((void*)0);

    return VAR_1;
}
