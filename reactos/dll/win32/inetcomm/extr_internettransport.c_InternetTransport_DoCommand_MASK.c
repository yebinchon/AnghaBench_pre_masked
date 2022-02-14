
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vtbl; } ;
struct TYPE_6__ {scalar_t__ Status; TYPE_1__ u; scalar_t__ pCallback; scalar_t__ fCommandLogging; scalar_t__ fnCompletion; } ;
typedef int LPSTR ;
typedef scalar_t__ LPCSTR ;
typedef TYPE_2__ InternetTransport ;
typedef int INETXPORT_COMPLETION_FUNCTION ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

HRESULT FUNC_3(InternetTransport *VAR_4,
    LPCSTR VAR_5, INETXPORT_COMPLETION_FUNCTION VAR_6)
{
    if (VAR_4->Status == VAR_1)
        return VAR_3;

    if (VAR_4->fnCompletion)
        return VAR_2;

    if (VAR_4->pCallback && VAR_4->fCommandLogging)
    {
        FUNC_0(VAR_4->pCallback, VAR_0, (LPSTR)VAR_5, 0,
            (IInternetTransport *)&VAR_4->u.vtbl);
    }
    return FUNC_1(VAR_4, VAR_5, FUNC_2(VAR_5), VAR_6);
}
