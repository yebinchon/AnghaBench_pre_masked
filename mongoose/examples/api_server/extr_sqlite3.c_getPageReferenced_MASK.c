
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nPage; int* aPgRef; } ;
typedef int Pgno ;
typedef TYPE_1__ IntegrityCk ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(IntegrityCk *VAR_0, Pgno VAR_1){
  FUNC_0( VAR_1<=VAR_0->nPage && sizeof(VAR_0->aPgRef[0])==1 );
  return (VAR_0->aPgRef[VAR_1/8] & (1 << (VAR_1 & 0x07)));
}
