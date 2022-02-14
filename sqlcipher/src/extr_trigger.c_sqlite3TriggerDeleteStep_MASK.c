
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {int orconf; int * pWhere; } ;
typedef TYPE_1__ TriggerStep ;
typedef int Token ;
struct TYPE_8__ {int * db; } ;
typedef TYPE_2__ Parse ;
typedef int Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ,int *,char const*,char const*) ;

TriggerStep *FUNC_3(
  Parse *VAR_4,
  Token *VAR_5,
  Expr *VAR_6,
  const char *VAR_7,
  const char *VAR_8
){
  sqlite3 *VAR_9 = VAR_4->db;
  TriggerStep *VAR_10;

  VAR_10 = FUNC_2(VAR_4, VAR_3, VAR_5,VAR_7,VAR_8);
  if( VAR_10 ){
    if( VAR_1 ){
      VAR_10->pWhere = VAR_6;
      VAR_6 = 0;
    }else{
      VAR_10->pWhere = FUNC_1(VAR_9, VAR_6, VAR_0);
    }
    VAR_10->orconf = VAR_2;
  }
  FUNC_0(VAR_9, VAR_6);
  return VAR_10;
}
