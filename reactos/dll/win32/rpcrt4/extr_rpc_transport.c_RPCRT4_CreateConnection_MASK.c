
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct connection_ops {TYPE_1__* (* alloc ) () ;} ;
struct TYPE_5__ {int ref; int NextCallId; int protseq_entry; int conn_pool_entry; int * QOS; int auth_context_id; int * AuthInfo; int ctx; int MaxTransmissionSize; void* CookieAuth; void* NetworkOptions; void* Endpoint; void* NetworkAddr; struct connection_ops const* ops; int server; } ;
typedef int RpcQualityOfService ;
typedef TYPE_1__ RpcConnection ;
typedef int RpcAuthInfo ;
typedef int RPC_STATUS ;
typedef int LPCWSTR ;
typedef int LPCSTR ;
typedef int LONG ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 struct connection_ops* FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 () ;

RPC_STATUS FUNC_11(RpcConnection** VAR_3, BOOL VAR_4,
    LPCSTR VAR_5, LPCSTR VAR_6, LPCSTR VAR_7,
    LPCWSTR VAR_8, RpcAuthInfo* VAR_9, RpcQualityOfService *VAR_10, LPCWSTR VAR_11)
{
  static LONG VAR_12;
  const struct connection_ops *VAR_13;
  RpcConnection* VAR_14;

  VAR_13 = FUNC_9(VAR_5);
  if (!VAR_13)
  {
    FUNC_0("not supported for protseq %s\n", VAR_5);
    return VAR_2;
  }

  VAR_14 = VAR_13->alloc();
  VAR_14->ref = 1;
  VAR_14->server = VAR_4;
  VAR_14->ops = VAR_13;
  VAR_14->NetworkAddr = FUNC_2(VAR_6);
  VAR_14->Endpoint = FUNC_2(VAR_7);
  VAR_14->NetworkOptions = FUNC_3(VAR_8);
  VAR_14->CookieAuth = FUNC_3(VAR_11);
  VAR_14->MaxTransmissionSize = VAR_0;
  VAR_14->NextCallId = 1;

  FUNC_6(&VAR_14->ctx);
  if (VAR_9) FUNC_4(VAR_9);
  VAR_14->AuthInfo = VAR_9;
  VAR_14->auth_context_id = FUNC_1( &VAR_12 );
  if (VAR_10) FUNC_5(VAR_10);
  VAR_14->QOS = VAR_10;

  FUNC_8(&VAR_14->conn_pool_entry);
  FUNC_8(&VAR_14->protseq_entry);

  FUNC_7("connection: %p\n", VAR_14);
  *VAR_3 = VAR_14;

  return VAR_1;
}
