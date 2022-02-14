
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3rbu ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {char** azTblCol; char** azTblType; int* aiSrcOrder; int * abNotNull; int * abIndexed; int * abTblPk; } ;
typedef TYPE_1__ RbuObjIter ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(sqlite3rbu *VAR_0, RbuObjIter *VAR_1, int VAR_2){
  sqlite3_int64 VAR_3 = (2*sizeof(char*) + sizeof(int) + 3*sizeof(u8)) * VAR_2;
  char **VAR_4;

  VAR_4 = (char**)FUNC_0(VAR_0, VAR_3);
  if( VAR_4 ){
    VAR_1->azTblCol = VAR_4;
    VAR_1->azTblType = &VAR_4[VAR_2];
    VAR_1->aiSrcOrder = (int*)&VAR_1->azTblType[VAR_2];
    VAR_1->abTblPk = (u8*)&VAR_1->aiSrcOrder[VAR_2];
    VAR_1->abNotNull = (u8*)&VAR_1->abTblPk[VAR_2];
    VAR_1->abIndexed = (u8*)&VAR_1->abNotNull[VAR_2];
  }
}
