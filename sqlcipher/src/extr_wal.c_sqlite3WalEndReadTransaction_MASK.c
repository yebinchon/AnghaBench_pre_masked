
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int readLock; } ;
typedef TYPE_1__ Wal ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(Wal *VAR_0){
  FUNC_1(VAR_0);
  if( VAR_0->readLock>=0 ){
    FUNC_2(VAR_0, FUNC_0(VAR_0->readLock));
    VAR_0->readLock = -1;
  }
}
