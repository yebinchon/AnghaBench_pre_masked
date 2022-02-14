
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vtbl; } ;
struct TYPE_5__ {TYPE_1__ u; scalar_t__ pCallback; int Status; } ;
typedef TYPE_2__ InternetTransport ;
typedef int IXPSTATUS ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (scalar_t__,int ,int *) ;
 int VAR_0 ;

HRESULT FUNC_1(InternetTransport *VAR_1, IXPSTATUS VAR_2)
{
    VAR_1->Status = VAR_2;
    if (VAR_1->pCallback)
        FUNC_0(VAR_1->pCallback, VAR_2,
            (IInternetTransport *)&VAR_1->u.vtbl);
    return VAR_0;
}
