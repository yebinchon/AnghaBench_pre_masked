
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UUID ;
typedef int ULONG ;
struct TYPE_9__ {unsigned short opnum; scalar_t__ context_id; int alloc_hint; } ;
struct TYPE_7__ {int frag_len; int flags; } ;
struct TYPE_8__ {TYPE_3__ request; TYPE_1__ common; } ;
typedef TYPE_2__ RpcPktHdr ;
typedef int RPC_STATUS ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,int *,int) ;

__attribute__((used)) static RpcPktHdr *FUNC_5(ULONG VAR_3,
                                     ULONG VAR_4,
                                     unsigned short VAR_5,
                                     UUID *VAR_6)
{
  RpcPktHdr *VAR_7;
  BOOL VAR_8;
  RPC_STATUS VAR_9;

  VAR_8 = (VAR_6 != ((void*)0) && !FUNC_3(VAR_6, &VAR_9));
  VAR_7 = FUNC_1(FUNC_0(), VAR_0,
                     sizeof(VAR_7->request) + (VAR_8 ? sizeof(UUID) : 0));
  if (VAR_7 == ((void*)0)) {
    return ((void*)0);
  }

  FUNC_2(VAR_7, VAR_1, VAR_3);
  VAR_7->common.frag_len = sizeof(VAR_7->request);
  VAR_7->request.alloc_hint = VAR_4;
  VAR_7->request.context_id = 0;
  VAR_7->request.opnum = VAR_5;
  if (VAR_8) {
    VAR_7->common.flags |= VAR_2;
    VAR_7->common.frag_len += sizeof(UUID);
    FUNC_4(&VAR_7->request + 1, VAR_6, sizeof(UUID));
  }

  return VAR_7;
}
