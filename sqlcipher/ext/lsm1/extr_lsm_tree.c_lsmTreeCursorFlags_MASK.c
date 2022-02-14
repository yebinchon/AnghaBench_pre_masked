
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ TreeKey ;
struct TYPE_7__ {size_t iNode; size_t* aiCell; TYPE_1__** apTreeNode; int pDb; } ;
typedef TYPE_3__ TreeCursor ;
struct TYPE_5__ {int * aiKeyPtr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(TreeCursor *VAR_2){
  int VAR_3 = 0;
  if( VAR_2 && VAR_2->iNode>=0 ){
    int VAR_4 = VAR_1;
    TreeKey *VAR_5 = (TreeKey *)FUNC_1(VAR_2->pDb,
        VAR_2->apTreeNode[VAR_2->iNode]->aiKeyPtr[VAR_2->aiCell[VAR_2->iNode]]
    );
    FUNC_0( VAR_4==VAR_1 );
    VAR_3 = (VAR_5->flags & ~VAR_0);
  }
  return VAR_3;
}
