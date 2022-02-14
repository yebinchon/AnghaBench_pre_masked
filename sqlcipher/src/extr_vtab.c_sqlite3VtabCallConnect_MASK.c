
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int aModule; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_19__ {char** azModuleArg; } ;
typedef TYPE_3__ Table ;
struct TYPE_21__ {TYPE_1__* pModule; } ;
struct TYPE_20__ {int rc; TYPE_2__* db; } ;
struct TYPE_17__ {int xConnect; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Module ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_4__*,char*,char const*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_5__*,int ,char**) ;

int FUNC_7(Parse *VAR_2, Table *VAR_3){
  sqlite3 *VAR_4 = VAR_2->db;
  const char *VAR_5;
  Module *VAR_6;
  int VAR_7;

  FUNC_1( VAR_3 );
  if( !FUNC_0(VAR_3) || FUNC_4(VAR_4, VAR_3) ){
    return VAR_1;
  }


  VAR_5 = VAR_3->azModuleArg[0];
  VAR_6 = (Module*)FUNC_5(&VAR_4->aModule, VAR_5);

  if( !VAR_6 ){
    const char *VAR_8 = VAR_3->azModuleArg[0];
    FUNC_3(VAR_2, "no such module: %s", VAR_8);
    VAR_7 = VAR_0;
  }else{
    char *VAR_9 = 0;
    VAR_7 = FUNC_6(VAR_4, VAR_3, VAR_6, VAR_6->pModule->xConnect, &VAR_9);
    if( VAR_7!=VAR_1 ){
      FUNC_3(VAR_2, "%s", VAR_9);
      VAR_2->rc = VAR_7;
    }
    FUNC_2(VAR_4, VAR_9);
  }

  return VAR_7;
}
