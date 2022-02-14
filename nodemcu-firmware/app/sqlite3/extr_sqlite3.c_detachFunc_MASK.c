
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zErr ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_5__ {int nDb; int autoCommit; TYPE_2__* aDb; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {scalar_t__ pBt; scalar_t__ pSchema; int zDbSName; } ;
typedef TYPE_2__ Db ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int,char*,char*,...) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const char *VAR_3 = (const char *)FUNC_9(VAR_2[0]);
  sqlite3 *VAR_4 = FUNC_6(VAR_0);
  int VAR_5;
  Db *VAR_6 = 0;
  char VAR_7[128];

  FUNC_0(VAR_1);

  if( VAR_3==0 ) VAR_3 = "";
  for(VAR_5=0; VAR_5<VAR_4->nDb; VAR_5++){
    VAR_6 = &VAR_4->aDb[VAR_5];
    if( VAR_6->pBt==0 ) continue;
    if( FUNC_5(VAR_6->zDbSName, VAR_3)==0 ) break;
  }

  if( VAR_5>=VAR_4->nDb ){
    FUNC_8(sizeof(VAR_7),VAR_7, "no such database: %s", VAR_3);
    goto detach_error;
  }
  if( VAR_5<2 ){
    FUNC_8(sizeof(VAR_7),VAR_7, "cannot detach database %s", VAR_3);
    goto detach_error;
  }
  if( !VAR_4->autoCommit ){
    FUNC_8(sizeof(VAR_7), VAR_7,
                     "cannot DETACH database within transaction");
    goto detach_error;
  }
  if( FUNC_3(VAR_6->pBt) || FUNC_2(VAR_6->pBt) ){
    FUNC_8(sizeof(VAR_7),VAR_7, "database %s is locked", VAR_3);
    goto detach_error;
  }

  FUNC_1(VAR_6->pBt);
  VAR_6->pBt = 0;
  VAR_6->pSchema = 0;
  FUNC_4(VAR_4);
  return;

detach_error:
  FUNC_7(VAR_0, VAR_7, -1);
}
