
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_7__ {int * pVtab; } ;
struct TYPE_9__ {TYPE_2__ base; struct TYPE_9__* pNext; } ;
struct TYPE_8__ {int pStorage; TYPE_1__* pGlobal; } ;
struct TYPE_6__ {TYPE_4__* pCsr; } ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(Fts5FullTable *VAR_1){
  Fts5Cursor *VAR_2;
  for(VAR_2=VAR_1->pGlobal->pCsr; VAR_2; VAR_2=VAR_2->pNext){
    if( VAR_2->base.pVtab==(sqlite3_vtab*)VAR_1 ) return VAR_0;
  }
  return FUNC_0(VAR_1->pStorage);
}
