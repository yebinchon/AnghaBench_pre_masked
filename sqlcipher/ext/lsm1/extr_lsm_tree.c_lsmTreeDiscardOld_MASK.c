
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ iOldShmid; scalar_t__ iUsedShmid; } ;
struct TYPE_6__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ) ;

void FUNC_2(lsm_db *VAR_3){
  FUNC_0( FUNC_1(VAR_3, VAR_2, VAR_1)
       || FUNC_1(VAR_3, VAR_0, VAR_1)
  );
  VAR_3->treehdr.iUsedShmid = VAR_3->treehdr.iOldShmid;
  VAR_3->treehdr.iOldShmid = 0;
}
