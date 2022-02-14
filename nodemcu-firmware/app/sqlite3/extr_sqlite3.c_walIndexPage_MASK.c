
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int volatile u32 ;
struct TYPE_3__ {int nWiData; scalar_t__ exclusiveMode; int volatile** apWiData; int readOnly; int writeLock; int pDbFd; } ;
typedef TYPE_1__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int ,void volatile**) ;
 scalar_t__ FUNC_4 (void*,int) ;

__attribute__((used)) static int FUNC_5(Wal *VAR_6, int VAR_7, volatile u32 **VAR_8){
  int VAR_9 = VAR_1;


  if( VAR_6->nWiData<=VAR_7 ){
    int VAR_10 = sizeof(u32*)*(VAR_7+1);
    volatile u32 **VAR_11;
    VAR_11 = (volatile u32 **)FUNC_4((void *)VAR_6->apWiData, VAR_10);
    if( !VAR_11 ){
      *VAR_8 = 0;
      return VAR_0;
    }
    FUNC_1((void*)&VAR_11[VAR_6->nWiData], 0,
           sizeof(u32*)*(VAR_7+1-VAR_6->nWiData));
    VAR_6->apWiData = VAR_11;
    VAR_6->nWiData = VAR_7+1;
  }


  if( VAR_6->apWiData[VAR_7]==0 ){
    if( VAR_6->exclusiveMode==VAR_4 ){
      VAR_6->apWiData[VAR_7] = (u32 volatile *)FUNC_2(VAR_3);
      if( !VAR_6->apWiData[VAR_7] ) VAR_9 = VAR_0;
    }else{
      VAR_9 = FUNC_3(VAR_6->pDbFd, VAR_7, VAR_3,
          VAR_6->writeLock, (void volatile **)&VAR_6->apWiData[VAR_7]
      );
      if( VAR_9==VAR_2 ){
        VAR_6->readOnly |= VAR_5;
        VAR_9 = VAR_1;
      }
    }
  }

  *VAR_8 = VAR_6->apWiData[VAR_7];
  FUNC_0( VAR_7==0 || *VAR_8 || VAR_9!=VAR_1 );
  return VAR_9;
}
