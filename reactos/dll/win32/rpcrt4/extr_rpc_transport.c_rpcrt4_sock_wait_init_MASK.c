
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WSADATA ;
struct TYPE_3__ {void* sock_event; void* cancel_event; } ;
typedef TYPE_1__ RpcConnection_tcp ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static BOOL FUNC_5(RpcConnection_tcp *VAR_2)
{
  static BOOL VAR_3;
  if (!VAR_3)
  {
    WSADATA VAR_4;
    FUNC_4(FUNC_3(2, 2), &VAR_4);


    VAR_3 = VAR_1;
  }
  VAR_2->sock_event = FUNC_1(((void*)0), VAR_0, VAR_0, ((void*)0));
  VAR_2->cancel_event = FUNC_1(((void*)0), VAR_0, VAR_0, ((void*)0));
  if (!VAR_2->sock_event || !VAR_2->cancel_event)
  {
    FUNC_2("event creation failed\n");
    if (VAR_2->sock_event) FUNC_0(VAR_2->sock_event);
    return VAR_0;
  }
  return VAR_1;
}
