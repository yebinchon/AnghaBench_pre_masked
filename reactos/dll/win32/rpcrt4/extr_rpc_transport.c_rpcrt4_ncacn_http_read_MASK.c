
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cancel_event; int async_data; int out_request; } ;
typedef TYPE_1__ RpcConnection_http ;
typedef int RpcConnection ;


 int FUNC_0 (int ,int ,int ,void*,unsigned int) ;

__attribute__((used)) static int FUNC_1(RpcConnection *VAR_0,
                                void *VAR_1, unsigned int VAR_2)
{
  RpcConnection_http *VAR_3 = (RpcConnection_http *) VAR_0;
  return FUNC_0(VAR_3->out_request, VAR_3->async_data, VAR_3->cancel_event, VAR_1, VAR_2);
}
