
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_5__ {scalar_t__ pVtab; } ;
struct TYPE_6__ {int pExpr; TYPE_1__ base; } ;
typedef int Fts3Table ;
typedef TYPE_2__ Fts3Cursor ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;

void FUNC_3(
  sqlite3_context *VAR_2,
  Fts3Cursor *VAR_3,
  const char *VAR_4
){
  Fts3Table *VAR_5 = (Fts3Table *)VAR_3->base.pVtab;
  const char *VAR_6;

  if( VAR_4 ){
    VAR_6 = VAR_4;
  }else{
    VAR_6 = VAR_0;
  }

  if( !VAR_3->pExpr ){
    FUNC_2(VAR_2, "", 0, VAR_1);
    return;
  }else{

    FUNC_0(VAR_2, VAR_3, VAR_6);
    FUNC_1(VAR_5);
  }
}
