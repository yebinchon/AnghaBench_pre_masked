
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int treehdr; TYPE_2__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
typedef int TreeHeader ;
struct TYPE_7__ {int hdr2; int hdr1; } ;
typedef TYPE_2__ ShmHeader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(lsm_db *VAR_1){
  int VAR_2 = VAR_0;
  TreeHeader VAR_3;
  ShmHeader *VAR_4 = VAR_1->pShmhdr;




  if( FUNC_0(&VAR_4->hdr1, &VAR_4->hdr2, sizeof(TreeHeader)) ){
    if( FUNC_2(&VAR_4->hdr1) ){
      FUNC_1(&VAR_4->hdr2, &VAR_4->hdr1, sizeof(TreeHeader));
    }else{
      FUNC_1(&VAR_4->hdr1, &VAR_4->hdr2, sizeof(TreeHeader));
    }
  }



  FUNC_1(&VAR_3, &VAR_1->treehdr, sizeof(TreeHeader));



  VAR_2 = FUNC_4(VAR_1);


  if( VAR_2==VAR_0 ){
    VAR_2 = FUNC_3(VAR_1);
  }

  FUNC_1(&VAR_1->treehdr, &VAR_3, sizeof(TreeHeader));
  return VAR_2;
}
