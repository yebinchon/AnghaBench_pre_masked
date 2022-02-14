
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int aModule; TYPE_1__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_21__ {char** azModuleArg; int pVTable; } ;
typedef TYPE_4__ Table ;
struct TYPE_22__ {TYPE_2__* pModule; } ;
struct TYPE_19__ {scalar_t__ xCreate; scalar_t__ xDestroy; } ;
struct TYPE_18__ {int zDbSName; } ;
typedef TYPE_5__ Module ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,char const*,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 char* FUNC_8 (TYPE_3__*,char*,char const*) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*,TYPE_5__*,scalar_t__,char**) ;

int FUNC_10(sqlite3 *VAR_2, int VAR_3, const char *VAR_4, char **VAR_5){
  int VAR_6 = VAR_1;
  Table *VAR_7;
  Module *VAR_8;
  const char *VAR_9;

  VAR_7 = FUNC_5(VAR_2, VAR_4, VAR_2->aDb[VAR_3].zDbSName);
  FUNC_3( VAR_7 && FUNC_1(VAR_7) && !VAR_7->pVTable );


  VAR_9 = VAR_7->azModuleArg[0];
  VAR_8 = (Module*)FUNC_7(&VAR_2->aModule, VAR_9);





  if( VAR_8==0 || VAR_8->pModule->xCreate==0 || VAR_8->pModule->xDestroy==0 ){
    *VAR_5 = FUNC_8(VAR_2, "no such module: %s", VAR_9);
    VAR_6 = VAR_0;
  }else{
    VAR_6 = FUNC_9(VAR_2, VAR_7, VAR_8, VAR_8->pModule->xCreate, VAR_5);
  }



  if( VAR_6==VAR_1 && FUNC_0(FUNC_6(VAR_2, VAR_7)) ){
    VAR_6 = FUNC_4(VAR_2);
    if( VAR_6==VAR_1 ){
      FUNC_2(VAR_2, FUNC_6(VAR_2, VAR_7));
    }
  }

  return VAR_6;
}
