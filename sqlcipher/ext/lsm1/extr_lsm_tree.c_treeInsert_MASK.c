
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_13__ {int nHeight; void* iRoot; } ;
struct TYPE_14__ {TYPE_1__ root; } ;
struct TYPE_15__ {TYPE_2__ treehdr; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_16__ {int* aiKeyPtr; void** aiChildPtr; scalar_t__ iV2; } ;
typedef TYPE_4__ TreeNode ;
struct TYPE_17__ {size_t iNode; int* aiCell; TYPE_4__** apTreeNode; } ;
typedef TYPE_5__ TreeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_4__*,int ,int) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,void**,int*) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*,void*) ;

__attribute__((used)) static int FUNC_4(
  lsm_db *VAR_2,
  TreeCursor *VAR_3,
  u32 VAR_4,
  u32 VAR_5,
  u32 VAR_6,
  int VAR_7
){
  int VAR_8 = VAR_0;
  TreeNode *VAR_9 = VAR_3->apTreeNode[VAR_3->iNode];




  FUNC_0( VAR_9->aiKeyPtr[1] );
  if( VAR_9->aiKeyPtr[0] && VAR_9->aiKeyPtr[2] ){
    u32 VAR_10; TreeNode *VAR_11;
    u32 VAR_12; TreeNode *VAR_13;

    VAR_11 = FUNC_2(VAR_2, &VAR_10, &VAR_8);
    VAR_13 = FUNC_2(VAR_2, &VAR_12, &VAR_8);
    if( VAR_8 ) return VAR_8;

    VAR_11->aiChildPtr[1] = FUNC_1(VAR_9, VAR_1, 0);
    VAR_11->aiKeyPtr[1] = VAR_9->aiKeyPtr[0];
    VAR_11->aiChildPtr[2] = FUNC_1(VAR_9, VAR_1, 1);

    VAR_13->aiChildPtr[1] = FUNC_1(VAR_9, VAR_1, 2);
    VAR_13->aiKeyPtr[1] = VAR_9->aiKeyPtr[2];
    VAR_13->aiChildPtr[2] = FUNC_1(VAR_9, VAR_1, 3);

    if( VAR_3->iNode==0 ){

      u32 VAR_14; TreeNode *VAR_15;

      VAR_15 = FUNC_2(VAR_2, &VAR_14, &VAR_8);
      VAR_15->aiKeyPtr[1] = VAR_9->aiKeyPtr[1];
      VAR_15->aiChildPtr[1] = VAR_10;
      VAR_15->aiChildPtr[2] = VAR_12;

      VAR_2->treehdr.root.iRoot = VAR_14;
      VAR_2->treehdr.root.nHeight++;
    }else{

      VAR_3->iNode--;
      VAR_8 = FUNC_4(VAR_2, VAR_3,
          VAR_10, VAR_9->aiKeyPtr[1], VAR_12, VAR_3->aiCell[VAR_3->iNode]
      );
    }

    FUNC_0( VAR_11->iV2==0 );
    FUNC_0( VAR_13->iV2==0 );
    switch( VAR_7 ){
      case 0:
        VAR_11->aiKeyPtr[0] = VAR_5;
        VAR_11->aiChildPtr[0] = VAR_4;
        if( VAR_6 ) VAR_11->aiChildPtr[1] = VAR_6;
        break;
      case 1:
        VAR_11->aiChildPtr[3] = (VAR_6 ? VAR_6 : VAR_11->aiChildPtr[2]);
        VAR_11->aiKeyPtr[2] = VAR_5;
        VAR_11->aiChildPtr[2] = VAR_4;
        break;
      case 2:
        VAR_13->aiKeyPtr[0] = VAR_5;
        VAR_13->aiChildPtr[0] = VAR_4;
        if( VAR_6 ) VAR_13->aiChildPtr[1] = VAR_6;
        break;
      case 3:
        VAR_13->aiChildPtr[3] = (VAR_6 ? VAR_6 : VAR_13->aiChildPtr[2]);
        VAR_13->aiKeyPtr[2] = VAR_5;
        VAR_13->aiChildPtr[2] = VAR_4;
        break;
    }

  }else{
    TreeNode *VAR_16;
    u32 *VAR_17;
    u32 *VAR_18;
    u32 VAR_19 = 0;
    u32 VAR_20 = 0;
    int VAR_21;


    VAR_16 = FUNC_2(VAR_2, &VAR_20, &VAR_8);
    if( VAR_8 ) return VAR_8;

    VAR_17 = VAR_16->aiKeyPtr;
    VAR_18 = VAR_16->aiChildPtr;

    for(VAR_21=0; VAR_21<VAR_7; VAR_21++){
      if( VAR_9->aiKeyPtr[VAR_21] ){
        *(VAR_17++) = VAR_9->aiKeyPtr[VAR_21];
        *(VAR_18++) = FUNC_1(VAR_9, VAR_1, VAR_21);
      }
    }

    *VAR_17++ = VAR_5;
    *VAR_18++ = VAR_4;

    VAR_19 = VAR_6;
    for(VAR_21=VAR_7; VAR_21<3; VAR_21++){
      if( VAR_9->aiKeyPtr[VAR_21] ){
        *(VAR_17++) = VAR_9->aiKeyPtr[VAR_21];
        *(VAR_18++) = VAR_19 ? VAR_19 : FUNC_1(VAR_9, VAR_1, VAR_21);
        VAR_19 = 0;
      }
    }

    if( VAR_19 ){
      *VAR_18 = VAR_19;
    }else{
      *VAR_18 = FUNC_1(VAR_9, VAR_1,
          (VAR_9->aiKeyPtr[2] ? 3 : 2)
      );
    }
    VAR_3->iNode--;
    VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_20);
  }

  return VAR_8;
}
