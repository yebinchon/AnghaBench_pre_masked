
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_6__ {scalar_t__ iCsrId; struct TYPE_6__* pNext; } ;
struct TYPE_5__ {TYPE_2__* pCsr; } ;
typedef TYPE_1__ Fts5Global ;
typedef TYPE_2__ Fts5Cursor ;



__attribute__((used)) static Fts5Cursor *FUNC_0(Fts5Global *VAR_0, i64 VAR_1){
  Fts5Cursor *VAR_2;
  for(VAR_2=VAR_0->pCsr; VAR_2; VAR_2=VAR_2->pNext){
    if( VAR_2->iCsrId==VAR_1 ) break;
  }
  return VAR_2;
}
