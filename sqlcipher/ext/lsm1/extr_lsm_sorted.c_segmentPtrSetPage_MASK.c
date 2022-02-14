
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int * pPg; int iPtr; scalar_t__ flags; int nCell; } ;
typedef TYPE_1__ SegmentPtr ;
typedef int Page ;


 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(SegmentPtr *VAR_0, Page *VAR_1){
  FUNC_1(VAR_0->pPg);
  if( VAR_1 ){
    int VAR_2;
    u8 *VAR_3 = FUNC_0(VAR_1, &VAR_2);
    VAR_0->nCell = FUNC_3(VAR_3, VAR_2);
    VAR_0->flags = (u16)FUNC_2(VAR_3, VAR_2);
    VAR_0->iPtr = FUNC_4(VAR_3, VAR_2);
  }
  VAR_0->pPg = VAR_1;
}
