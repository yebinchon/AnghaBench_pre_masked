
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {TYPE_1__* pSorter; } ;
struct TYPE_6__ {int nIdx; int* aIdx; int const* aPoslist; int pStmt; int iRowid; } ;
typedef TYPE_1__ Fts5Sorter ;
typedef TYPE_2__ Fts5Cursor ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int const*,int) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(Fts5Cursor *VAR_4){
  Fts5Sorter *VAR_5 = VAR_4->pSorter;
  int VAR_6;

  VAR_6 = FUNC_6(VAR_5->pStmt);
  if( VAR_6==VAR_1 ){
    VAR_6 = VAR_2;
    FUNC_0(VAR_4, VAR_0);
  }else if( VAR_6==VAR_3 ){
    const u8 *VAR_7;
    const u8 *VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11 = 0;
    VAR_6 = VAR_2;

    VAR_5->iRowid = FUNC_5(VAR_5->pStmt, 0);
    VAR_9 = FUNC_4(VAR_5->pStmt, 1);
    VAR_8 = VAR_7 = FUNC_3(VAR_5->pStmt, 1);


    if( VAR_9>0 ){
      for(VAR_10=0; VAR_10<(VAR_5->nIdx-1); VAR_10++){
        int VAR_12;
        VAR_7 += FUNC_2(VAR_7, VAR_12);
        VAR_11 += VAR_12;
        VAR_5->aIdx[VAR_10] = VAR_11;
      }
      VAR_5->aIdx[VAR_10] = &VAR_8[VAR_9] - VAR_7;
      VAR_5->aPoslist = VAR_7;
    }

    FUNC_1(VAR_4);
  }

  return VAR_6;
}
