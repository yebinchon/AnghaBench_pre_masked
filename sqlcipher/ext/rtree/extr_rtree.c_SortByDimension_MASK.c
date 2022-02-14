
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* aCoord; } ;
typedef scalar_t__ RtreeDValue ;
typedef TYPE_1__ RtreeCell ;
typedef int Rtree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void FUNC_3(
  Rtree *VAR_0,
  int *VAR_1,
  int VAR_2,
  int VAR_3,
  RtreeCell *VAR_4,
  int *VAR_5
){
  if( VAR_2>1 ){

    int VAR_6 = 0;
    int VAR_7 = 0;

    int VAR_8 = VAR_2/2;
    int VAR_9 = VAR_2-VAR_8;
    int *VAR_10 = VAR_1;
    int *VAR_11 = &VAR_1[VAR_8];

    FUNC_3(VAR_0, VAR_10, VAR_8, VAR_3, VAR_4, VAR_5);
    FUNC_3(VAR_0, VAR_11, VAR_9, VAR_3, VAR_4, VAR_5);

    FUNC_2(VAR_5, VAR_10, sizeof(int)*VAR_8);
    VAR_10 = VAR_5;
    while( VAR_6<VAR_8 || VAR_7<VAR_9 ){
      RtreeDValue VAR_12 = FUNC_0(VAR_4[VAR_10[VAR_6]].aCoord[VAR_3*2]);
      RtreeDValue VAR_13 = FUNC_0(VAR_4[VAR_10[VAR_6]].aCoord[VAR_3*2+1]);
      RtreeDValue VAR_14 = FUNC_0(VAR_4[VAR_11[VAR_7]].aCoord[VAR_3*2]);
      RtreeDValue VAR_15 = FUNC_0(VAR_4[VAR_11[VAR_7]].aCoord[VAR_3*2+1]);
      if( (VAR_6!=VAR_8) && ((VAR_7==VAR_9)
       || (VAR_12<VAR_14)
       || (VAR_12==VAR_14 && VAR_13<VAR_15)
      )){
        VAR_1[VAR_6+VAR_7] = VAR_10[VAR_6];
        VAR_6++;
      }else{
        VAR_1[VAR_6+VAR_7] = VAR_11[VAR_7];
        VAR_7++;
      }
    }
  }
}
