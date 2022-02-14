
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef int lsm_env ;
struct TYPE_15__ {int member_2; int member_1; int member_0; } ;
struct TYPE_17__ {int iPg; int nDepth; int eType; void* pKey; int nKey; TYPE_3__ blob; TYPE_4__* aPg; int iPtr; int pFS; TYPE_1__* pSeg; } ;
struct TYPE_16__ {int iCell; int * pPage; } ;
struct TYPE_14__ {scalar_t__ iPg; int iCell; } ;
struct TYPE_13__ {int pRedirect; scalar_t__ iRoot; } ;
typedef TYPE_1__ Segment ;
typedef int Page ;
typedef TYPE_2__ MergeInput ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_3__ LsmBlob ;
typedef TYPE_4__ BtreePg ;
typedef TYPE_5__ BtreeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int,scalar_t__) ;
 int * FUNC_3 (int *,int*) ;
 int FUNC_4 (int ,TYPE_1__*,int,int **) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int *,int,int*) ;
 int FUNC_8 (TYPE_1__*,int *,int,scalar_t__*,int*,void**,int*,TYPE_3__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int (*) (void*,int,void*,int),int,void*,int,int,void*,int) ;

__attribute__((used)) static int FUNC_15(
  BtreeCursor *VAR_3,
  int (*VAR_4)(void *, int, void *, int),
  MergeInput *VAR_5
){
  int VAR_6 = VAR_0;

  if( VAR_5->iPg ){
    lsm_env *VAR_7 = FUNC_5(VAR_3->pFS);
    int VAR_8;
    LsmPgno VAR_9;
    int VAR_10;
    Segment *VAR_11 = VAR_3->pSeg;


    VAR_9 = VAR_5->iPg;
    VAR_10 = (VAR_5->iCell & 0x00FF);
    VAR_8 = (VAR_5->iCell >> 8) - 1;


    FUNC_0( VAR_3->aPg==0 );
    VAR_3->aPg = (BtreePg *)FUNC_7(VAR_7, sizeof(BtreePg) * VAR_10, &VAR_6);


    if( VAR_6==VAR_0 ){
      Page **VAR_12 = &VAR_3->aPg[VAR_10-1].pPage;
      VAR_3->iPg = VAR_10-1;
      VAR_3->nDepth = VAR_10;
      VAR_3->aPg[VAR_3->iPg].iCell = VAR_8;
      VAR_6 = FUNC_4(VAR_3->pFS, VAR_11, VAR_9, VAR_12);
    }


    if( VAR_6==VAR_0 && VAR_10>1 ){
      LsmBlob VAR_13 = {0,0,0};
      void *VAR_14;
      int VAR_15;
      int VAR_16;
      int VAR_17 = 0;
      int VAR_18 = (int)VAR_11->iRoot;
      Page *VAR_19 = VAR_3->aPg[VAR_10-1].pPage;

      if( FUNC_12(VAR_19)==0 ){



        FUNC_0( VAR_8==-1 );
        VAR_16 = 1000;
        VAR_14 = 0;
        VAR_15 = 0;
      }else{
        LsmPgno VAR_20;
        VAR_6 = FUNC_8(VAR_11, VAR_19,
            0, &VAR_20, &VAR_16, &VAR_14, &VAR_15, &VAR_3->blob
        );
      }

      do {
        Page *VAR_21;
        VAR_6 = FUNC_4(VAR_3->pFS, VAR_11, VAR_18, &VAR_21);
        FUNC_0( VAR_6==VAR_0 || VAR_21==0 );
        if( VAR_6==VAR_0 ){
          u8 *VAR_22;
          int VAR_23;
          int VAR_24;
          int VAR_25;
          int VAR_26;

          VAR_22 = FUNC_3(VAR_21, &VAR_23);
          FUNC_0( (FUNC_9(VAR_22, VAR_23) & VAR_2) );

          VAR_18 = (int)FUNC_11(VAR_22, VAR_23);
          VAR_26 = FUNC_10(VAR_22, VAR_23);
          VAR_25 = VAR_26-1;
          VAR_24 = 0;

          while( VAR_25>=VAR_24 ){
            int VAR_27 = (VAR_24+VAR_25)/2;
            void *VAR_28; int VAR_29;
            int VAR_30;
            LsmPgno VAR_31;
            int VAR_32;

            VAR_6 = FUNC_8(
                VAR_11, VAR_21, VAR_27, &VAR_31, &VAR_30, &VAR_28, &VAR_29, &VAR_13
            );
            if( VAR_6!=VAR_0 ) break;

            VAR_32 = FUNC_14(
                VAR_4, VAR_16, VAR_14, VAR_15, VAR_30, VAR_28, VAR_29
            );
            FUNC_0( VAR_32!=0 );

            if( VAR_32<0 ){
              VAR_18 = (int)VAR_31;
              VAR_26 = VAR_27;
              VAR_25 = VAR_27-1;
            }else{
              VAR_24 = VAR_27+1;
            }
          }

          VAR_3->aPg[VAR_17].pPage = VAR_21;
          VAR_3->aPg[VAR_17].iCell = VAR_26;
          VAR_17++;
          FUNC_0( VAR_17!=VAR_10-1
               || FUNC_6(VAR_3->pFS, VAR_11->pRedirect, VAR_18)==VAR_9
          );
        }
      }while( VAR_6==VAR_0 && VAR_17<(VAR_10-1) );
      FUNC_13(&VAR_13);
    }


    if( VAR_6==VAR_0 ){
      BtreePg *VAR_33;
      u8 *VAR_34;
      int VAR_35;

      VAR_33 = &VAR_3->aPg[VAR_3->iPg];
      VAR_34 = FUNC_3(VAR_33->pPage, &VAR_35);
      VAR_3->iPtr = FUNC_2(VAR_34, VAR_35, VAR_33->iCell+1);
      if( VAR_33->iCell<0 ){
        LsmPgno VAR_36;
        int VAR_37;
        for(VAR_37=VAR_3->iPg-1; VAR_37>=0; VAR_37--){
          if( VAR_3->aPg[VAR_37].iCell>0 ) break;
        }
        FUNC_0( VAR_37>=0 );
        VAR_6 = FUNC_8(VAR_11,
            VAR_3->aPg[VAR_37].pPage, VAR_3->aPg[VAR_37].iCell-1,
            &VAR_36, &VAR_3->eType, &VAR_3->pKey, &VAR_3->nKey, &VAR_3->blob
        );
        VAR_3->eType |= VAR_1;

      }else{
        VAR_6 = FUNC_1(VAR_3);
      }
    }
  }
  return VAR_6;
}
