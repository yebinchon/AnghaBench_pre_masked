
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_14__ {scalar_t__ eDetail; int nCol; } ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_13__ {int pExpr; TYPE_3__* pSorter; TYPE_1__ base; } ;
struct TYPE_12__ {int* aIdx; int * aPoslist; int iRowid; } ;
struct TYPE_11__ {TYPE_5__* pConfig; } ;
typedef TYPE_2__ Fts5Table ;
typedef TYPE_3__ Fts5Sorter ;
typedef int Fts5PoslistPopulator ;
typedef TYPE_4__ Fts5Cursor ;
typedef int Fts5Context ;
typedef TYPE_5__ Fts5Config ;


 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int,char const**,int*) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_5__*,int ,int *,int,char const*,int) ;
 int FUNC_6 (int ,int,int const**) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
  Fts5Cursor *VAR_4,
  int VAR_5,
  const u8 **VAR_6,
  int *VAR_7
){
  Fts5Config *VAR_8 = ((Fts5Table*)(VAR_4->base.pVtab))->pConfig;
  int VAR_9 = VAR_3;
  int VAR_10 = (VAR_4->pSorter==0);

  if( FUNC_1(VAR_4, VAR_0) ){

    if( VAR_8->eDetail!=VAR_1 ){
      Fts5PoslistPopulator *VAR_11;
      int VAR_12;
      VAR_11 = FUNC_4(VAR_4->pExpr, VAR_10);
      if( VAR_11==0 ) VAR_9 = VAR_2;
      for(VAR_12=0; VAR_12<VAR_8->nCol && VAR_9==VAR_3; VAR_12++){
        int VAR_13; const char *VAR_14;
        VAR_9 = FUNC_2((Fts5Context*)VAR_4, VAR_12, &VAR_14, &VAR_13);
        if( VAR_9==VAR_3 ){
          VAR_9 = FUNC_5(
              VAR_8, VAR_4->pExpr, VAR_11, VAR_12, VAR_14, VAR_13
          );
        }
      }
      FUNC_7(VAR_11);

      if( VAR_4->pSorter ){
        FUNC_3(VAR_4->pExpr, VAR_4->pSorter->iRowid);
      }
    }
    FUNC_0(VAR_4, VAR_0);
  }

  if( VAR_4->pSorter && VAR_8->eDetail==VAR_1 ){
    Fts5Sorter *VAR_15 = VAR_4->pSorter;
    int VAR_16 = (VAR_5==0 ? 0 : VAR_15->aIdx[VAR_5-1]);
    *VAR_7 = VAR_15->aIdx[VAR_5] - VAR_16;
    *VAR_6 = &VAR_15->aPoslist[VAR_16];
  }else{
    *VAR_7 = FUNC_6(VAR_4->pExpr, VAR_5, VAR_6);
  }

  return VAR_9;
}
