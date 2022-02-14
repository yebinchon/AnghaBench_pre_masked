
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * FromConn; int CookieAuth; int QOS; int AuthInfo; int Assoc; int server; } ;
typedef int RpcConnection ;
typedef TYPE_1__ RpcBinding ;
typedef int RPC_SYNTAX_IDENTIFIER ;
typedef int RPC_STATUS ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,int const*,int ,int ,int ,int **,int *) ;
 int FUNC_2 (char*,TYPE_1__*) ;

RPC_STATUS FUNC_3(RpcBinding* VAR_2, RpcConnection** VAR_3,
                              const RPC_SYNTAX_IDENTIFIER *VAR_4,
                              const RPC_SYNTAX_IDENTIFIER *VAR_5, BOOL *VAR_6)
{
  FUNC_2("(Binding == ^%p)\n", VAR_2);

  if (!VAR_2->server) {
     return FUNC_1(VAR_2->Assoc, VAR_5,
         VAR_4, VAR_2->AuthInfo, VAR_2->QOS, VAR_2->CookieAuth, VAR_3, VAR_6);
  } else {

    if (VAR_2->FromConn) {
      *VAR_3 = VAR_2->FromConn;
      return VAR_1;
    } else {
       FUNC_0("no connection in binding\n");
       return VAR_0;
    }
  }
}
