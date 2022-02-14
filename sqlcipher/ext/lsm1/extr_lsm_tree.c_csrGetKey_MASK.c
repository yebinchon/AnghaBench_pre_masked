
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int lsm_db ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ TreeKey ;
struct TYPE_9__ {size_t iNode; size_t* aiCell; TYPE_1__** apTreeNode; int * pDb; } ;
typedef TYPE_3__ TreeCursor ;
typedef int TreeBlob ;
struct TYPE_7__ {int * aiKeyPtr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,int ,int ,int *,int*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static TreeKey *FUNC_3(TreeCursor *VAR_2, TreeBlob *VAR_3, int *VAR_4){
  TreeKey *VAR_5;
  lsm_db *VAR_6 = VAR_2->pDb;
  u32 VAR_7 = VAR_2->apTreeNode[VAR_2->iNode]->aiKeyPtr[VAR_2->aiCell[VAR_2->iNode]];

  FUNC_0( VAR_7 );
  VAR_5 = (TreeKey*)FUNC_2(VAR_6, VAR_7);
  if( !(VAR_5->flags & VAR_0) ){
    VAR_5 = FUNC_1(VAR_6, VAR_7, VAR_1, VAR_3, VAR_4);
  }

  return VAR_5;
}
