
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_2__ {scalar_t__ iInUse; scalar_t__ bNotOne; int iRet; } ;
typedef TYPE_1__ FindFreeblockCtx ;



__attribute__((used)) static int FUNC_0(void *VAR_0, int VAR_1, i64 VAR_2){
  FindFreeblockCtx *VAR_3 = (FindFreeblockCtx *)VAR_0;
  if( VAR_2<VAR_3->iInUse && (VAR_1!=1 || VAR_3->bNotOne==0) ){
    VAR_3->iRet = VAR_1;
    return 1;
  }
  return 0;
}
