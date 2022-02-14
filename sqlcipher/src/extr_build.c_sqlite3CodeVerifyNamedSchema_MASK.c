
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nDb; TYPE_3__* aDb; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_8__ {int zDbSName; scalar_t__ pBt; } ;
struct TYPE_7__ {TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Db ;


 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

void FUNC_2(Parse *VAR_0, const char *VAR_1){
  sqlite3 *VAR_2 = VAR_0->db;
  int VAR_3;
  for(VAR_3=0; VAR_3<VAR_2->nDb; VAR_3++){
    Db *VAR_4 = &VAR_2->aDb[VAR_3];
    if( VAR_4->pBt && (!VAR_1 || 0==FUNC_1(VAR_1, VAR_4->zDbSName)) ){
      FUNC_0(VAR_0, VAR_3);
    }
  }
}
