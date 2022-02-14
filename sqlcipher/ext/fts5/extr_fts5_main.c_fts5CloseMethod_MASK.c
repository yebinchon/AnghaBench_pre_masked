
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
struct TYPE_11__ {struct TYPE_11__* pNext; } ;
struct TYPE_10__ {TYPE_1__* pGlobal; } ;
struct TYPE_8__ {TYPE_4__* pCsr; } ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  if( VAR_1 ){
    Fts5FullTable *VAR_2 = (Fts5FullTable*)(VAR_1->pVtab);
    Fts5Cursor *VAR_3 = (Fts5Cursor*)VAR_1;
    Fts5Cursor **VAR_4;

    FUNC_0(VAR_3);

    for(VAR_4=&VAR_2->pGlobal->pCsr; (*VAR_4)!=VAR_3; VAR_4=&(*VAR_4)->pNext);
    *VAR_4 = VAR_3->pNext;

    FUNC_1(VAR_3);
  }
  return VAR_0;
}
