
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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,size_t,TYPE_2__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(Wal *VAR_2){
  WalHashLoc VAR_3;
  int VAR_4 = 0;
  int VAR_5;
  int VAR_6;
  int VAR_7;

  FUNC_1( VAR_2->writeLock );
  FUNC_3( VAR_2->hdr.mxFrame==VAR_0-1 );
  FUNC_3( VAR_2->hdr.mxFrame==VAR_0 );
  FUNC_3( VAR_2->hdr.mxFrame==VAR_0+1 );

  if( VAR_2->hdr.mxFrame==0 ) return;





  FUNC_1( VAR_2->nWiData>FUNC_4(VAR_2->hdr.mxFrame) );
  FUNC_1( VAR_2->apWiData[FUNC_4(VAR_2->hdr.mxFrame)] );
  VAR_7 = FUNC_6(VAR_2, FUNC_4(VAR_2->hdr.mxFrame), &VAR_3);
  if( FUNC_0(VAR_7) ) return;




  VAR_4 = VAR_2->hdr.mxFrame - VAR_3.iZero;
  FUNC_1( VAR_4>0 );
  for(VAR_6=0; VAR_6<VAR_1; VAR_6++){
    if( VAR_3.aHash[VAR_6]>VAR_4 ){
      VAR_3.aHash[VAR_6] = 0;
    }
  }




  VAR_5 = (int)((char *)VAR_3.aHash - (char *)&VAR_3.aPgno[VAR_4+1]);
  FUNC_2((void *)&VAR_3.aPgno[VAR_4+1], 0, VAR_5);
}
