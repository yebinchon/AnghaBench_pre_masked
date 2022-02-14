
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_8__ {int * pVtab; } ;
struct TYPE_10__ {scalar_t__ ePlan; TYPE_2__ base; struct TYPE_10__* pNext; } ;
struct TYPE_9__ {TYPE_1__* pGlobal; } ;
struct TYPE_7__ {TYPE_4__* pCsr; } ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(Fts5FullTable *VAR_2){
  Fts5Cursor *VAR_3;
  for(VAR_3=VAR_2->pGlobal->pCsr; VAR_3; VAR_3=VAR_3->pNext){
    if( VAR_3->ePlan==VAR_1
     && VAR_3->base.pVtab==(sqlite3_vtab*)VAR_2
    ){
      FUNC_0(VAR_3, VAR_0);
    }
  }
}
