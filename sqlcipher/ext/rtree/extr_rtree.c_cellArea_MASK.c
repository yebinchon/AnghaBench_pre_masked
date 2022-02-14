
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_8__ {int nDim; scalar_t__ eCoordType; } ;
struct TYPE_7__ {TYPE_1__* aCoord; } ;
struct TYPE_6__ {int i; scalar_t__ f; } ;
typedef scalar_t__ RtreeDValue ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static RtreeDValue FUNC_1(Rtree *VAR_1, RtreeCell *VAR_2){
  RtreeDValue VAR_3 = (RtreeDValue)1;
  FUNC_0( VAR_1->nDim>=1 && VAR_1->nDim<=5 );

  if( VAR_1->eCoordType==VAR_0 ){
    switch( VAR_1->nDim ){
      case 5: VAR_3 = VAR_2->aCoord[9].f - VAR_2->aCoord[8].f;
      case 4: VAR_3 *= VAR_2->aCoord[7].f - VAR_2->aCoord[6].f;
      case 3: VAR_3 *= VAR_2->aCoord[5].f - VAR_2->aCoord[4].f;
      case 2: VAR_3 *= VAR_2->aCoord[3].f - VAR_2->aCoord[2].f;
      default: VAR_3 *= VAR_2->aCoord[1].f - VAR_2->aCoord[0].f;
    }
  }else

  {
    switch( VAR_1->nDim ){
      case 5: VAR_3 = (i64)VAR_2->aCoord[9].i - (i64)VAR_2->aCoord[8].i;
      case 4: VAR_3 *= (i64)VAR_2->aCoord[7].i - (i64)VAR_2->aCoord[6].i;
      case 3: VAR_3 *= (i64)VAR_2->aCoord[5].i - (i64)VAR_2->aCoord[4].i;
      case 2: VAR_3 *= (i64)VAR_2->aCoord[3].i - (i64)VAR_2->aCoord[2].i;
      default: VAR_3 *= (i64)VAR_2->aCoord[1].i - (i64)VAR_2->aCoord[0].i;
    }
  }
  return VAR_3;
}
