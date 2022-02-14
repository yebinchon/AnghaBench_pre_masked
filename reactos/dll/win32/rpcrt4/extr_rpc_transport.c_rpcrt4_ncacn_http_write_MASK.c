
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int last_sent_time; int in_request; } ;
typedef TYPE_1__ RpcConnection_http ;
typedef int RpcConnection ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 unsigned int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,void const*,unsigned int,int*) ;
 int FUNC_2 (char*,int ,void const*,unsigned int,char*) ;

__attribute__((used)) static int FUNC_3(RpcConnection *VAR_0,
                                 const void *VAR_1, unsigned int VAR_2)
{
  RpcConnection_http *VAR_3 = (RpcConnection_http *) VAR_0;
  DWORD VAR_4;
  BOOL VAR_5;

  VAR_3->last_sent_time = ~0U;
  VAR_5 = FUNC_1(VAR_3->in_request, VAR_1, VAR_2, &VAR_4);
  VAR_3->last_sent_time = FUNC_0();
  FUNC_2("%p %p %u -> %s\n", VAR_3->in_request, VAR_1, VAR_2, VAR_5 ? "TRUE" : "FALSE");
  return VAR_5 ? VAR_4 : -1;
}
