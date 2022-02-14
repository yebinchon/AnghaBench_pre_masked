
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* pLevel; int * pSeg; } ;
struct TYPE_9__ {int nRight; int * aRhs; } ;
struct TYPE_8__ {int nPtr; TYPE_6__* aPtr; TYPE_1__* pDb; } ;
struct TYPE_7__ {int pEnv; } ;
typedef int SegmentPtr ;
typedef TYPE_2__ MultiCursor ;
typedef TYPE_3__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_6__* FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(MultiCursor *VAR_2, Level *VAR_3){
  int VAR_4;
  int VAR_5 = VAR_3->nRight;

  FUNC_0( VAR_3->nRight>0 );
  FUNC_0( VAR_2->aPtr==0 );
  VAR_2->aPtr = FUNC_1(VAR_2->pDb->pEnv, sizeof(SegmentPtr) * VAR_5);
  if( !VAR_2->aPtr ) return VAR_0;
  VAR_2->nPtr = VAR_5;

  for(VAR_4=0; VAR_4<VAR_5; VAR_4++){
    VAR_2->aPtr[VAR_4].pSeg = &VAR_3->aRhs[VAR_4];
    VAR_2->aPtr[VAR_4].pLevel = VAR_3;
  }

  return VAR_1;
}
