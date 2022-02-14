
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pShmhdr; TYPE_1__* pClient; int aSnapshot; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_6__ {int aSnap2; int aSnap1; } ;
struct TYPE_5__ {scalar_t__ iId; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(lsm_db *VAR_0){
  return ( VAR_0->pClient
        && VAR_0->pClient->iId==FUNC_0(VAR_0->aSnapshot, 0)
        && VAR_0->pClient->iId==FUNC_0(VAR_0->pShmhdr->aSnap1, 0)
        && VAR_0->pClient->iId==FUNC_0(VAR_0->pShmhdr->aSnap2, 0)
  );
}
