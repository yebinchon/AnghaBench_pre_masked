
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct WalSegment {int dummy; } ;
typedef int sqlite3_int64 ;
typedef scalar_t__ ht_slot ;
struct TYPE_14__ {int nSegment; TYPE_2__* aSegment; } ;
typedef TYPE_3__ WalIterator ;
struct TYPE_15__ {int iZero; scalar_t__ aPgno; scalar_t__ aHash; } ;
typedef TYPE_4__ WalHashLoc ;
struct TYPE_12__ {scalar_t__ mxFrame; } ;
struct TYPE_16__ {TYPE_1__ hdr; scalar_t__ ckptLock; } ;
typedef TYPE_5__ Wal ;
struct TYPE_13__ {size_t iZero; int nEntry; int* aPgno; scalar_t__* aIndex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,int,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int*,scalar_t__*,scalar_t__*,int*) ;

__attribute__((used)) static int FUNC_8(Wal *VAR_3, u32 VAR_4, WalIterator **VAR_5){
  WalIterator *VAR_6;
  int VAR_7;
  u32 VAR_8;
  sqlite3_int64 VAR_9;
  int VAR_10;
  ht_slot *VAR_11;
  int VAR_12 = VAR_2;




  FUNC_0( VAR_3->ckptLock && VAR_3->hdr.mxFrame>0 );
  VAR_8 = VAR_3->hdr.mxFrame;


  VAR_7 = FUNC_4(VAR_8) + 1;
  VAR_9 = sizeof(WalIterator)
        + (VAR_7-1)*sizeof(struct WalSegment)
        + VAR_8*sizeof(ht_slot);
  VAR_6 = (WalIterator *)FUNC_3(VAR_9);
  if( !VAR_6 ){
    return VAR_1;
  }
  FUNC_1(VAR_6, 0, VAR_9);
  VAR_6->nSegment = VAR_7;




  VAR_11 = (ht_slot *)FUNC_3(
      sizeof(ht_slot) * (VAR_8>VAR_0?VAR_0:VAR_8)
  );
  if( !VAR_11 ){
    VAR_12 = VAR_1;
  }

  for(VAR_10=FUNC_4(VAR_4+1); VAR_12==VAR_2 && VAR_10<VAR_7; VAR_10++){
    WalHashLoc VAR_13;

    VAR_12 = FUNC_5(VAR_3, VAR_10, &VAR_13);
    if( VAR_12==VAR_2 ){
      int VAR_14;
      int VAR_15;
      ht_slot *VAR_16;

      VAR_13.aPgno++;
      if( (VAR_10+1)==VAR_7 ){
        VAR_15 = (int)(VAR_8 - VAR_13.iZero);
      }else{
        VAR_15 = (int)((u32*)VAR_13.aHash - (u32*)VAR_13.aPgno);
      }
      VAR_16 = &((ht_slot *)&VAR_6->aSegment[VAR_6->nSegment])[VAR_13.iZero];
      VAR_13.iZero++;

      for(VAR_14=0; VAR_14<VAR_15; VAR_14++){
        VAR_16[VAR_14] = (ht_slot)VAR_14;
      }
      FUNC_7((u32 *)VAR_13.aPgno, VAR_11, VAR_16, &VAR_15);
      VAR_6->aSegment[VAR_10].iZero = VAR_13.iZero;
      VAR_6->aSegment[VAR_10].nEntry = VAR_15;
      VAR_6->aSegment[VAR_10].aIndex = VAR_16;
      VAR_6->aSegment[VAR_10].aPgno = (u32 *)VAR_13.aPgno;
    }
  }
  FUNC_2(VAR_11);

  if( VAR_12!=VAR_2 ){
    FUNC_6(VAR_6);
    VAR_6 = 0;
  }
  *VAR_5 = VAR_6;
  return VAR_12;
}
