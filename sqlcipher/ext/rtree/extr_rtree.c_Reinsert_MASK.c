
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_34__ {int nDim; } ;
struct TYPE_33__ {scalar_t__ iRowid; int * aCoord; } ;
struct TYPE_32__ {int iNode; } ;
typedef TYPE_1__ RtreeNode ;
typedef int RtreeDValue ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int,TYPE_1__**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int*,int,int*,int*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_13 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_14 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(
  Rtree *VAR_4,
  RtreeNode *VAR_5,
  RtreeCell *VAR_6,
  int VAR_7
){
  int *VAR_8;
  int *VAR_9;
  RtreeCell *VAR_10;
  RtreeDValue *VAR_11;
  int VAR_12;
  RtreeDValue VAR_13[VAR_0];
  int VAR_14;
  int VAR_15;
  int VAR_16 = VAR_3;
  int VAR_17;

  FUNC_7(VAR_13, 0, sizeof(RtreeDValue)*VAR_0);

  VAR_12 = FUNC_2(VAR_5)+1;
  VAR_17 = (VAR_12+1)&(~1);




  VAR_10 = (RtreeCell *)FUNC_16(VAR_17 * (
    sizeof(RtreeCell) +
    sizeof(int) +
    sizeof(int) +
    sizeof(RtreeDValue)
  ));
  if( !VAR_10 ){
    return VAR_2;
  }
  VAR_8 = (int *)&VAR_10[VAR_17];
  VAR_9 = (int *)&VAR_8[VAR_17];
  VAR_11 = (RtreeDValue *)&VAR_9[VAR_17];

  for(VAR_15=0; VAR_15<VAR_12; VAR_15++){
    if( VAR_15==(VAR_12-1) ){
      FUNC_6(&VAR_10[VAR_15], VAR_6, sizeof(RtreeCell));
    }else{
      FUNC_8(VAR_4, VAR_5, VAR_15, &VAR_10[VAR_15]);
    }
    VAR_8[VAR_15] = VAR_15;
    for(VAR_14=0; VAR_14<VAR_4->nDim; VAR_14++){
      VAR_13[VAR_14] += FUNC_1(VAR_10[VAR_15].aCoord[VAR_14*2]);
      VAR_13[VAR_14] += FUNC_1(VAR_10[VAR_15].aCoord[VAR_14*2+1]);
    }
  }
  for(VAR_14=0; VAR_14<VAR_4->nDim; VAR_14++){
    VAR_13[VAR_14] = (VAR_13[VAR_14]/(VAR_12*(RtreeDValue)2));
  }

  for(VAR_15=0; VAR_15<VAR_12; VAR_15++){
    VAR_11[VAR_15] = VAR_1;
    for(VAR_14=0; VAR_14<VAR_4->nDim; VAR_14++){
      RtreeDValue VAR_18 = (FUNC_1(VAR_10[VAR_15].aCoord[VAR_14*2+1]) -
                               FUNC_1(VAR_10[VAR_15].aCoord[VAR_14*2]));
      VAR_11[VAR_15] += (VAR_18-VAR_13[VAR_14])*(VAR_18-VAR_13[VAR_14]);
    }
  }

  FUNC_4(VAR_8, VAR_12, VAR_11, VAR_9);
  FUNC_11(VAR_4, VAR_5);

  for(VAR_15=0; VAR_16==VAR_3 && VAR_15<(VAR_12-(FUNC_3(VAR_4)+1)); VAR_15++){
    RtreeCell *VAR_19 = &VAR_10[VAR_8[VAR_15]];
    FUNC_9(VAR_4, VAR_5, VAR_19);
    if( VAR_19->iRowid==VAR_6->iRowid ){
      if( VAR_7==0 ){
        VAR_16 = FUNC_13(VAR_4, VAR_19->iRowid, VAR_5->iNode);
      }else{
        VAR_16 = FUNC_12(VAR_4, VAR_19->iRowid, VAR_5->iNode);
      }
    }
  }
  if( VAR_16==VAR_3 ){
    VAR_16 = FUNC_5(VAR_4, VAR_5);
  }
  for(; VAR_16==VAR_3 && VAR_15<VAR_12; VAR_15++){



    RtreeNode *VAR_20;
    RtreeCell *VAR_21 = &VAR_10[VAR_8[VAR_15]];
    VAR_16 = FUNC_0(VAR_4, VAR_21, VAR_7, &VAR_20);
    if( VAR_16==VAR_3 ){
      int VAR_22;
      VAR_16 = FUNC_14(VAR_4, VAR_20, VAR_21, VAR_7);
      VAR_22 = FUNC_10(VAR_4, VAR_20);
      if( VAR_16==VAR_3 ){
        VAR_16 = VAR_22;
      }
    }
  }

  FUNC_15(VAR_10);
  return VAR_16;
}
