
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * servername; scalar_t__ cancel_event; int async_data; int * session; int * app_info; int * out_request; int * in_request; int timer_cancelled; } ;
typedef TYPE_1__ RpcConnection_http ;
typedef int RpcConnection ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(RpcConnection *VAR_0)
{
  RpcConnection_http *VAR_1 = (RpcConnection_http *) VAR_0;

  FUNC_6("\n");

  FUNC_5(VAR_1->timer_cancelled);
  if (VAR_1->in_request)
    FUNC_3(VAR_1->in_request);
  VAR_1->in_request = ((void*)0);
  if (VAR_1->out_request)
    FUNC_3(VAR_1->out_request);
  VAR_1->out_request = ((void*)0);
  if (VAR_1->app_info)
    FUNC_3(VAR_1->app_info);
  VAR_1->app_info = ((void*)0);
  if (VAR_1->session)
    FUNC_3(VAR_1->session);
  VAR_1->session = ((void*)0);
  FUNC_4(VAR_1->async_data);
  if (VAR_1->cancel_event)
    FUNC_0(VAR_1->cancel_event);
  FUNC_2(FUNC_1(), 0, VAR_1->servername);
  VAR_1->servername = ((void*)0);

  return 0;
}
