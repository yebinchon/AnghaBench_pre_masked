
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_blob ;
struct TYPE_3__ {int * pReader; } ;
typedef TYPE_1__ Fts5Index ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(Fts5Index *VAR_0){
  if( VAR_0->pReader ){
    sqlite3_blob *VAR_1 = VAR_0->pReader;
    VAR_0->pReader = 0;
    FUNC_0(VAR_1);
  }
}
