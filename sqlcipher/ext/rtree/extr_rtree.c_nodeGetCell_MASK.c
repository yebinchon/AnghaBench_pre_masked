
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int nBytesPerCell; int nDim2; } ;
struct TYPE_10__ {int * aCoord; int iRowid; } ;
struct TYPE_9__ {int * zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef int RtreeCoord ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(
  Rtree *VAR_0,
  RtreeNode *VAR_1,
  int VAR_2,
  RtreeCell *VAR_3
){
  u8 *VAR_4;
  RtreeCoord *VAR_5;
  int VAR_6 = 0;
  VAR_3->iRowid = FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_4 = VAR_1->zData + (12 + VAR_0->nBytesPerCell*VAR_2);
  VAR_5 = VAR_3->aCoord;
  do{
    FUNC_1(VAR_4, &VAR_5[VAR_6]);
    FUNC_1(VAR_4+4, &VAR_5[VAR_6+1]);
    VAR_4 += 8;
    VAR_6 += 2;
  }while( VAR_6<VAR_0->nDim2 );
}
