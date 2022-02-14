
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_25__ {scalar_t__* p; int member_2; int member_1; int member_0; } ;
struct TYPE_24__ {scalar_t__ bPrefixIndex; int nPrefix; int* aPrefix; } ;
struct TYPE_23__ {scalar_t__ rc; TYPE_5__* pConfig; } ;
struct TYPE_22__ {scalar_t__ pColset; int (* xSetOutputs ) (TYPE_3__*,TYPE_2__*) ;TYPE_1__* aFirst; TYPE_2__* aSeg; } ;
struct TYPE_21__ {scalar_t__ pLeaf; } ;
struct TYPE_20__ {size_t iFirst; } ;
typedef int Fts5Structure ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Iter ;
typedef int Fts5IndexIter ;
typedef TYPE_4__ Fts5Index ;
typedef TYPE_5__ Fts5Config ;
typedef int Fts5Colset ;
typedef TYPE_6__ Fts5Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (scalar_t__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,int *,int,int *,scalar_t__*,int,int,int ,TYPE_3__**) ;
 int FUNC_6 (TYPE_4__*,int,scalar_t__*,int,int *,TYPE_3__**) ;
 int * FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*,char const*,int) ;
 int FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (scalar_t__*,TYPE_6__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*) ;

int FUNC_14(
  Fts5Index *VAR_7,
  const char *VAR_8, int VAR_9,
  int VAR_10,
  Fts5Colset *VAR_11,
  Fts5IndexIter **VAR_12
){
  Fts5Config *VAR_13 = VAR_7->pConfig;
  Fts5Iter *VAR_14 = 0;
  Fts5Buffer VAR_15 = {0, 0, 0};


  FUNC_0( (VAR_10 & VAR_2)==0 || VAR_10==VAR_2 );

  if( FUNC_11(&VAR_7->rc, &VAR_15, VAR_9+1)==0 ){
    int VAR_16 = 0;
    if( VAR_9 ) FUNC_9(&VAR_15.p[1], VAR_8, VAR_9);
    if( VAR_10 & VAR_1 ){
      int VAR_17 = FUNC_2(VAR_8, VAR_9);
      for(VAR_16=1; VAR_16<=VAR_13->nPrefix; VAR_16++){
        if( VAR_13->aPrefix[VAR_16-1]==VAR_17 ) break;
      }
    }

    if( VAR_16<=VAR_13->nPrefix ){

      Fts5Structure *VAR_18 = FUNC_7(VAR_7);
      VAR_15.p[0] = (u8)(VAR_5 + VAR_16);
      if( VAR_18 ){
        FUNC_5(VAR_7, VAR_18, VAR_10 | VAR_3,
            VAR_11, VAR_15.p, VAR_9+1, -1, 0, &VAR_14
        );
        FUNC_8(VAR_18);
      }
    }else{

      int VAR_19 = (VAR_10 & VAR_0)!=0;
      VAR_15.p[0] = VAR_5;
      FUNC_6(VAR_7, VAR_19, VAR_15.p, VAR_9+1, VAR_11, &VAR_14);
      FUNC_0( VAR_7->rc!=VAR_6 || VAR_14->pColset==0 );
      FUNC_4(&VAR_7->rc, VAR_14);
      if( VAR_7->rc==VAR_6 ){
        Fts5SegIter *VAR_20 = &VAR_14->aSeg[VAR_14->aFirst[1].iFirst];
        if( VAR_20->pLeaf ) VAR_14->xSetOutputs(VAR_14, VAR_20);
      }
    }

    if( VAR_7->rc ){
      FUNC_12((Fts5IndexIter*)VAR_14);
      VAR_14 = 0;
      FUNC_1(VAR_7);
    }

    *VAR_12 = (Fts5IndexIter*)VAR_14;
    FUNC_10(&VAR_15);
  }
  return FUNC_3(VAR_7);
}
