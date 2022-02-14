
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef scalar_t__ i64 ;
typedef int WalIndexHdr ;
struct TYPE_13__ {int nBackfillAttempted; int* aReadMark; scalar_t__ nBackfill; } ;
typedef TYPE_1__ WalCkptInfo ;
struct TYPE_12__ {scalar_t__ bigEndCksum; int* aFrameCksum; int mxFrame; int nPage; scalar_t__ szPage; int aSalt; } ;
struct TYPE_14__ {int ckptLock; int writeLock; int szPage; int zWalName; TYPE_11__ hdr; int pWalFd; void* nCkpt; } ;
typedef TYPE_2__ Wal ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int FUNC_3 (TYPE_11__*,int ,int) ;
 void* FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*,int,scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int ,char*,int,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,scalar_t__*,scalar_t__,int ,int*) ;
 TYPE_1__* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int*,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_14 (TYPE_2__*,int,int) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int,int) ;
 int FUNC_17 (TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_18(Wal *VAR_16){
  int VAR_17;
  i64 VAR_18;
  u32 VAR_19[2] = {0, 0};
  int VAR_20;
  int VAR_21;







  FUNC_1( VAR_16->ckptLock==1 || VAR_16->ckptLock==0 );
  FUNC_1( VAR_8==VAR_15+1 );
  FUNC_1( VAR_9==VAR_8 );
  FUNC_1( VAR_16->writeLock );
  VAR_20 = VAR_8 + VAR_16->ckptLock;
  VAR_21 = VAR_7 - VAR_20;
  VAR_17 = FUNC_16(VAR_16, VAR_20, VAR_21);
  if( VAR_17 ){
    return VAR_17;
  }
  FUNC_0(("WAL%p: recovery begin...\n", VAR_16));

  FUNC_3(&VAR_16->hdr, 0, sizeof(WalIndexHdr));

  VAR_17 = FUNC_5(VAR_16->pWalFd, &VAR_18);
  if( VAR_17!=VAR_6 ){
    goto recovery_error;
  }

  if( VAR_18>VAR_11 ){
    u8 VAR_22[VAR_11];
    u8 *VAR_23 = 0;
    int VAR_24;
    u8 *VAR_25;
    int VAR_26;
    i64 VAR_27;
    int VAR_28;
    u32 VAR_29;
    u32 VAR_30;
    int VAR_31;


    VAR_17 = FUNC_6(VAR_16->pWalFd, VAR_22, VAR_11, 0);
    if( VAR_17!=VAR_6 ){
      goto recovery_error;
    }






    VAR_29 = FUNC_4(&VAR_22[0]);
    VAR_28 = FUNC_4(&VAR_22[8]);
    if( (VAR_29&0xFFFFFFFE)!=VAR_12
     || VAR_28&(VAR_28-1)
     || VAR_28>VAR_3
     || VAR_28<512
    ){
      goto finished;
    }
    VAR_16->hdr.bigEndCksum = (u8)(VAR_29&0x00000001);
    VAR_16->szPage = VAR_28;
    VAR_16->nCkpt = FUNC_4(&VAR_22[12]);
    FUNC_2(&VAR_16->hdr.aSalt, &VAR_22[16], 8);


    FUNC_11(VAR_16->hdr.bigEndCksum==VAR_1,
        VAR_22, VAR_11-2*4, 0, VAR_16->hdr.aFrameCksum
    );
    if( VAR_16->hdr.aFrameCksum[0]!=FUNC_4(&VAR_22[24])
     || VAR_16->hdr.aFrameCksum[1]!=FUNC_4(&VAR_22[28])
    ){
      goto finished;
    }



    VAR_30 = FUNC_4(&VAR_22[4]);
    if( VAR_30!=VAR_13 ){
      VAR_17 = VAR_2;
      goto finished;
    }


    VAR_24 = VAR_28 + VAR_10;
    VAR_23 = (u8 *)FUNC_9(VAR_24);
    if( !VAR_23 ){
      VAR_17 = VAR_4;
      goto recovery_error;
    }
    VAR_25 = &VAR_23[VAR_10];


    VAR_26 = 0;
    for(VAR_27=VAR_11; (VAR_27+VAR_24)<=VAR_18; VAR_27+=VAR_24){
      u32 VAR_32;
      u32 VAR_33;


      VAR_26++;
      VAR_17 = FUNC_6(VAR_16->pWalFd, VAR_23, VAR_24, VAR_27);
      if( VAR_17!=VAR_6 ) break;
      VAR_31 = FUNC_13(VAR_16, &VAR_32, &VAR_33, VAR_25, VAR_23);
      if( !VAR_31 ) break;
      VAR_17 = FUNC_14(VAR_16, VAR_26, VAR_32);
      if( VAR_17!=VAR_6 ) break;


      if( VAR_33 ){
        VAR_16->hdr.mxFrame = VAR_26;
        VAR_16->hdr.nPage = VAR_33;
        VAR_16->hdr.szPage = (u16)((VAR_28&0xff00) | (VAR_28>>16));
        FUNC_10( VAR_28<=32768 );
        FUNC_10( VAR_28>=65536 );
        VAR_19[0] = VAR_16->hdr.aFrameCksum[0];
        VAR_19[1] = VAR_16->hdr.aFrameCksum[1];
      }
    }

    FUNC_7(VAR_23);
  }

finished:
  if( VAR_17==VAR_6 ){
    volatile WalCkptInfo *VAR_34;
    int VAR_35;
    VAR_16->hdr.aFrameCksum[0] = VAR_19[0];
    VAR_16->hdr.aFrameCksum[1] = VAR_19[1];
    FUNC_15(VAR_16);





    VAR_34 = FUNC_12(VAR_16);
    VAR_34->nBackfill = 0;
    VAR_34->nBackfillAttempted = VAR_16->hdr.mxFrame;
    VAR_34->aReadMark[0] = 0;
    for(VAR_35=1; VAR_35<VAR_14; VAR_35++) VAR_34->aReadMark[VAR_35] = VAR_0;
    if( VAR_16->hdr.mxFrame ) VAR_34->aReadMark[1] = VAR_16->hdr.mxFrame;






    if( VAR_16->hdr.nPage ){
      FUNC_8(VAR_5,
          "recovered %d frames from WAL file %s",
          VAR_16->hdr.mxFrame, VAR_16->zWalName
      );
    }
  }

recovery_error:
  FUNC_0(("WAL%p: recovery %s\n", VAR_16, VAR_17 ? "failed" : "ok"));
  FUNC_17(VAR_16, VAR_20, VAR_21);
  return VAR_17;
}
