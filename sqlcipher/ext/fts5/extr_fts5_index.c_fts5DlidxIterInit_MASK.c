
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int sqlite3_int64 ;
typedef int i64 ;
struct TYPE_17__ {int nLvl; int iSegid; TYPE_2__* aLvl; } ;
struct TYPE_16__ {TYPE_12__* pData; } ;
struct TYPE_15__ {scalar_t__ rc; } ;
struct TYPE_14__ {int* p; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5DlidxLvl ;
typedef TYPE_3__ Fts5DlidxIter ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_12__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static Fts5DlidxIter *FUNC_7(
  Fts5Index *VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5
){
  Fts5DlidxIter *VAR_6 = 0;
  int VAR_7;
  int VAR_8 = 0;

  for(VAR_7=0; VAR_2->rc==VAR_1 && VAR_8==0; VAR_7++){
    sqlite3_int64 VAR_9 = sizeof(Fts5DlidxIter) + VAR_7 * sizeof(Fts5DlidxLvl);
    Fts5DlidxIter *VAR_10;

    VAR_10 = (Fts5DlidxIter*)FUNC_6(VAR_6, VAR_9);
    if( VAR_10==0 ){
      VAR_2->rc = VAR_0;
    }else{
      i64 VAR_11 = FUNC_0(VAR_4, VAR_7, VAR_5);
      Fts5DlidxLvl *VAR_12 = &VAR_10->aLvl[VAR_7];
      VAR_6 = VAR_10;
      FUNC_5(VAR_12, 0, sizeof(Fts5DlidxLvl));
      VAR_12->pData = FUNC_1(VAR_2, VAR_11);
      if( VAR_12->pData && (VAR_12->pData->p[0] & 0x0001)==0 ){
        VAR_8 = 1;
      }
      VAR_6->nLvl = VAR_7+1;
    }
  }

  if( VAR_2->rc==VAR_1 ){
    VAR_6->iSegid = VAR_4;
    if( VAR_3==0 ){
      FUNC_2(VAR_6);
    }else{
      FUNC_4(VAR_2, VAR_6);
    }
  }

  if( VAR_2->rc!=VAR_1 ){
    FUNC_3(VAR_6);
    VAR_6 = 0;
  }

  return VAR_6;
}
