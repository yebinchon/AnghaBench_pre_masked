
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int iFirst; scalar_t__ iLastPg; int nSize; scalar_t__ iRoot; } ;
typedef TYPE_1__ Segment ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int*) ;

__attribute__((used)) static void FUNC_2(
  u32 *VAR_0,
  int *VAR_1,
  Segment *VAR_2
){
  FUNC_0( VAR_2->iFirst==0 && VAR_2->iLastPg==0 );
  FUNC_0( VAR_2->nSize==0 && VAR_2->iRoot==0 );
  VAR_2->iFirst = FUNC_1(VAR_0, VAR_1);
  VAR_2->iLastPg = FUNC_1(VAR_0, VAR_1);
  VAR_2->iRoot = FUNC_1(VAR_0, VAR_1);
  VAR_2->nSize = (int)FUNC_1(VAR_0, VAR_1);
  FUNC_0( VAR_2->iFirst );
}
