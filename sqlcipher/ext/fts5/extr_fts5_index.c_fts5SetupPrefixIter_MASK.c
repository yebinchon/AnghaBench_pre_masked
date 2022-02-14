
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_60__ TYPE_7__ ;
typedef struct TYPE_59__ TYPE_6__ ;
typedef struct TYPE_58__ TYPE_5__ ;
typedef struct TYPE_57__ TYPE_4__ ;
typedef struct TYPE_56__ TYPE_3__ ;
typedef struct TYPE_55__ TYPE_2__ ;
typedef struct TYPE_54__ TYPE_1__ ;
typedef struct TYPE_53__ TYPE_14__ ;
typedef struct TYPE_52__ TYPE_11__ ;


typedef int u8 ;
typedef scalar_t__ i64 ;
typedef int doclist ;
struct TYPE_60__ {scalar_t__ n; int p; } ;
struct TYPE_57__ {scalar_t__ nData; scalar_t__ iRowid; } ;
struct TYPE_59__ {TYPE_4__ base; int (* xSetOutputs ) (TYPE_6__*,TYPE_11__*) ;TYPE_2__* aFirst; TYPE_11__* aSeg; } ;
struct TYPE_58__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
struct TYPE_56__ {int n; int * p; } ;
struct TYPE_55__ {size_t iFirst; } ;
struct TYPE_54__ {scalar_t__ eDetail; } ;
struct TYPE_53__ {int nn; int szLeaf; int * p; } ;
struct TYPE_52__ {TYPE_3__ term; } ;
typedef int Fts5Structure ;
typedef TYPE_11__ Fts5SegIter ;
typedef TYPE_6__ Fts5Iter ;
typedef TYPE_5__ Fts5Index ;
typedef TYPE_14__ Fts5Data ;
typedef int Fts5Colset ;
typedef TYPE_7__ Fts5Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void FUNC_3 (TYPE_5__*,i64,TYPE_6__*,TYPE_7__*) ;
 void FUNC_4 (TYPE_5__*,i64,TYPE_6__*,TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 TYPE_14__* FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (scalar_t__*,TYPE_6__*) ;
 void FUNC_10 (TYPE_5__*,TYPE_7__*,TYPE_7__*) ;
 void FUNC_11 (TYPE_5__*,TYPE_7__*,TYPE_7__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_5__*,int *,int const,int *,int const*,int,int,int ,TYPE_6__**) ;
 int FUNC_15 (TYPE_5__*,TYPE_14__*,int,TYPE_6__**) ;
 int FUNC_16 (TYPE_5__*,TYPE_6__*,int*) ;
 int * FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int const*,int const*,int) ;
 int FUNC_20 (int *,int ,int) ;
 int FUNC_21 (TYPE_7__*,int ,int) ;
 int FUNC_22 (TYPE_7__*) ;
 int FUNC_23 (TYPE_6__*,TYPE_11__*) ;

__attribute__((used)) static void FUNC_24(
  Fts5Index *VAR_6,
  int VAR_7,
  const u8 *VAR_8,
  int VAR_9,
  Fts5Colset *VAR_10,
  Fts5Iter **VAR_11
){
  Fts5Structure *VAR_12;
  Fts5Buffer *VAR_13;
  const int VAR_14 = 32;

  void (*VAR_15)(Fts5Index*, Fts5Buffer*, Fts5Buffer*);
  void (*VAR_16)(Fts5Index*, i64, Fts5Iter*, Fts5Buffer*);
  if( VAR_6->pConfig->eDetail==VAR_4 ){
    VAR_15 = FUNC_11;
    VAR_16 = FUNC_4;
  }else{
    VAR_15 = FUNC_10;
    VAR_16 = FUNC_3;
  }

  VAR_13 = (Fts5Buffer*)FUNC_8(VAR_6, sizeof(Fts5Buffer)*VAR_14);
  VAR_12 = FUNC_17(VAR_6);

  if( VAR_13 && VAR_12 ){
    const int VAR_17 = VAR_1
                    | VAR_2
                    | VAR_0;
    int VAR_18;
    i64 VAR_19 = 0;
    Fts5Iter *VAR_20 = 0;
    Fts5Data *VAR_21;
    Fts5Buffer VAR_22;
    int VAR_23 = 1;

    FUNC_21(&VAR_22, 0, sizeof(VAR_22));
    FUNC_14(VAR_6, VAR_12, VAR_17, VAR_10, VAR_8, VAR_9, -1, 0, &VAR_20);
    FUNC_9(&VAR_6->rc, VAR_20);
    for( ;
        FUNC_12(VAR_6, VAR_20)==0;
        FUNC_16(VAR_6, VAR_20, &VAR_23)
    ){
      Fts5SegIter *VAR_24 = &VAR_20->aSeg[ VAR_20->aFirst[1].iFirst ];
      int VAR_25 = VAR_24->term.n;
      const u8 *VAR_26 = VAR_24->term.p;
      VAR_20->xSetOutputs(VAR_20, VAR_24);

      FUNC_2( FUNC_19(VAR_8, VAR_26, FUNC_0(VAR_9, VAR_25))<=0 );
      if( VAR_23 ){
        if( VAR_25<VAR_9 || FUNC_19(VAR_8, VAR_26, VAR_9) ) break;
      }

      if( VAR_20->base.nData==0 ) continue;

      if( VAR_20->base.iRowid<=VAR_19 && VAR_22.n>0 ){
        for(VAR_18=0; VAR_6->rc==VAR_5 && VAR_22.n; VAR_18++){
          FUNC_1( VAR_18<VAR_14 );
          if( VAR_13[VAR_18].n==0 ){
            FUNC_6(&VAR_22, &VAR_13[VAR_18]);
            FUNC_7(&VAR_22);
          }else{
            VAR_15(VAR_6, &VAR_22, &VAR_13[VAR_18]);
            FUNC_7(&VAR_13[VAR_18]);
          }
        }
        VAR_19 = 0;
      }

      VAR_16(VAR_6, VAR_20->base.iRowid-VAR_19, VAR_20, &VAR_22);
      VAR_19 = VAR_20->base.iRowid;
    }

    for(VAR_18=0; VAR_18<VAR_14; VAR_18++){
      if( VAR_6->rc==VAR_5 ){
        VAR_15(VAR_6, &VAR_22, &VAR_13[VAR_18]);
      }
      FUNC_5(&VAR_13[VAR_18]);
    }
    FUNC_13(VAR_20);

    VAR_21 = FUNC_8(VAR_6, sizeof(Fts5Data)+VAR_22.n+VAR_3);
    if( VAR_21 ){
      VAR_21->p = (u8*)&VAR_21[1];
      VAR_21->nn = VAR_21->szLeaf = VAR_22.n;
      if( VAR_22.n ) FUNC_20(VAR_21->p, VAR_22.p, VAR_22.n);
      FUNC_15(VAR_6, VAR_21, VAR_7, VAR_11);
    }
    FUNC_5(&VAR_22);
  }

  FUNC_18(VAR_12);
  FUNC_22(VAR_13);
}
