
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int const* pServerInfo; } ;
typedef int MIDL_SERVER_INFO ;
typedef int IRpcStubBuffer ;
typedef int CStdStubBuffer ;


 TYPE_1__ FUNC_0 (int *) ;

const MIDL_SERVER_INFO *FUNC_1(IRpcStubBuffer *VAR_0)
{
  CStdStubBuffer *VAR_1 = (CStdStubBuffer *)VAR_0;
  return FUNC_0(VAR_1).pServerInfo;
}
