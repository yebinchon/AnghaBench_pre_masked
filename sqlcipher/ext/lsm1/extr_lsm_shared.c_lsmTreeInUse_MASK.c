
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ iUsedShmid; } ;
struct TYPE_6__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__,int*) ;

int FUNC_1(lsm_db *VAR_1, u32 VAR_2, int *VAR_3){
  if( VAR_1->treehdr.iUsedShmid==VAR_2 ){
    *VAR_3 = 1;
    return VAR_0;
  }
  return FUNC_0(VAR_1, 0, VAR_2, VAR_3);
}
