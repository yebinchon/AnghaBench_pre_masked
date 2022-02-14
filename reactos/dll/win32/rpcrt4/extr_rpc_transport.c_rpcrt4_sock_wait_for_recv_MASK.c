
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cancel_event; int sock_event; int sock; } ;
typedef TYPE_1__ RpcConnection_tcp ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int *,int ,int ) ;

__attribute__((used)) static BOOL FUNC_5(RpcConnection_tcp *VAR_6)
{
  HANDLE VAR_7[2];
  DWORD VAR_8;
  if (FUNC_2(VAR_6->sock, VAR_6->sock_event, VAR_2 | VAR_1) == VAR_4)
  {
    FUNC_0("WSAEventSelect() failed with error %d\n", FUNC_3());
    return VAR_0;
  }
  VAR_7[0] = VAR_6->sock_event;
  VAR_7[1] = VAR_6->cancel_event;
  VAR_8 = FUNC_4(2, VAR_7, VAR_0, VAR_3);
  switch (VAR_8)
  {
  case 128:
    return VAR_5;
  case 128 + 1:
    return VAR_0;
  default:
    FUNC_0("WaitForMultipleObjects() failed with error %d\n", FUNC_1());
    return VAR_0;
  }
}
