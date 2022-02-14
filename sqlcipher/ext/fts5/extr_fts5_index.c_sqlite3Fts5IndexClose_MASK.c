
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pReader; struct TYPE_5__* zDataTbl; int pHash; int pDataVersion; int pIdxSelect; int pIdxDeleter; int pIdxWriter; int pDeleter; int pWriter; } ;
typedef TYPE_1__ Fts5Index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(Fts5Index *VAR_1){
  int VAR_2 = VAR_0;
  if( VAR_1 ){
    FUNC_0( VAR_1->pReader==0 );
    FUNC_1(VAR_1);
    FUNC_3(VAR_1->pWriter);
    FUNC_3(VAR_1->pDeleter);
    FUNC_3(VAR_1->pIdxWriter);
    FUNC_3(VAR_1->pIdxDeleter);
    FUNC_3(VAR_1->pIdxSelect);
    FUNC_3(VAR_1->pDataVersion);
    FUNC_2(VAR_1->pHash);
    FUNC_4(VAR_1->zDataTbl);
    FUNC_4(VAR_1);
  }
  return VAR_2;
}
