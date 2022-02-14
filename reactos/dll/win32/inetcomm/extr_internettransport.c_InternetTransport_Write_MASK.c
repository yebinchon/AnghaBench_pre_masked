
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vtbl; } ;
struct TYPE_5__ {scalar_t__ Status; TYPE_1__ u; int Socket; scalar_t__ fnCompletion; } ;
typedef TYPE_2__ InternetTransport ;
typedef int (* INETXPORT_COMPLETION_FUNCTION ) (int *,int *,int ) ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char const*,int,int ) ;

HRESULT FUNC_3(InternetTransport *VAR_5, const char *VAR_6,
    int VAR_7, INETXPORT_COMPLETION_FUNCTION VAR_8)
{
    int VAR_9;

    if (VAR_5->Status == VAR_0)
        return VAR_2;

    if (VAR_5->fnCompletion)
        return VAR_1;


    VAR_9 = FUNC_2(VAR_5->Socket, VAR_6, VAR_7, 0);
    if (VAR_9 == VAR_3)
    {
        FUNC_0("send failed with error %d\n", FUNC_1());

    }

    VAR_8((IInternetTransport *)&VAR_5->u.vtbl, ((void*)0), 0);

    return VAR_4;
}
