
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct WalSegment {size_t iNext; size_t nEntry; int* aPgno; size_t* aIndex; int iZero; } ;
struct TYPE_3__ {int iPrior; int nSegment; struct WalSegment* aSegment; } ;
typedef TYPE_1__ WalIterator ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
  WalIterator *VAR_0,
  u32 *VAR_1,
  u32 *VAR_2
){
  u32 VAR_3;
  u32 VAR_4 = 0xFFFFFFFF;
  int VAR_5;

  VAR_3 = VAR_0->iPrior;
  FUNC_0( VAR_3<0xffffffff );
  for(VAR_5=VAR_0->nSegment-1; VAR_5>=0; VAR_5--){
    struct WalSegment *VAR_6 = &VAR_0->aSegment[VAR_5];
    while( VAR_6->iNext<VAR_6->nEntry ){
      u32 VAR_7 = VAR_6->aPgno[VAR_6->aIndex[VAR_6->iNext]];
      if( VAR_7>VAR_3 ){
        if( VAR_7<VAR_4 ){
          VAR_4 = VAR_7;
          *VAR_2 = VAR_6->iZero + VAR_6->aIndex[VAR_6->iNext];
        }
        break;
      }
      VAR_6->iNext++;
    }
  }

  *VAR_1 = VAR_0->iPrior = VAR_4;
  return (VAR_4==0xFFFFFFFF);
}
