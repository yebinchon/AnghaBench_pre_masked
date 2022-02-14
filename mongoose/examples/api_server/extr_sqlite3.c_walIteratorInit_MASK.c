
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct WalSegment {int dummy; } ;
typedef scalar_t__ ht_slot ;
struct TYPE_12__ {int nSegment; TYPE_2__* aSegment; } ;
typedef TYPE_3__ WalIterator ;
struct TYPE_10__ {scalar_t__ mxFrame; } ;
struct TYPE_13__ {TYPE_1__ hdr; scalar_t__ ckptLock; } ;
typedef TYPE_4__ Wal ;
struct TYPE_11__ {int iZero; int nEntry; int* aPgno; scalar_t__* aIndex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int,scalar_t__ volatile**,int volatile**,int*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int*,scalar_t__*,scalar_t__*,int*) ;

__attribute__((used)) static int FUNC_8(Wal *VAR_3, WalIterator **VAR_4){
  WalIterator *VAR_5;
  int VAR_6;
  u32 VAR_7;
  int VAR_8;
  int VAR_9;
  ht_slot *VAR_10;
  int VAR_11 = VAR_2;




  FUNC_0( VAR_3->ckptLock && VAR_3->hdr.mxFrame>0 );
  VAR_7 = VAR_3->hdr.mxFrame;


  VAR_6 = FUNC_4(VAR_7) + 1;
  VAR_8 = sizeof(WalIterator)
        + (VAR_6-1)*sizeof(struct WalSegment)
        + VAR_7*sizeof(ht_slot);
  VAR_5 = (WalIterator *)FUNC_3(VAR_8);
  if( !VAR_5 ){
    return VAR_1;
  }
  FUNC_1(VAR_5, 0, VAR_8);
  VAR_5->nSegment = VAR_6;




  VAR_10 = (ht_slot *)FUNC_3(
      sizeof(ht_slot) * (VAR_7>VAR_0?VAR_0:VAR_7)
  );
  if( !VAR_10 ){
    VAR_11 = VAR_1;
  }

  for(VAR_9=0; VAR_11==VAR_2 && VAR_9<VAR_6; VAR_9++){
    volatile ht_slot *VAR_12;
    u32 VAR_13;
    volatile u32 *VAR_14;

    VAR_11 = FUNC_5(VAR_3, VAR_9, &VAR_12, &VAR_14, &VAR_13);
    if( VAR_11==VAR_2 ){
      int VAR_15;
      int VAR_16;
      ht_slot *VAR_17;

      VAR_14++;
      if( (VAR_9+1)==VAR_6 ){
        VAR_16 = (int)(VAR_7 - VAR_13);
      }else{
        VAR_16 = (int)((u32*)VAR_12 - (u32*)VAR_14);
      }
      VAR_17 = &((ht_slot *)&VAR_5->aSegment[VAR_5->nSegment])[VAR_13];
      VAR_13++;

      for(VAR_15=0; VAR_15<VAR_16; VAR_15++){
        VAR_17[VAR_15] = (ht_slot)VAR_15;
      }
      FUNC_7((u32 *)VAR_14, VAR_10, VAR_17, &VAR_16);
      VAR_5->aSegment[VAR_9].iZero = VAR_13;
      VAR_5->aSegment[VAR_9].nEntry = VAR_16;
      VAR_5->aSegment[VAR_9].aIndex = VAR_17;
      VAR_5->aSegment[VAR_9].aPgno = (u32 *)VAR_14;
    }
  }
  FUNC_2(VAR_10);

  if( VAR_11!=VAR_2 ){
    FUNC_6(VAR_5);
  }
  *VAR_4 = VAR_5;
  return VAR_11;
}
