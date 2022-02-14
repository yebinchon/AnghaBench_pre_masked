
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_blob ;
struct TYPE_3__ {scalar_t__ inWrTrans; scalar_t__ nCursor; int * pNodeBlob; } ;
typedef TYPE_1__ Rtree ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(Rtree *VAR_0){
  if( VAR_0->pNodeBlob && VAR_0->inWrTrans==0 && VAR_0->nCursor==0 ){
    sqlite3_blob *VAR_1 = VAR_0->pNodeBlob;
    VAR_0->pNodeBlob = 0;
    FUNC_0(VAR_1);
  }
}
