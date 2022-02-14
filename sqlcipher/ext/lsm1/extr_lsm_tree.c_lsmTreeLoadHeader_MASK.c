
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int treehdr; TYPE_2__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
typedef int TreeHeader ;
struct TYPE_6__ {int hdr2; int hdr1; } ;
typedef TYPE_2__ ShmHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(lsm_db *VAR_3, int *VAR_4){
  int VAR_5 = VAR_0;
  while( (VAR_5--)>0 ){
    ShmHeader *VAR_6 = VAR_3->pShmhdr;

    FUNC_1(&VAR_3->treehdr, &VAR_6->hdr1, sizeof(TreeHeader));
    if( FUNC_2(&VAR_3->treehdr) ){
      if( VAR_4 ) *VAR_4 = 1;
      return VAR_1;
    }
    FUNC_1(&VAR_3->treehdr, &VAR_6->hdr2, sizeof(TreeHeader));
    if( FUNC_2(&VAR_3->treehdr) ){
      if( VAR_4 ) *VAR_4 = 2;
      return VAR_1;
    }

    FUNC_0(VAR_3);
  }
  return VAR_2;
}
