
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_36__ {int cksum1; int cksum0; TYPE_1__* aRegion; } ;
struct TYPE_31__ {TYPE_7__ log; } ;
struct TYPE_33__ {scalar_t__ bRoTrans; int pEnv; TYPE_3__* pShmhdr; TYPE_2__ treehdr; } ;
typedef TYPE_4__ lsm_db ;
struct TYPE_34__ {int n; scalar_t__ z; } ;
struct TYPE_35__ {int iOff; int iBuf; TYPE_5__ buf; int cksum1; int cksum0; } ;
struct TYPE_32__ {int aSnap2; } ;
struct TYPE_30__ {scalar_t__ iStart; int iEnd; } ;
typedef TYPE_5__ LsmString ;
typedef TYPE_6__ LogReader ;
typedef TYPE_7__ DbLog ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int,int**,int*) ;
 int FUNC_2 (TYPE_6__*,int*,int*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int*,int*) ;
 int FUNC_4 (TYPE_4__*,TYPE_7__*,int,TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,int*,int*) ;
 int FUNC_6 (TYPE_6__*,int) ;
 int FUNC_7 (int ,TYPE_7__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (TYPE_4__*,int*,int,int*,int) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*,int*,int,int*,int) ;

int FUNC_17(lsm_db *VAR_1){
  LsmString VAR_2;
  LsmString VAR_3;
  LogReader VAR_4;
  int VAR_5 = VAR_0;
  int VAR_6 = 0;
  int VAR_7;
  int VAR_8 = 0;
  DbLog *VAR_9;
  int VAR_10;

  VAR_5 = FUNC_11(VAR_1, &VAR_10);
  if( VAR_5!=VAR_0 ) return VAR_5;

  VAR_5 = FUNC_15(VAR_1);
  if( VAR_5!=VAR_0 ) return VAR_5;

  VAR_9 = &VAR_1->treehdr.log;
  FUNC_7(VAR_1->pShmhdr->aSnap2, VAR_9);

  FUNC_4(VAR_1, VAR_9, 1, &VAR_4);
  FUNC_13(&VAR_2, VAR_1->pEnv);
  FUNC_13(&VAR_3, VAR_1->pEnv);





  if( VAR_10 ){
    for(VAR_7=0; VAR_7<2 && VAR_5==VAR_0; VAR_7++){
      int VAR_11 = 0;

      while( VAR_5==VAR_0 && !VAR_11 ){
        u8 VAR_12 = 0;
        FUNC_2(&VAR_4, &VAR_12, &VAR_5);

        switch( VAR_12 ){
          case 131:
            break;

          case 130: {
            int VAR_13;
            FUNC_5(&VAR_4, &VAR_2, &VAR_13, &VAR_5);
            FUNC_1(&VAR_4, &VAR_2, VAR_13, 0, &VAR_5);
            break;
          }

          case 134:
          case 133:
          case 129:
          case 128: {
            int VAR_14;
            int VAR_15;
            u8 *VAR_16;
            FUNC_5(&VAR_4, &VAR_2, &VAR_14, &VAR_5);
            FUNC_5(&VAR_4, &VAR_3, &VAR_15, &VAR_5);

            if( VAR_12==128 || VAR_12==133 ){
              FUNC_3(&VAR_4, &VAR_2, &VAR_11, &VAR_5);
            }else{
              VAR_11 = FUNC_6(&VAR_4, VAR_14+VAR_15);
            }
            if( VAR_11 ) break;

            FUNC_1(&VAR_4, &VAR_2, VAR_14, 0, &VAR_5);
            FUNC_1(&VAR_4, &VAR_3, VAR_15, &VAR_16, &VAR_5);
            if( VAR_7==1 && VAR_5==VAR_0 ){
              if( VAR_12==129 || VAR_12==128 ){
                VAR_5 = FUNC_16(VAR_1, (u8 *)VAR_2, VAR_14, VAR_16, VAR_15);
              }else{
                VAR_5 = FUNC_14(VAR_1, (u8 *)VAR_2, VAR_14, VAR_16, VAR_15);
              }
            }
            break;
          }

          case 136:
          case 135: {
            int VAR_17; u8 *VAR_18;
            FUNC_5(&VAR_4, &VAR_2, &VAR_17, &VAR_5);

            if( VAR_12==135 ){
              FUNC_3(&VAR_4, &VAR_2, &VAR_11, &VAR_5);
            }else{
              VAR_11 = FUNC_6(&VAR_4, VAR_17);
            }
            if( VAR_11 ) break;

            FUNC_1(&VAR_4, &VAR_2, VAR_17, &VAR_18, &VAR_5);
            if( VAR_7==1 && VAR_5==VAR_0 ){
              VAR_5 = FUNC_16(VAR_1, VAR_18, VAR_17, ((void*)0), -1);
            }
            break;
          }

          case 137:
            FUNC_3(&VAR_4, &VAR_2, &VAR_11, &VAR_5);
            if( VAR_11==0 ){
              VAR_6++;
              FUNC_0( VAR_6>0 || VAR_7==1 );
              if( VAR_6==0 ) VAR_11 = 1;
            }
            break;

          case 132: {
            int VAR_19 = 0;
            FUNC_5(&VAR_4, &VAR_2, &VAR_19, &VAR_5);
            if( VAR_5==VAR_0 ){
              if( VAR_7==1 ){
                if( VAR_9->aRegion[2].iStart==0 ){
                  FUNC_0( VAR_9->aRegion[1].iStart==0 );
                  VAR_9->aRegion[1].iEnd = VAR_4.iOff;
                }else{
                  FUNC_0( VAR_9->aRegion[0].iStart==0 );
                  VAR_9->aRegion[0].iStart = VAR_9->aRegion[2].iStart;
                  VAR_9->aRegion[0].iEnd = VAR_4.iOff-VAR_4.buf.n+VAR_4.iBuf;
                }
                VAR_9->aRegion[2].iStart = VAR_19;
              }else{
                if( (VAR_8++)==2 ){
                  VAR_11 = 1;
                }
              }

              VAR_4.iOff = VAR_19;
              VAR_4.buf.n = VAR_4.iBuf;
            }
            break;
          }

          default:

            VAR_11 = 1;
            break;
        }
      }

      if( VAR_5==VAR_0 && VAR_7==0 ){
        if( VAR_6==0 ){
          if( VAR_9->aRegion[2].iStart==0 ){
            VAR_7 = 1;
          }else{
            VAR_9->aRegion[2].iStart = 0;
            VAR_7 = -1;
            FUNC_8(VAR_1);
          }
        }
        FUNC_4(VAR_1, VAR_9, 0, &VAR_4);
        VAR_6 = VAR_6 * -1;
      }
    }
  }


  if( VAR_5==VAR_0 ){
    VAR_9->aRegion[2].iEnd = VAR_4.iOff - VAR_4.buf.n + VAR_4.iBuf;
    VAR_9->cksum0 = VAR_4.cksum0;
    VAR_9->cksum1 = VAR_4.cksum1;
  }

  if( VAR_5==VAR_0 ){
    VAR_5 = FUNC_9(VAR_1);
  }else{
    FUNC_9(VAR_1);
  }

  if( VAR_1->bRoTrans ){
    FUNC_10(VAR_1);
  }

  FUNC_12(&VAR_2);
  FUNC_12(&VAR_3);
  FUNC_12(&VAR_4.buf);
  return VAR_5;
}
