
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int u64 ;
typedef int sqlite3_stmt ;
typedef scalar_t__ i64 ;
struct TYPE_29__ {int iLeaf; } ;
struct TYPE_28__ {int zName; int zDb; } ;
struct TYPE_27__ {scalar_t__ nn; scalar_t__ szLeaf; int * p; } ;
struct TYPE_26__ {int rc; TYPE_4__* pConfig; } ;
struct TYPE_25__ {int pgnoFirst; int pgnoLast; int iSegid; } ;
typedef TYPE_1__ Fts5StructureSegment ;
typedef TYPE_2__ Fts5Index ;
typedef int Fts5DlidxIter ;
typedef TYPE_3__ Fts5Data ;
typedef TYPE_4__ Fts5Config ;


 int FUNC_0 (TYPE_3__*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_2__*,int ,int,int) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (TYPE_2__*,TYPE_1__*,int,int,int) ;
 int FUNC_14 (TYPE_2__*,int **,int ) ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 TYPE_3__* FUNC_18 (TYPE_2__*,scalar_t__) ;
 int FUNC_19 (int *,char const*,int ) ;
 int FUNC_20 (TYPE_2__*,int,int) ;
 TYPE_5__ VAR_3 ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int) ;
 scalar_t__ FUNC_23 (int *,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (char*,int ,int ,int) ;
 scalar_t__ FUNC_26 (int *) ;

__attribute__((used)) static void FUNC_27(
  Fts5Index *VAR_4,
  Fts5StructureSegment *VAR_5
){
  Fts5Config *VAR_6 = VAR_4->pConfig;
  sqlite3_stmt *VAR_7 = 0;
  int VAR_8;
  int VAR_9 = VAR_5->pgnoFirst-1;
  int VAR_10 = VAR_5->pgnoLast;

  if( VAR_5->pgnoFirst==0 ) return;

  FUNC_14(VAR_4, &VAR_7, FUNC_25(
      "SELECT segid, term, (pgno>>1), (pgno&1) FROM %Q.'%q_idx' WHERE segid=%d",
      VAR_6->zDb, VAR_6->zName, VAR_5->iSegid
  ));


  while( VAR_4->rc==VAR_1 && VAR_2==FUNC_26(VAR_7) ){
    i64 VAR_11;
    Fts5Data *VAR_12;

    int VAR_13 = FUNC_21(VAR_7, 1);
    const char *VAR_14 = (const char*)FUNC_23(VAR_7, 1);
    int VAR_15 = FUNC_22(VAR_7, 2);
    int VAR_16 = FUNC_22(VAR_7, 3);



    if( VAR_15<VAR_5->pgnoFirst ) continue;
    VAR_11 = FUNC_1(VAR_5->iSegid, VAR_15);
    VAR_12 = FUNC_18(VAR_4, VAR_11);
    if( VAR_12==0 ) break;





    if( VAR_12->nn<=VAR_12->szLeaf ){
      VAR_4->rc = VAR_0;
    }else{
      int VAR_17;
      int VAR_18;
      int VAR_19;
      int VAR_20;

      VAR_17 = FUNC_17(VAR_12);
      VAR_18 = FUNC_16(VAR_12);
      if( VAR_18>=VAR_17 || VAR_17>=VAR_12->szLeaf ){
        VAR_4->rc = VAR_0;
      }else{
        VAR_17 += FUNC_12(&VAR_12->p[VAR_17], VAR_19);
        VAR_20 = FUNC_19(&VAR_12->p[VAR_17], VAR_14, FUNC_2(VAR_19, VAR_13));
        if( VAR_20==0 ) VAR_20 = VAR_19 - VAR_13;
        if( VAR_20<0 ) VAR_4->rc = VAR_0;
      }

      FUNC_15(VAR_4, VAR_12);
    }
    FUNC_4(VAR_12);
    if( VAR_4->rc ) break;



    FUNC_13(
        VAR_4, VAR_5, VAR_9+1, VAR_10+1, VAR_15-1
    );
    if( VAR_4->rc ) break;


    if( VAR_16 ){
      Fts5DlidxIter *VAR_21 = 0;
      int VAR_22 = VAR_15;
      int VAR_23 = VAR_5->iSegid;
      int VAR_24 = 0;
      i64 VAR_25;

      for(VAR_21=FUNC_7(VAR_4, 0, VAR_23, VAR_15);
          FUNC_5(VAR_4, VAR_21)==0;
          FUNC_8(VAR_4, VAR_21)
      ){


        for(VAR_24=VAR_22+1; VAR_24<FUNC_9(VAR_21); VAR_24++){
          VAR_25 = FUNC_1(VAR_23, VAR_24);
          VAR_12 = FUNC_3(VAR_4, VAR_25);
          if( VAR_12 ){
            if( FUNC_16(VAR_12)!=0 ) VAR_4->rc = VAR_0;
            FUNC_4(VAR_12);
          }
        }
        VAR_22 = FUNC_9(VAR_21);



        VAR_25 = FUNC_1(VAR_23, VAR_22);
        VAR_12 = FUNC_3(VAR_4, VAR_25);
        if( VAR_12 ){
          i64 VAR_26;
          int VAR_27 = FUNC_16(VAR_12);
          FUNC_0(VAR_12);
          if( VAR_27>=VAR_12->szLeaf ){
            VAR_4->rc = VAR_0;
          }else{
            FUNC_11(&VAR_12->p[VAR_27], (u64*)&VAR_26);
            if( VAR_26!=FUNC_10(VAR_21) ) VAR_4->rc = VAR_0;
          }
          FUNC_4(VAR_12);
        }
      }

      VAR_10 = VAR_24;
      FUNC_6(VAR_21);
      FUNC_20(VAR_4, VAR_23, VAR_15);
    }else{
      VAR_10 = VAR_5->pgnoLast;

    }

    VAR_9 = VAR_15;
  }

  VAR_8 = FUNC_24(VAR_7);
  if( VAR_4->rc==VAR_1 ) VAR_4->rc = VAR_8;







}
