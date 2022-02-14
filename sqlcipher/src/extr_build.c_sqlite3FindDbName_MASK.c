
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nDb; TYPE_2__* aDb; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_5__ {char* zDbSName; } ;
typedef TYPE_2__ Db ;


 scalar_t__ FUNC_0 (char*,char const*) ;

int FUNC_1(sqlite3 *VAR_0, const char *VAR_1){
  int VAR_2 = -1;
  if( VAR_1 ){
    Db *VAR_3;
    for(VAR_2=(VAR_0->nDb-1), VAR_3=&VAR_0->aDb[VAR_2]; VAR_2>=0; VAR_2--, VAR_3--){
      if( 0==FUNC_0(VAR_3->zDbSName, VAR_1) ) break;


      if( VAR_2==0 && 0==FUNC_0("main", VAR_1) ) break;
    }
  }
  return VAR_2;
}
