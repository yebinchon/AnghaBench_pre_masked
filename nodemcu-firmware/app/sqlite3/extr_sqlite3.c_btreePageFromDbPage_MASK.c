
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pgno; scalar_t__ aData; int hdrOffset; int * pBt; int * pDbPage; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ MemPage ;
typedef int DbPage ;
typedef int BtShared ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static MemPage *FUNC_3(DbPage *VAR_0, Pgno VAR_1, BtShared *VAR_2){
  MemPage *VAR_3 = (MemPage*)FUNC_2(VAR_0);
  if( VAR_1!=VAR_3->pgno ){
    VAR_3->aData = FUNC_1(VAR_0);
    VAR_3->pDbPage = VAR_0;
    VAR_3->pBt = VAR_2;
    VAR_3->pgno = VAR_1;
    VAR_3->hdrOffset = VAR_1==1 ? 100 : 0;
  }
  FUNC_0( VAR_3->aData==FUNC_1(VAR_0) );
  return VAR_3;
}
