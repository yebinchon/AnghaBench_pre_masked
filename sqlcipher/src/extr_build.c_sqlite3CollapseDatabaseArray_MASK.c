
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Db {scalar_t__ pBt; struct Db* zDbSName; } ;
struct TYPE_4__ {int nDb; struct Db* aDbStatic; struct Db* aDb; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (struct Db*,struct Db*,int) ;
 int FUNC_1 (TYPE_1__*,struct Db*) ;

void FUNC_2(sqlite3 *VAR_0){
  int VAR_1, VAR_2;
  for(VAR_1=VAR_2=2; VAR_1<VAR_0->nDb; VAR_1++){
    struct Db *VAR_3 = &VAR_0->aDb[VAR_1];
    if( VAR_3->pBt==0 ){
      FUNC_1(VAR_0, VAR_3->zDbSName);
      VAR_3->zDbSName = 0;
      continue;
    }
    if( VAR_2<VAR_1 ){
      VAR_0->aDb[VAR_2] = VAR_0->aDb[VAR_1];
    }
    VAR_2++;
  }
  VAR_0->nDb = VAR_2;
  if( VAR_0->nDb<=2 && VAR_0->aDb!=VAR_0->aDbStatic ){
    FUNC_0(VAR_0->aDbStatic, VAR_0->aDb, 2*sizeof(VAR_0->aDb[0]));
    FUNC_1(VAR_0, VAR_0->aDb);
    VAR_0->aDb = VAR_0->aDbStatic;
  }
}
