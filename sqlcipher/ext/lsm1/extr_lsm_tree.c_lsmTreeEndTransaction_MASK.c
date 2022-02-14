
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int aCksum; } ;
struct TYPE_7__ {int rollback; int pEnv; TYPE_3__ treehdr; TYPE_2__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
typedef int TreeHeader ;
struct TYPE_8__ {scalar_t__ bWriter; int hdr1; int hdr2; } ;
typedef TYPE_2__ ShmHeader ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;

int FUNC_4(lsm_db *VAR_1, int VAR_2){
  ShmHeader *VAR_3 = VAR_1->pShmhdr;

  FUNC_3(&VAR_1->treehdr, VAR_1->treehdr.aCksum);
  FUNC_2(&VAR_3->hdr2, &VAR_1->treehdr, sizeof(TreeHeader));
  FUNC_1(VAR_1);
  FUNC_2(&VAR_3->hdr1, &VAR_1->treehdr, sizeof(TreeHeader));
  VAR_3->bWriter = 0;
  FUNC_0(VAR_1->pEnv, &VAR_1->rollback);

  return VAR_0;
}
