
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u32 ;
typedef int lsm_db ;
struct TYPE_8__ {int* aiKeyPtr; } ;
typedef TYPE_1__ TreeNode ;
struct TYPE_9__ {int* aiKeyPtr; } ;
typedef TYPE_2__ TreeLeaf ;
struct TYPE_10__ {size_t iNode; int * aiCell; TYPE_1__** apTreeNode; } ;
typedef TYPE_3__ TreeCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *,void**,int*) ;
 int FUNC_2 (int *,TYPE_3__*,void*,int,void*,int ) ;
 int FUNC_3 (int *,TYPE_3__*,void*) ;

__attribute__((used)) static int FUNC_4(
  lsm_db *VAR_1,
  TreeCursor *VAR_2,
  u32 VAR_3,
  int VAR_4
){
  int VAR_5 = VAR_0;
  TreeNode *VAR_6 = VAR_2->apTreeNode[VAR_2->iNode];
  TreeLeaf *VAR_7;
  u32 VAR_8;

  FUNC_0( VAR_4>=0 && VAR_4<=4 );
  FUNC_0( VAR_2->iNode>0 );
  FUNC_0( VAR_6->aiKeyPtr[1] );

  VAR_2->iNode--;

  VAR_7 = FUNC_1(VAR_1, &VAR_8, &VAR_5);
  if( VAR_7 ){
    if( VAR_6->aiKeyPtr[0] && VAR_6->aiKeyPtr[2] ){

      TreeLeaf *VAR_9;
      u32 VAR_10;
      VAR_9 = FUNC_1(VAR_1, &VAR_10, &VAR_5);
      if( VAR_9 ){
        FUNC_0( VAR_5==VAR_0 );
        VAR_7->aiKeyPtr[1] = VAR_6->aiKeyPtr[0];
        VAR_9->aiKeyPtr[1] = VAR_6->aiKeyPtr[2];
        switch( VAR_4 ){
          case 0: VAR_7->aiKeyPtr[0] = VAR_3; break;
          case 1: VAR_7->aiKeyPtr[2] = VAR_3; break;
          case 2: VAR_9->aiKeyPtr[0] = VAR_3; break;
          case 3: VAR_9->aiKeyPtr[2] = VAR_3; break;
        }

        VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_8, VAR_6->aiKeyPtr[1], VAR_10,
            VAR_2->aiCell[VAR_2->iNode]
        );
      }
    }else{
      int VAR_11 = 0;
      int VAR_12;
      for(VAR_12=0; VAR_12<4; VAR_12++){
        if( VAR_12==VAR_4 ) VAR_7->aiKeyPtr[VAR_11++] = VAR_3;
        if( VAR_12<3 && VAR_6->aiKeyPtr[VAR_12] ){
          VAR_7->aiKeyPtr[VAR_11++] = VAR_6->aiKeyPtr[VAR_12];
        }
      }
      VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_8);
    }
  }

  return VAR_5;
}
