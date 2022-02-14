
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rpc_ver; scalar_t__ rpc_ver_minor; scalar_t__ frag_len; } ;
typedef int RpcPktHdr ;
typedef TYPE_1__ RpcPktCommonHdr ;
typedef int RPC_STATUS ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;

RPC_STATUS FUNC_2(const RpcPktCommonHdr *VAR_4)
{
  DWORD VAR_5;


  if (VAR_4->rpc_ver != VAR_2 ||
      VAR_4->rpc_ver_minor != VAR_3)
  {
    FUNC_1("unhandled packet version\n");
    return VAR_1;
  }

  VAR_5 = FUNC_0((const RpcPktHdr*)VAR_4);
  if (VAR_5 == 0)
  {
    FUNC_1("header length == 0\n");
    return VAR_1;
  }

  if (VAR_4->frag_len < VAR_5)
  {
    FUNC_1("bad frag length %d\n", VAR_4->frag_len);
    return VAR_1;
  }

  return VAR_0;
}
