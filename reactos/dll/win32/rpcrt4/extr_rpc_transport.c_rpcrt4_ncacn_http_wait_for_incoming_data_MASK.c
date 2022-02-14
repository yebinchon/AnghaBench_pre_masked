
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwBufferLength; } ;
struct TYPE_7__ {TYPE_1__ inet_buffers; } ;
struct TYPE_6__ {int cancel_event; TYPE_3__* async_data; int out_request; } ;
typedef TYPE_2__ RpcConnection_http ;
typedef int RpcConnection ;
typedef scalar_t__ RPC_STATUS ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_3(RpcConnection *VAR_2)
{
  RpcConnection_http *VAR_3 = (RpcConnection_http *) VAR_2;
  BOOL VAR_4;
  RPC_STATUS VAR_5;

  FUNC_1(VAR_3->async_data);
  VAR_4 = FUNC_0(VAR_3->out_request,
    &VAR_3->async_data->inet_buffers.dwBufferLength, VAR_0, 0);
  VAR_5 = FUNC_2(VAR_3->async_data, VAR_4, VAR_3->cancel_event);
  return VAR_5 == VAR_1 ? 0 : -1;
}
