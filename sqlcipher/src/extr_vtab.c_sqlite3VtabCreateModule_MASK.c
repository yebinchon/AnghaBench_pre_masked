
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_module ;
struct TYPE_8__ {int aModule; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_9__ {char* zName; void (* xDestroy ) (void*) ;scalar_t__ pEpoTab; void* pAux; int const* pModule; } ;
typedef TYPE_2__ Module ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,char*,void*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*) ;

Module *FUNC_7(
  sqlite3 *VAR_0,
  const char *VAR_1,
  const sqlite3_module *VAR_2,
  void *VAR_3,
  void (*VAR_4)(void *)
){
  Module *VAR_5;
  int VAR_6 = FUNC_6(VAR_1);
  VAR_5 = (Module *)FUNC_4(sizeof(Module) + VAR_6 + 1);
  if( VAR_5==0 ){
    FUNC_5(VAR_0);
  }else{
    Module *VAR_7;
    char *VAR_8 = (char *)(&VAR_5[1]);
    FUNC_1(VAR_8, VAR_1, VAR_6+1);
    VAR_5->zName = VAR_8;
    VAR_5->pModule = VAR_2;
    VAR_5->pAux = VAR_3;
    VAR_5->xDestroy = VAR_4;
    VAR_5->pEpoTab = 0;
    VAR_7 = (Module *)FUNC_3(&VAR_0->aModule,VAR_8,(void*)VAR_5);
    FUNC_0( VAR_7==0 || VAR_7==VAR_5 );
    if( VAR_7 ){
      FUNC_5(VAR_0);
      FUNC_2(VAR_0, VAR_7);
      VAR_5 = 0;
    }
  }
  return VAR_5;
}
