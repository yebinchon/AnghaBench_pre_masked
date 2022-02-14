
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int nBytesPerCell; } ;
struct TYPE_6__ {int isDirty; int * zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(Rtree *VAR_0, RtreeNode *VAR_1, int VAR_2){
  u8 *VAR_3 = &VAR_1->zData[4 + VAR_0->nBytesPerCell*VAR_2];
  u8 *VAR_4 = &VAR_3[VAR_0->nBytesPerCell];
  int VAR_5 = (FUNC_0(VAR_1) - VAR_2 - 1) * VAR_0->nBytesPerCell;
  FUNC_1(VAR_3, VAR_4, VAR_5);
  FUNC_2(&VAR_1->zData[2], FUNC_0(VAR_1)-1);
  VAR_1->isDirty = 1;
}
