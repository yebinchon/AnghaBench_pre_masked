
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Upsert ;
struct TYPE_13__ {int orconf; int * pUpsert; int * pIdList; int * pSelect; } ;
typedef TYPE_2__ TriggerStep ;
typedef int Token ;
struct TYPE_14__ {TYPE_1__* db; } ;
typedef int Select ;
typedef TYPE_3__ Parse ;
typedef int IdList ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int ,int *,char const*,char const*) ;

TriggerStep *FUNC_7(
  Parse *VAR_3,
  Token *VAR_4,
  IdList *VAR_5,
  Select *VAR_6,
  u8 VAR_7,
  Upsert *VAR_8,
  const char *VAR_9,
  const char *VAR_10
){
  sqlite3 *VAR_11 = VAR_3->db;
  TriggerStep *VAR_12;

  FUNC_0(VAR_6 != 0 || VAR_11->mallocFailed);

  VAR_12 = FUNC_6(VAR_3, VAR_2, VAR_4,VAR_9,VAR_10);
  if( VAR_12 ){
    if( VAR_1 ){
      VAR_12->pSelect = VAR_6;
      VAR_6 = 0;
    }else{
      VAR_12->pSelect = FUNC_3(VAR_11, VAR_6, VAR_0);
    }
    VAR_12->pIdList = VAR_5;
    VAR_12->pUpsert = VAR_8;
    VAR_12->orconf = VAR_7;
  }else{
    FUNC_5( VAR_5 );
    FUNC_1(VAR_11, VAR_5);
    FUNC_5( VAR_8 );
    FUNC_4(VAR_11, VAR_8);
  }
  FUNC_2(VAR_11, VAR_6);

  return VAR_12;
}
