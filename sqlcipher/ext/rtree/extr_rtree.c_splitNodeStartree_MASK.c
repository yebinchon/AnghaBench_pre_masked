
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_10__ {int nDim; } ;
typedef int RtreeNode ;
typedef scalar_t__ RtreeDValue ;
typedef int RtreeCell ;
typedef TYPE_1__ Rtree ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int*,int,int,int *,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int *,int) ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int**,int ,int) ;
 int FUNC_8 (TYPE_1__*,int *,int *) ;
 int FUNC_9 (int**) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(
  Rtree *VAR_3,
  RtreeCell *VAR_4,
  int VAR_5,
  RtreeNode *VAR_6,
  RtreeNode *VAR_7,
  RtreeCell *VAR_8,
  RtreeCell *VAR_9
){
  int **VAR_10;
  int *VAR_11;
  int VAR_12;

  int VAR_13 = 0;
  int VAR_14 = 0;
  RtreeDValue VAR_15 = VAR_0;

  sqlite3_int64 VAR_16 = (VAR_3->nDim+1)*(sizeof(int*)+VAR_5*sizeof(int));

  VAR_10 = (int **)FUNC_10(VAR_16);
  if( !VAR_10 ){
    return VAR_1;
  }

  VAR_11 = &((int *)&VAR_10[VAR_3->nDim])[VAR_3->nDim*VAR_5];
  FUNC_7(VAR_10, 0, VAR_16);
  for(VAR_12=0; VAR_12<VAR_3->nDim; VAR_12++){
    int VAR_17;
    VAR_10[VAR_12] = &((int *)&VAR_10[VAR_3->nDim])[VAR_12*VAR_5];
    for(VAR_17=0; VAR_17<VAR_5; VAR_17++){
      VAR_10[VAR_12][VAR_17] = VAR_17;
    }
    FUNC_1(VAR_3, VAR_10[VAR_12], VAR_5, VAR_12, VAR_4, VAR_11);
  }

  for(VAR_12=0; VAR_12<VAR_3->nDim; VAR_12++){
    RtreeDValue VAR_18 = VAR_0;
    RtreeDValue VAR_19 = VAR_0;
    RtreeDValue VAR_20 = VAR_0;
    int VAR_21 = 0;
    int VAR_22;

    for(
      VAR_22=FUNC_0(VAR_3);
      VAR_22<=(VAR_5-FUNC_0(VAR_3));
      VAR_22++
    ){
      RtreeCell VAR_23;
      RtreeCell VAR_24;
      int VAR_25;
      RtreeDValue VAR_26;
      RtreeDValue VAR_27;

      FUNC_6(&VAR_23, &VAR_4[VAR_10[VAR_12][0]], sizeof(RtreeCell));
      FUNC_6(&VAR_24, &VAR_4[VAR_10[VAR_12][VAR_5-1]], sizeof(RtreeCell));
      for(VAR_25=1; VAR_25<(VAR_5-1); VAR_25++){
        if( VAR_25<VAR_22 ){
          FUNC_5(VAR_3, &VAR_23, &VAR_4[VAR_10[VAR_12][VAR_25]]);
        }else{
          FUNC_5(VAR_3, &VAR_24, &VAR_4[VAR_10[VAR_12][VAR_25]]);
        }
      }
      VAR_18 += FUNC_3(VAR_3, &VAR_23);
      VAR_18 += FUNC_3(VAR_3, &VAR_24);
      VAR_26 = FUNC_4(VAR_3, &VAR_23, &VAR_24, 1);
      VAR_27 = FUNC_2(VAR_3, &VAR_23) + FUNC_2(VAR_3, &VAR_24);
      if( (VAR_22==FUNC_0(VAR_3))
       || (VAR_26<VAR_19)
       || (VAR_26==VAR_19 && VAR_27<VAR_20)
      ){
        VAR_21 = VAR_22;
        VAR_19 = VAR_26;
        VAR_20 = VAR_27;
      }
    }

    if( VAR_12==0 || VAR_18<VAR_15 ){
      VAR_13 = VAR_12;
      VAR_15 = VAR_18;
      VAR_14 = VAR_21;
    }
  }

  FUNC_6(VAR_8, &VAR_4[VAR_10[VAR_13][0]], sizeof(RtreeCell));
  FUNC_6(VAR_9, &VAR_4[VAR_10[VAR_13][VAR_14]], sizeof(RtreeCell));
  for(VAR_12=0; VAR_12<VAR_5; VAR_12++){
    RtreeNode *VAR_28 = (VAR_12<VAR_14)?VAR_6:VAR_7;
    RtreeCell *VAR_29 = (VAR_12<VAR_14)?VAR_8:VAR_9;
    RtreeCell *VAR_30 = &VAR_4[VAR_10[VAR_13][VAR_12]];
    FUNC_8(VAR_3, VAR_28, VAR_30);
    FUNC_5(VAR_3, VAR_29, VAR_30);
  }

  FUNC_9(VAR_10);
  return VAR_2;
}
