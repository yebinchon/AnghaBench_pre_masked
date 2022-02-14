
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_47__ {int iNodeSize; int iDepth; } ;
struct TYPE_46__ {scalar_t__ iRowid; } ;
struct TYPE_45__ {int iNode; int isDirty; int* zData; struct TYPE_45__* pParent; int nRef; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_6 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_1__*,int*) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*,int,TYPE_1__*,TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (int) ;
 int FUNC_16 (TYPE_3__*,scalar_t__,TYPE_1__*,int) ;
 int FUNC_17 (int*,int ) ;

__attribute__((used)) static int FUNC_18(
  Rtree *VAR_2,
  RtreeNode *VAR_3,
  RtreeCell *VAR_4,
  int VAR_5
){
  int VAR_6;
  int VAR_7 = 0;

  int VAR_8 = VAR_1;
  int VAR_9 = FUNC_1(VAR_3);
  RtreeCell *VAR_10;
  int *VAR_11;

  RtreeNode *VAR_12 = 0;
  RtreeNode *VAR_13 = 0;

  RtreeCell VAR_14;
  RtreeCell VAR_15;




  VAR_10 = FUNC_15((sizeof(RtreeCell)+sizeof(int))*(VAR_9+1));
  if( !VAR_10 ){
    VAR_8 = VAR_0;
    goto splitnode_out;
  }
  VAR_11 = (int *)&VAR_10[VAR_9+1];
  FUNC_3(VAR_11, 0, sizeof(int)*(VAR_9+1));
  for(VAR_6=0; VAR_6<VAR_9; VAR_6++){
    FUNC_4(VAR_2, VAR_3, VAR_6, &VAR_10[VAR_6]);
  }
  FUNC_11(VAR_2, VAR_3);
  FUNC_2(&VAR_10[VAR_9], VAR_4, sizeof(RtreeCell));
  VAR_9++;

  if( VAR_3->iNode==1 ){
    VAR_13 = FUNC_6(VAR_2, VAR_3);
    VAR_12 = FUNC_6(VAR_2, VAR_3);
    VAR_2->iDepth++;
    VAR_3->isDirty = 1;
    FUNC_17(VAR_3->zData, VAR_2->iDepth);
  }else{
    VAR_12 = VAR_3;
    VAR_13 = FUNC_6(VAR_2, VAR_12->pParent);
    VAR_12->nRef++;
  }

  if( !VAR_12 || !VAR_13 ){
    VAR_8 = VAR_0;
    goto splitnode_out;
  }

  FUNC_3(VAR_12->zData, 0, VAR_2->iNodeSize);
  FUNC_3(VAR_13->zData, 0, VAR_2->iNodeSize);

  VAR_8 = FUNC_13(VAR_2, VAR_10, VAR_9, VAR_12, VAR_13,
                         &VAR_14, &VAR_15);
  if( VAR_8!=VAR_1 ){
    goto splitnode_out;
  }






  if( VAR_1!=(VAR_8 = FUNC_10(VAR_2, VAR_13))
   || (0==VAR_12->iNode && VAR_1!=(VAR_8 = FUNC_10(VAR_2, VAR_12)))
  ){
    goto splitnode_out;
  }

  VAR_15.iRowid = VAR_13->iNode;
  VAR_14.iRowid = VAR_12->iNode;

  if( VAR_3->iNode==1 ){
    VAR_8 = FUNC_12(VAR_2, VAR_12->pParent, &VAR_14, VAR_5+1);
    if( VAR_8!=VAR_1 ){
      goto splitnode_out;
    }
  }else{
    RtreeNode *VAR_16 = VAR_12->pParent;
    int VAR_17;
    VAR_8 = FUNC_8(VAR_2, VAR_12, &VAR_17);
    if( VAR_8==VAR_1 ){
      FUNC_7(VAR_2, VAR_16, &VAR_14, VAR_17);
      VAR_8 = FUNC_0(VAR_2, VAR_16, &VAR_14);
    }
    if( VAR_8!=VAR_1 ){
      goto splitnode_out;
    }
  }
  if( (VAR_8 = FUNC_12(VAR_2, VAR_13->pParent, &VAR_15, VAR_5+1)) ){
    goto splitnode_out;
  }

  for(VAR_6=0; VAR_6<FUNC_1(VAR_13); VAR_6++){
    i64 VAR_18 = FUNC_5(VAR_2, VAR_13, VAR_6);
    VAR_8 = FUNC_16(VAR_2, VAR_18, VAR_13, VAR_5);
    if( VAR_18==VAR_4->iRowid ){
      VAR_7 = 1;
    }
    if( VAR_8!=VAR_1 ){
      goto splitnode_out;
    }
  }
  if( VAR_3->iNode==1 ){
    for(VAR_6=0; VAR_6<FUNC_1(VAR_12); VAR_6++){
      i64 VAR_19 = FUNC_5(VAR_2, VAR_12, VAR_6);
      VAR_8 = FUNC_16(VAR_2, VAR_19, VAR_12, VAR_5);
      if( VAR_8!=VAR_1 ){
        goto splitnode_out;
      }
    }
  }else if( VAR_7==0 ){
    VAR_8 = FUNC_16(VAR_2, VAR_4->iRowid, VAR_12, VAR_5);
  }

  if( VAR_8==VAR_1 ){
    VAR_8 = FUNC_9(VAR_2, VAR_13);
    VAR_13 = 0;
  }
  if( VAR_8==VAR_1 ){
    VAR_8 = FUNC_9(VAR_2, VAR_12);
    VAR_12 = 0;
  }

splitnode_out:
  FUNC_9(VAR_2, VAR_13);
  FUNC_9(VAR_2, VAR_12);
  FUNC_14(VAR_10);
  return VAR_8;
}
