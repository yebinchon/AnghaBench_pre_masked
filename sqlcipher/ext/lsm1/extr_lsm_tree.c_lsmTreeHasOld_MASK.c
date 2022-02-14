
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iOldShmid; } ;
struct TYPE_5__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;



int FUNC_0(lsm_db *VAR_0){
  return VAR_0->treehdr.iOldShmid!=0;
}
