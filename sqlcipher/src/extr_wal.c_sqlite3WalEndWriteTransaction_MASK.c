
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ truncateOnCommit; scalar_t__ iReCksum; scalar_t__ writeLock; } ;
typedef TYPE_1__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

int FUNC_1(Wal *VAR_2){
  if( VAR_2->writeLock ){
    FUNC_0(VAR_2, VAR_1, 1);
    VAR_2->writeLock = 0;
    VAR_2->iReCksum = 0;
    VAR_2->truncateOnCommit = 0;
  }
  return VAR_0;
}
