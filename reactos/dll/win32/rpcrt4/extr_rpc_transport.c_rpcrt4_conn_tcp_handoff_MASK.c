
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int address ;
struct TYPE_3__ {int NetworkAddr; } ;
struct TYPE_4__ {int sock; TYPE_1__ common; } ;
typedef TYPE_2__ RpcConnection_tcp ;
typedef int RpcConnection ;
typedef int RPC_STATUS ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,struct sockaddr*,int*) ;
 int FUNC_5 (struct sockaddr*,int,int ,int ,int *,int ,int ) ;
 int FUNC_6 (int,int ,int*) ;

__attribute__((used)) static RPC_STATUS FUNC_7(RpcConnection *VAR_5, RpcConnection *VAR_6)
{
  int VAR_7;
  struct sockaddr_in VAR_8;
  socklen_t VAR_9;
  RpcConnection_tcp *VAR_10 = (RpcConnection_tcp*) VAR_5;
  RpcConnection_tcp *VAR_11 = (RpcConnection_tcp*) VAR_6;
  u_long VAR_12;

  VAR_9 = sizeof(VAR_8);
  VAR_7 = FUNC_4(VAR_10->sock, (struct sockaddr*) &VAR_8, &VAR_9);
  if (VAR_7 < 0)
  {
    FUNC_0("Failed to accept a TCP connection: error %d\n", VAR_7);
    return VAR_4;
  }

  VAR_12 = 1;
  FUNC_6(VAR_7, VAR_0, &VAR_12);
  VAR_11->sock = VAR_7;

  VAR_11->common.NetworkAddr = FUNC_2(FUNC_1(), 0, VAR_1);
  VAR_7 = FUNC_5((struct sockaddr*)&VAR_8, VAR_9, VAR_11->common.NetworkAddr, VAR_1, ((void*)0), 0, VAR_2);
  if (VAR_7 != 0)
  {
    FUNC_0("Failed to retrieve the IP address, error %d\n", VAR_7);
    return VAR_4;
  }

  FUNC_3("Accepted a new TCP connection from %s\n", VAR_11->common.NetworkAddr);
  return VAR_3;
}
