
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_9__ {int* aLimit; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {int nModuleArg; char** azModuleArg; int zName; } ;
typedef TYPE_2__ Table ;
struct TYPE_11__ {TYPE_1__* db; } ;
typedef TYPE_3__ Parse ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 char** FUNC_1 (TYPE_1__*,char**,int) ;
 int FUNC_2 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static void FUNC_3(Parse *VAR_1, Table *VAR_2, char *VAR_3){
  sqlite3_int64 VAR_4 = sizeof(char *)*(2+VAR_2->nModuleArg);
  char **VAR_5;
  sqlite3 *VAR_6 = VAR_1->db;
  if( VAR_2->nModuleArg+3>=VAR_6->aLimit[VAR_0] ){
    FUNC_2(VAR_1, "too many columns on %s", VAR_2->zName);
  }
  VAR_5 = FUNC_1(VAR_6, VAR_2->azModuleArg, VAR_4);
  if( VAR_5==0 ){
    FUNC_0(VAR_6, VAR_3);
  }else{
    int VAR_7 = VAR_2->nModuleArg++;
    VAR_5[VAR_7] = VAR_3;
    VAR_5[VAR_7+1] = 0;
    VAR_2->azModuleArg = VAR_5;
  }
}
