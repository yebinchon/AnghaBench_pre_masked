
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_2__ {int nBlock; scalar_t__ iInUse; } ;
typedef TYPE_1__ DbTruncateCtx ;



__attribute__((used)) static int FUNC_0(void *VAR_0, int VAR_1, i64 VAR_2){
  DbTruncateCtx *VAR_3 = (DbTruncateCtx *)VAR_0;
  if( VAR_1!=VAR_3->nBlock || (VAR_3->iInUse>=0 && VAR_2>=VAR_3->iInUse) ) return 1;
  VAR_3->nBlock--;
  return 0;
}
