
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pPCache; int pWal; int dbOrigSize; int dbSize; } ;
struct TYPE_5__ {int pgno; struct TYPE_5__* pDirty; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int (*) (void*,int ),void*) ;

__attribute__((used)) static int FUNC_3(Pager *VAR_1){
  int VAR_2;
  PgHdr *VAR_3;
  VAR_1->dbSize = VAR_1->dbOrigSize;
  VAR_2 = FUNC_2(VAR_1->pWal, FUNC_0, (void *)VAR_1);
  VAR_3 = FUNC_1(VAR_1->pPCache);
  while( VAR_3 && VAR_2==VAR_0 ){
    PgHdr *VAR_4 = VAR_3->pDirty;
    VAR_2 = FUNC_0((void *)VAR_1, VAR_3->pgno);
    VAR_3 = VAR_4;
  }

  return VAR_2;
}
