
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pVtab; } ;
struct TYPE_7__ {scalar_t__ pStmt; int bSeekStmt; TYPE_1__ base; } ;
struct TYPE_6__ {scalar_t__ pSeekStmt; int db; int zReadExprlist; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,int,int ,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_3(Fts3Cursor *VAR_3){
  int VAR_4 = VAR_1;
  if( VAR_3->pStmt==0 ){
    Fts3Table *VAR_5 = (Fts3Table *)VAR_3->base.pVtab;
    char *VAR_6;
    if( VAR_5->pSeekStmt ){
      VAR_3->pStmt = VAR_5->pSeekStmt;
      VAR_5->pSeekStmt = 0;
    }else{
      VAR_6 = FUNC_1("SELECT %s WHERE rowid = ?", VAR_5->zReadExprlist);
      if( !VAR_6 ) return VAR_0;
      VAR_4 = FUNC_2(VAR_5->db, VAR_6,-1,VAR_2,&VAR_3->pStmt,0);
      FUNC_0(VAR_6);
    }
    if( VAR_4==VAR_1 ) VAR_3->bSeekStmt = 1;
  }
  return VAR_4;
}
