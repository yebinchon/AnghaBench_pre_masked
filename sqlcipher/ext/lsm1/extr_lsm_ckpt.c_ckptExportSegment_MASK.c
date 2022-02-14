
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nSize; int iRoot; int iLastPg; int iFirst; } ;
typedef TYPE_1__ Segment ;
typedef int CkptBuffer ;


 int FUNC_0 (int *,int*,int ,int*) ;

__attribute__((used)) static void FUNC_1(
  Segment *VAR_0,
  CkptBuffer *VAR_1,
  int *VAR_2,
  int *VAR_3
){
  FUNC_0(VAR_1, VAR_2, VAR_0->iFirst, VAR_3);
  FUNC_0(VAR_1, VAR_2, VAR_0->iLastPg, VAR_3);
  FUNC_0(VAR_1, VAR_2, VAR_0->iRoot, VAR_3);
  FUNC_0(VAR_1, VAR_2, VAR_0->nSize, VAR_3);
}
