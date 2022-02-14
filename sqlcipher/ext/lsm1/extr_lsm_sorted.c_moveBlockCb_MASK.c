
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_2__ {int iFrom; int iSeen; } ;
typedef TYPE_1__ MoveBlockCtx ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1, i64 VAR_2){
  MoveBlockCtx *VAR_3 = (MoveBlockCtx *)VAR_0;
  FUNC_0( VAR_3->iFrom==0 );
  if( VAR_1==(VAR_3->iSeen-1) ){
    VAR_3->iSeen = VAR_1;
    return 0;
  }
  VAR_3->iFrom = VAR_3->iSeen-1;
  return 1;
}
