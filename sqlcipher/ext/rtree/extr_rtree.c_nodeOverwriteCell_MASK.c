
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int nBytesPerCell; int nDim2; } ;
struct TYPE_8__ {int * aCoord; int iRowid; } ;
struct TYPE_7__ {int isDirty; int * zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(
  Rtree *VAR_0,
  RtreeNode *VAR_1,
  RtreeCell *VAR_2,
  int VAR_3
){
  int VAR_4;
  u8 *VAR_5 = &VAR_1->zData[4 + VAR_0->nBytesPerCell*VAR_3];
  VAR_5 += FUNC_1(VAR_5, VAR_2->iRowid);
  for(VAR_4=0; VAR_4<VAR_0->nDim2; VAR_4++){
    VAR_5 += FUNC_0(VAR_5, &VAR_2->aCoord[VAR_4]);
  }
  VAR_1->isDirty = 1;
}
