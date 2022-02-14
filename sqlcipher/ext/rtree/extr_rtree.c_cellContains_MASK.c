
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ eCoordType; int nDim2; } ;
struct TYPE_8__ {TYPE_1__* aCoord; } ;
struct TYPE_7__ {scalar_t__ f; scalar_t__ i; } ;
typedef TYPE_1__ RtreeCoord ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(Rtree *VAR_1, RtreeCell *VAR_2, RtreeCell *VAR_3){
  int VAR_4;
  int VAR_5 = (VAR_1->eCoordType==VAR_0);
  for(VAR_4=0; VAR_4<VAR_1->nDim2; VAR_4+=2){
    RtreeCoord *VAR_6 = &VAR_2->aCoord[VAR_4];
    RtreeCoord *VAR_7 = &VAR_3->aCoord[VAR_4];
    if( (!VAR_5 && (VAR_7[0].f<VAR_6[0].f || VAR_7[1].f>VAR_6[1].f))
     || ( VAR_5 && (VAR_7[0].i<VAR_6[0].i || VAR_7[1].i>VAR_6[1].i))
    ){
      return 0;
    }
  }
  return 1;
}
