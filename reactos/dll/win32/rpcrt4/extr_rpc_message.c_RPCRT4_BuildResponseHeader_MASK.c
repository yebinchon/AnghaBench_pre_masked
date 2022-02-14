
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {int alloc_hint; } ;
struct TYPE_7__ {int frag_len; } ;
struct TYPE_9__ {TYPE_2__ response; TYPE_1__ common; } ;
typedef TYPE_3__ RpcPktHdr ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;

RpcPktHdr *FUNC_3(ULONG VAR_2, ULONG VAR_3)
{
  RpcPktHdr *VAR_4;

  VAR_4 = FUNC_1(FUNC_0(), VAR_0, sizeof(VAR_4->response));
  if (VAR_4 == ((void*)0)) {
    return ((void*)0);
  }

  FUNC_2(VAR_4, VAR_1, VAR_2);
  VAR_4->common.frag_len = sizeof(VAR_4->response);
  VAR_4->response.alloc_hint = VAR_3;

  return VAR_4;
}
