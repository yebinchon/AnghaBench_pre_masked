
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
typedef int sqlite3_int64 ;
struct TYPE_12__ {int nCol; } ;
struct TYPE_11__ {int* aColumnSize; scalar_t__ iCsrId; struct TYPE_11__* pNext; } ;
struct TYPE_8__ {TYPE_5__* pConfig; } ;
struct TYPE_10__ {TYPE_2__* pGlobal; TYPE_1__ p; } ;
struct TYPE_9__ {scalar_t__ iNextId; TYPE_4__* pCsr; } ;
typedef TYPE_2__ Fts5Global ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;
typedef TYPE_5__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ,size_t) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  Fts5FullTable *VAR_4 = (Fts5FullTable*)VAR_2;
  Fts5Config *VAR_5 = VAR_4->p.pConfig;
  Fts5Cursor *VAR_6 = 0;
  sqlite3_int64 VAR_7;
  int VAR_8;

  VAR_8 = FUNC_0(VAR_4);
  if( VAR_8==VAR_1 ){
    VAR_7 = sizeof(Fts5Cursor) + VAR_5->nCol * sizeof(int);
    VAR_6 = (Fts5Cursor*)FUNC_2(VAR_7);
    if( VAR_6 ){
      Fts5Global *VAR_9 = VAR_4->pGlobal;
      FUNC_1(VAR_6, 0, (size_t)VAR_7);
      VAR_6->aColumnSize = (int*)&VAR_6[1];
      VAR_6->pNext = VAR_9->pCsr;
      VAR_9->pCsr = VAR_6;
      VAR_6->iCsrId = ++VAR_9->iNextId;
    }else{
      VAR_8 = VAR_0;
    }
  }
  *VAR_3 = (sqlite3_vtab_cursor*)VAR_6;
  return VAR_8;
}
