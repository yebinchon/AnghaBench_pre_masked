
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int aCksum; } ;
struct TYPE_8__ {TYPE_2__ treehdr; TYPE_1__* pShmhdr; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_9__ {int aCksum; } ;
typedef TYPE_4__ TreeHeader ;
struct TYPE_6__ {TYPE_4__ hdr2; TYPE_4__ hdr1; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

int FUNC_2(lsm_db *VAR_0, int VAR_1){
  TreeHeader *VAR_2 = (VAR_1==1) ? &VAR_0->pShmhdr->hdr1 : &VAR_0->pShmhdr->hdr2;
  FUNC_0( VAR_1==1 || VAR_1==2 );
  return (0==FUNC_1(VAR_0->treehdr.aCksum, VAR_2->aCksum, sizeof(u32)*2));
}
