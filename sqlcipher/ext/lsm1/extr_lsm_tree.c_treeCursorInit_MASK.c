
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int root; int oldroot; } ;
struct TYPE_8__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_9__ {int iNode; int * pRoot; TYPE_2__* pDb; } ;
typedef TYPE_3__ TreeCursor ;


 int FUNC_0 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_1(lsm_db *VAR_0, int VAR_1, TreeCursor *VAR_2){
  FUNC_0(VAR_2, 0, sizeof(TreeCursor));
  VAR_2->pDb = VAR_0;
  if( VAR_1 ){
    VAR_2->pRoot = &VAR_0->treehdr.oldroot;
  }else{
    VAR_2->pRoot = &VAR_0->treehdr.root;
  }
  VAR_2->iNode = -1;
}
