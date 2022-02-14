
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int iZero; int* aHash; int * aPgno; } ;
typedef TYPE_2__ WalHashLoc ;
struct TYPE_7__ {int mxFrame; } ;
struct TYPE_9__ {int writeLock; size_t nWiData; int* apWiData; TYPE_1__ hdr; } ;
typedef TYPE_3__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,size_t,TYPE_2__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(Wal *VAR_2){
  WalHashLoc VAR_3;
  int VAR_4 = 0;
  int VAR_5;
  int VAR_6;

  FUNC_0( VAR_2->writeLock );
  FUNC_2( VAR_2->hdr.mxFrame==VAR_0-1 );
  FUNC_2( VAR_2->hdr.mxFrame==VAR_0 );
  FUNC_2( VAR_2->hdr.mxFrame==VAR_0+1 );

  if( VAR_2->hdr.mxFrame==0 ) return;





  FUNC_0( VAR_2->nWiData>FUNC_3(VAR_2->hdr.mxFrame) );
  FUNC_0( VAR_2->apWiData[FUNC_3(VAR_2->hdr.mxFrame)] );
  FUNC_5(VAR_2, FUNC_3(VAR_2->hdr.mxFrame), &VAR_3);




  VAR_4 = VAR_2->hdr.mxFrame - VAR_3.iZero;
  FUNC_0( VAR_4>0 );
  for(VAR_6=0; VAR_6<VAR_1; VAR_6++){
    if( VAR_3.aHash[VAR_6]>VAR_4 ){
      VAR_3.aHash[VAR_6] = 0;
    }
  }




  VAR_5 = (int)((char *)VAR_3.aHash - (char *)&VAR_3.aPgno[VAR_4+1]);
  FUNC_1((void *)&VAR_3.aPgno[VAR_4+1], 0, VAR_5);
}
