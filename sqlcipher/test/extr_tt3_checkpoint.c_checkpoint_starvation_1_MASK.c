
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nMaxFrame; int member_1; int member_0; } ;
struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ Error ;
typedef TYPE_2__ CheckpointStarvationCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_2){
  Error VAR_3 = {0};
  CheckpointStarvationCtx VAR_4 = { VAR_1, 0 };
  FUNC_0(VAR_2, &VAR_4);
  if( VAR_4.nMaxFrame<(VAR_0*10) ){
    FUNC_2(&VAR_3, "WAL failed to grow - %d frames", VAR_4.nMaxFrame);
  }
  FUNC_1(&VAR_3);
}
