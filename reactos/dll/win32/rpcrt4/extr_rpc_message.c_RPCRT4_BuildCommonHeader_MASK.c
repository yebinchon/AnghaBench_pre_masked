
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_4__ {unsigned char ptype; int call_id; scalar_t__ flags; scalar_t__ auth_len; void** drep; int rpc_ver_minor; int rpc_ver; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
typedef TYPE_2__ RpcPktHdr ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VOID FUNC_4(RpcPktHdr *VAR_2, unsigned char VAR_3,
                                     ULONG VAR_4)
{
  VAR_2->common.rpc_ver = VAR_0;
  VAR_2->common.rpc_ver_minor = VAR_1;
  VAR_2->common.ptype = VAR_3;
  VAR_2->common.drep[0] = FUNC_2(FUNC_3(VAR_4));
  VAR_2->common.drep[1] = FUNC_0(FUNC_3(VAR_4));
  VAR_2->common.drep[2] = FUNC_2(FUNC_1(VAR_4));
  VAR_2->common.drep[3] = FUNC_0(FUNC_1(VAR_4));
  VAR_2->common.auth_len = 0;
  VAR_2->common.call_id = 1;
  VAR_2->common.flags = 0;

}
