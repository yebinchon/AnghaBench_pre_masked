
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ eCoordType; int nDim2; } ;
struct TYPE_8__ {TYPE_1__* aCoord; } ;
struct TYPE_7__ {void* i; void* f; } ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,void*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(Rtree *VAR_1, RtreeCell *VAR_2, RtreeCell *VAR_3){
  int VAR_4 = 0;
  if( VAR_1->eCoordType==VAR_0 ){
    do{
      VAR_2->aCoord[VAR_4].f = FUNC_1(VAR_2->aCoord[VAR_4].f, VAR_3->aCoord[VAR_4].f);
      VAR_2->aCoord[VAR_4+1].f = FUNC_0(VAR_2->aCoord[VAR_4+1].f, VAR_3->aCoord[VAR_4+1].f);
      VAR_4 += 2;
    }while( VAR_4<VAR_1->nDim2 );
  }else{
    do{
      VAR_2->aCoord[VAR_4].i = FUNC_1(VAR_2->aCoord[VAR_4].i, VAR_3->aCoord[VAR_4].i);
      VAR_2->aCoord[VAR_4+1].i = FUNC_0(VAR_2->aCoord[VAR_4+1].i, VAR_3->aCoord[VAR_4+1].i);
      VAR_4 += 2;
    }while( VAR_4<VAR_1->nDim2 );
  }
}
