
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Status; int ServerInfo; } ;
typedef int * LPINETSERVER ;
typedef TYPE_1__ InternetTransport ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

HRESULT FUNC_0(InternetTransport *VAR_3, LPINETSERVER VAR_4)
{
    if (VAR_3->Status == VAR_0)
        return VAR_1;

    *VAR_4 = VAR_3->ServerInfo;
    return VAR_2;
}
