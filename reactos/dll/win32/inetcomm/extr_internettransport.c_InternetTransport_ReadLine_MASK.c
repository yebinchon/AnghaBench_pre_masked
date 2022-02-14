
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Status; int cbBuffer; int hwnd; int Socket; scalar_t__ iCurrentBufferOffset; int pBuffer; scalar_t__ fnCompletion; } ;
typedef TYPE_1__ InternetTransport ;
typedef scalar_t__ INETXPORT_COMPLETION_FUNCTION ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;

HRESULT FUNC_5(InternetTransport *VAR_7,
    INETXPORT_COMPLETION_FUNCTION VAR_8)
{
    if (VAR_7->Status == VAR_1)
        return VAR_3;

    if (VAR_7->fnCompletion)
        return VAR_2;

    VAR_7->fnCompletion = VAR_8;

    VAR_7->cbBuffer = 1024;
    VAR_7->pBuffer = FUNC_2(FUNC_1(), 0, VAR_7->cbBuffer);
    VAR_7->iCurrentBufferOffset = 0;

    if (FUNC_3(VAR_7->Socket, VAR_7->hwnd, VAR_4, VAR_0) == VAR_5)
    {
        FUNC_0("WSAAsyncSelect failed with error %d\n", FUNC_4());

    }
    return VAR_6;
}
