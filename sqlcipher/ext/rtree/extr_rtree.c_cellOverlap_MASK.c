
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nDim2; } ;
struct TYPE_6__ {int * aCoord; } ;
typedef scalar_t__ RtreeDValue ;
typedef TYPE_1__ RtreeCell ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static RtreeDValue FUNC_3(
  Rtree *VAR_1,
  RtreeCell *VAR_2,
  RtreeCell *VAR_3,
  int VAR_4
){
  int VAR_5;
  RtreeDValue VAR_6 = VAR_0;
  for(VAR_5=0; VAR_5<VAR_4; VAR_5++){
    int VAR_7;
    RtreeDValue VAR_8 = (RtreeDValue)1;
    for(VAR_7=0; VAR_7<VAR_1->nDim2; VAR_7+=2){
      RtreeDValue VAR_9, VAR_10;
      VAR_9 = FUNC_1(FUNC_0(VAR_2->aCoord[VAR_7]), FUNC_0(VAR_3[VAR_5].aCoord[VAR_7]));
      VAR_10 = FUNC_2(FUNC_0(VAR_2->aCoord[VAR_7+1]), FUNC_0(VAR_3[VAR_5].aCoord[VAR_7+1]));
      if( VAR_10<VAR_9 ){
        VAR_8 = (RtreeDValue)0;
        break;
      }else{
        VAR_8 = VAR_8 * (VAR_10-VAR_9);
      }
    }
    VAR_6 += VAR_8;
  }
  return VAR_6;
}
