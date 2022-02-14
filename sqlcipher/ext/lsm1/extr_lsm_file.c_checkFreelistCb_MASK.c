
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_2__ {int nBlock; scalar_t__* aUsed; } ;
typedef TYPE_1__ CheckFreelistCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, int VAR_2, i64 VAR_3){
  CheckFreelistCtx *VAR_4 = (CheckFreelistCtx *)VAR_1;

  FUNC_0( VAR_2>=1 );
  FUNC_0( VAR_2<=VAR_4->nBlock );
  FUNC_0( VAR_4->aUsed[VAR_2-1]==0 );
  VAR_4->aUsed[VAR_2-1] = VAR_0;
  return 0;
}
