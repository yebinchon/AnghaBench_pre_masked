
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_9__ {scalar_t__ nMatch; } ;
struct TYPE_8__ {scalar_t__ nTerms; TYPE_1__* pFts; } ;
struct TYPE_7__ {int iCursorType; TYPE_4__ snippet; TYPE_3__ q; int pStmt; } ;
typedef TYPE_2__ fulltext_cursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int,char const*,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(fulltext_cursor *VAR_1){
  int VAR_2;
  int VAR_3, VAR_4;
  int VAR_5, VAR_6;
  fulltext_vtab *VAR_7;

  if( VAR_1->snippet.nMatch ) return;
  if( VAR_1->q.nTerms==0 ) return;
  VAR_7 = VAR_1->q.pFts;
  VAR_2 = VAR_7->nColumn;
  VAR_3 = VAR_1->iCursorType - VAR_0;
  if( VAR_3<0 || VAR_3>=VAR_2 ){
    VAR_5 = 0;
    VAR_6 = VAR_2-1;
  }else{
    VAR_5 = VAR_3;
    VAR_6 = VAR_3;
  }
  for(VAR_4=VAR_5; VAR_4<=VAR_6; VAR_4++){
    const char *VAR_8;
    int VAR_9;
    VAR_8 = (const char*)FUNC_2(VAR_1->pStmt, VAR_4+1);
    VAR_9 = FUNC_1(VAR_1->pStmt, VAR_4+1);
    FUNC_0(&VAR_1->q, &VAR_1->snippet, VAR_4, VAR_8, VAR_9);
  }
}
