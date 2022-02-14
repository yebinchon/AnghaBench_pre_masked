
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {int bDoTruncate; scalar_t__ nPage; TYPE_1__* pPage1; int mutex; } ;
struct TYPE_10__ {int * aData; } ;
typedef scalar_t__ Pgno ;
typedef int MemPage ;
typedef TYPE_2__ BtShared ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int **,scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int **,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int *,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(BtShared *VAR_8, Pgno VAR_9, Pgno VAR_10, int VAR_11){
  Pgno VAR_12;
  int VAR_13;

  FUNC_3( FUNC_9(VAR_8->mutex) );
  FUNC_3( VAR_10>VAR_9 );

  if( !FUNC_1(VAR_8, VAR_10) && VAR_10!=FUNC_0(VAR_8) ){
    u8 VAR_14;
    Pgno VAR_15;

    VAR_12 = FUNC_5(&VAR_8->pPage1->aData[36]);
    if( VAR_12==0 ){
      return VAR_6;
    }

    VAR_13 = FUNC_6(VAR_8, VAR_10, &VAR_14, &VAR_15);
    if( VAR_13!=VAR_7 ){
      return VAR_13;
    }
    if( VAR_14==VAR_4 ){
      return VAR_5;
    }

    if( VAR_14==VAR_3 ){
      if( VAR_11==0 ){





        Pgno VAR_16;
        MemPage *VAR_17;
        VAR_13 = FUNC_2(VAR_8, &VAR_17, &VAR_16, VAR_10, VAR_1);
        if( VAR_13!=VAR_7 ){
          return VAR_13;
        }
        FUNC_3( VAR_16==VAR_10 );
        FUNC_7(VAR_17);
      }
    } else {
      Pgno VAR_18;
      MemPage *VAR_19;
      u8 VAR_20 = VAR_0;
      Pgno VAR_21 = 0;

      VAR_13 = FUNC_4(VAR_8, VAR_10, &VAR_19, 0, 0);
      if( VAR_13!=VAR_7 ){
        return VAR_13;
      }
      if( VAR_11==0 ){
        VAR_20 = VAR_2;
        VAR_21 = VAR_9;
      }
      do {
        MemPage *VAR_22;
        VAR_13 = FUNC_2(VAR_8, &VAR_22, &VAR_18, VAR_21, VAR_20);
        if( VAR_13!=VAR_7 ){
          FUNC_7(VAR_19);
          return VAR_13;
        }
        FUNC_7(VAR_22);
      }while( VAR_11 && VAR_18>VAR_9 );
      FUNC_3( VAR_18<VAR_10 );

      VAR_13 = FUNC_8(VAR_8, VAR_19, VAR_14, VAR_15, VAR_18, VAR_11);
      FUNC_7(VAR_19);
      if( VAR_13!=VAR_7 ){
        return VAR_13;
      }
    }
  }

  if( VAR_11==0 ){
    do {
      VAR_10--;
    }while( VAR_10==FUNC_0(VAR_8) || FUNC_1(VAR_8, VAR_10) );
    VAR_8->bDoTruncate = 1;
    VAR_8->nPage = VAR_10;
  }
  return VAR_7;
}
