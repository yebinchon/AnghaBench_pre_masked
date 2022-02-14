
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {size_t* aHash; scalar_t__ iZero; scalar_t__* aPgno; } ;
typedef TYPE_2__ WalHashLoc ;
struct TYPE_8__ {scalar_t__ mxFrame; } ;
struct TYPE_10__ {scalar_t__ readLock; scalar_t__ bShmUnreliable; scalar_t__ minFrame; scalar_t__ lockError; TYPE_1__ hdr; } ;
typedef TYPE_3__ Wal ;
typedef scalar_t__ Pgno ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_5 (int) ;

int FUNC_6(
  Wal *VAR_4,
  Pgno VAR_5,
  u32 *VAR_6
){
  u32 VAR_7 = 0;
  u32 VAR_8 = VAR_4->hdr.mxFrame;
  int VAR_9;
  int VAR_10;


  FUNC_0( VAR_4->readLock>=0 || VAR_4->lockError );







  if( VAR_8==0 || (VAR_4->readLock==0 && VAR_4->bShmUnreliable==0) ){
    *VAR_6 = 0;
    return VAR_3;
  }
  VAR_10 = FUNC_1(VAR_4->minFrame);
  for(VAR_9=FUNC_1(VAR_8); VAR_9>=VAR_10; VAR_9--){
    WalHashLoc VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;

    VAR_14 = FUNC_4(VAR_4, VAR_9, &VAR_11);
    if( VAR_14!=VAR_3 ){
      return VAR_14;
    }
    VAR_13 = VAR_1;
    for(VAR_12=FUNC_3(VAR_5); VAR_11.aHash[VAR_12]; VAR_12=FUNC_5(VAR_12)){
      u32 VAR_15 = VAR_11.aHash[VAR_12] + VAR_11.iZero;
      if( VAR_15<=VAR_8 && VAR_15>=VAR_4->minFrame
       && VAR_11.aPgno[VAR_11.aHash[VAR_12]]==VAR_5 ){
        FUNC_0( VAR_15>VAR_7 || VAR_0 );
        VAR_7 = VAR_15;
      }
      if( (VAR_13--)==0 ){
        return VAR_2;
      }
    }
    if( VAR_7 ) break;
  }
  *VAR_6 = VAR_7;
  return VAR_3;
}
