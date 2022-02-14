
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ writeLock; scalar_t__ exclusiveMode; scalar_t__ readLock; scalar_t__ lockError; } ;
typedef TYPE_1__ Wal ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(Wal *VAR_4, int VAR_5){
  int VAR_6;
  FUNC_1( VAR_4->writeLock==0 );
  FUNC_1( VAR_4->exclusiveMode!=VAR_2 || VAR_5==-1 );







  FUNC_1( VAR_4->readLock>=0 || VAR_4->lockError );
  FUNC_1( VAR_4->readLock>=0 || (VAR_5<=0 && VAR_4->exclusiveMode==0) );

  if( VAR_5==0 ){
    if( VAR_4->exclusiveMode!=VAR_3 ){
      VAR_4->exclusiveMode = VAR_3;
      if( FUNC_2(VAR_4, FUNC_0(VAR_4->readLock))!=VAR_0 ){
        VAR_4->exclusiveMode = VAR_1;
      }
      VAR_6 = VAR_4->exclusiveMode==VAR_3;
    }else{

      VAR_6 = 0;
    }
  }else if( VAR_5>0 ){
    FUNC_1( VAR_4->exclusiveMode==VAR_3 );
    FUNC_1( VAR_4->readLock>=0 );
    FUNC_3(VAR_4, FUNC_0(VAR_4->readLock));
    VAR_4->exclusiveMode = VAR_1;
    VAR_6 = 1;
  }else{
    VAR_6 = VAR_4->exclusiveMode==VAR_3;
  }
  return VAR_6;
}
