
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_33__ {int nHeight; } ;
struct TYPE_30__ {TYPE_4__ root; } ;
struct TYPE_32__ {TYPE_1__ treehdr; } ;
typedef TYPE_3__ lsm_db ;
typedef TYPE_4__ TreeRoot ;
struct TYPE_34__ {int nKey; } ;
typedef TYPE_5__ TreeKey ;
struct TYPE_36__ {int member_1; int member_0; } ;
struct TYPE_35__ {int iNode; size_t* aiCell; TYPE_7__ blob; TYPE_2__** apTreeNode; } ;
typedef TYPE_6__ TreeCursor ;
typedef TYPE_7__ TreeBlob ;
struct TYPE_31__ {int* aiKeyPtr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_6__*,int ,void**,int*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,void*,int,int*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ,TYPE_6__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_6__*,int ) ;
 int FUNC_14 (TYPE_3__*,int ,void*,int,int ,int) ;
 scalar_t__ FUNC_15 (void*,int,void*,int) ;
 int FUNC_16 (TYPE_3__*,TYPE_6__*,int,int*) ;
 TYPE_5__* FUNC_17 (TYPE_3__*,int,int ,TYPE_7__*,int*) ;

int FUNC_18(
  lsm_db *VAR_4,
  void *VAR_5, int VAR_6,
  void *VAR_7, int VAR_8
){
  int VAR_9 = VAR_1;
  int VAR_10 = 0;
  TreeRoot *VAR_11 = &VAR_4->treehdr.root;
  TreeBlob VAR_12 = {0, 0};


  FUNC_1( FUNC_15(VAR_5, VAR_6, VAR_7, VAR_8)<0 );
  FUNC_1( FUNC_2(VAR_4) );
  while( VAR_10==0 && VAR_9==VAR_1 ){
    int VAR_13;
    TreeCursor VAR_14;
    void *VAR_15; int VAR_16;

    int VAR_17 = FUNC_11(VAR_4);



    FUNC_12(VAR_4, 0, &VAR_14);
    FUNC_7(&VAR_14, VAR_5, VAR_6, &VAR_13);
    if( VAR_13<=0 && FUNC_8(&VAR_14) ) FUNC_5(&VAR_14);




    VAR_10 = 1;
    if( FUNC_8(&VAR_14) ){
      FUNC_4(&VAR_14, 0, &VAR_15, &VAR_16);
      if( FUNC_15(VAR_15, VAR_16, VAR_7, VAR_8)<0 ) VAR_10 = 0;
    }

    if( VAR_10==0 ){
      if( (u32)VAR_14.iNode==(VAR_11->nHeight-1) ){

        VAR_9 = FUNC_13(VAR_4, &VAR_14, 0);
      }else{







        u32 VAR_18;
        TreeKey *VAR_19;
        int VAR_20 = VAR_14.iNode;
        FUNC_5(&VAR_14);
        FUNC_1( (u32)VAR_14.iNode==(VAR_11->nHeight-1) );

        VAR_18 = VAR_14.apTreeNode[VAR_14.iNode]->aiKeyPtr[VAR_14.aiCell[VAR_14.iNode]];
        FUNC_6(&VAR_14);

        FUNC_16(VAR_4, &VAR_14, VAR_18, &VAR_9);
        VAR_19 = FUNC_17(VAR_4, VAR_18, VAR_3, &VAR_12, &VAR_9);
        if( VAR_19 ){
          VAR_9 = FUNC_7(&VAR_14, FUNC_0(VAR_19), VAR_19->nKey, &VAR_13);
        }
        if( VAR_9==VAR_1 ){
          FUNC_1( VAR_13==0 && VAR_14.iNode==VAR_20 );
          VAR_9 = FUNC_5(&VAR_14);
          if( VAR_9==VAR_1 ){
            VAR_9 = FUNC_13(VAR_4, &VAR_14, 0);
          }
        }
      }
    }


    FUNC_10(VAR_4, &VAR_14.blob);



    FUNC_1( VAR_10 || FUNC_11(VAR_4)==(VAR_17-1) );
  }






  if( VAR_9==VAR_1 ){
    VAR_9 = FUNC_14(VAR_4, VAR_2, VAR_5, VAR_6, 0, -1);
  }



  if( VAR_9==VAR_1 ){
    VAR_9 = FUNC_14(VAR_4, VAR_0, VAR_7, VAR_8, 0, -1);
  }





  FUNC_10(VAR_4, &VAR_12);
  FUNC_1( FUNC_2(VAR_4) );
  return VAR_9;
}
