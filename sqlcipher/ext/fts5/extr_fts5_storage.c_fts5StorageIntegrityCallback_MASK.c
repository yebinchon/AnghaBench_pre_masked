
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ szCol; int iCol; int iRowid; int cksum; TYPE_1__* pConfig; int * pTermset; } ;
struct TYPE_3__ {int eDetail; int nPrefix; int* aPrefix; } ;
typedef int Fts5Termset ;
typedef TYPE_2__ Fts5IntegrityCtx ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int const) ;
 int FUNC_3 (int ,int,int,int,char const*,int) ;
 int FUNC_4 (int *,int,char const*,int,int*) ;

__attribute__((used)) static int FUNC_5(
  void *VAR_4,
  int VAR_5,
  const char *VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9
){
  Fts5IntegrityCtx *VAR_10 = (Fts5IntegrityCtx*)VAR_4;
  Fts5Termset *VAR_11 = VAR_10->pTermset;
  int VAR_12;
  int VAR_13;
  int VAR_14 = VAR_3;
  int VAR_15;
  int VAR_16;

  FUNC_0(VAR_8, VAR_9);
  if( VAR_7>VAR_1 ) VAR_7 = VAR_1;

  if( (VAR_5 & VAR_2)==0 || VAR_10->szCol==0 ){
    VAR_10->szCol++;
  }

  switch( VAR_10->pConfig->eDetail ){
    case 128:
      VAR_15 = VAR_10->szCol-1;
      VAR_16 = VAR_10->iCol;
      break;

    case 129:
      VAR_15 = VAR_10->iCol;
      VAR_16 = 0;
      break;

    default:
      FUNC_1( VAR_10->pConfig->eDetail==VAR_0 );
      VAR_15 = 0;
      VAR_16 = 0;
      break;
  }

  VAR_14 = FUNC_4(VAR_11, 0, VAR_6, VAR_7, &VAR_12);
  if( VAR_14==VAR_3 && VAR_12==0 ){
    VAR_10->cksum ^= FUNC_3(
        VAR_10->iRowid, VAR_16, VAR_15, 0, VAR_6, VAR_7
    );
  }

  for(VAR_13=0; VAR_14==VAR_3 && VAR_13<VAR_10->pConfig->nPrefix; VAR_13++){
    const int VAR_17 = VAR_10->pConfig->aPrefix[VAR_13];
    int VAR_18 = FUNC_2(VAR_6, VAR_7, VAR_17);
    if( VAR_18 ){
      VAR_14 = FUNC_4(VAR_11, VAR_13+1, VAR_6, VAR_18, &VAR_12);
      if( VAR_12==0 ){
        VAR_10->cksum ^= FUNC_3(
            VAR_10->iRowid, VAR_16, VAR_15, VAR_13+1, VAR_6, VAR_18
        );
      }
    }
  }

  return VAR_14;
}
