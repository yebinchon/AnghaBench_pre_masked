
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_6__ {scalar_t__ pVtab; } ;
struct TYPE_8__ {int isEof; TYPE_1__ base; int pStmt; scalar_t__ isRequireSeek; int iPrevId; } ;
struct TYPE_7__ {scalar_t__ zContentTbl; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(sqlite3_context *VAR_3, Fts3Cursor *VAR_4){
  int VAR_5 = VAR_1;
  if( VAR_4->isRequireSeek ){
    VAR_5 = FUNC_0(VAR_4);
    if( VAR_5==VAR_1 ){
      FUNC_1(VAR_4->pStmt, 1, VAR_4->iPrevId);
      VAR_4->isRequireSeek = 0;
      if( VAR_2==FUNC_4(VAR_4->pStmt) ){
        return VAR_1;
      }else{
        VAR_5 = FUNC_2(VAR_4->pStmt);
        if( VAR_5==VAR_1 && ((Fts3Table *)VAR_4->base.pVtab)->zContentTbl==0 ){



          VAR_5 = VAR_0;
          VAR_4->isEof = 1;
        }
      }
    }
  }

  if( VAR_5!=VAR_1 && VAR_3 ){
    FUNC_3(VAR_3, VAR_5);
  }
  return VAR_5;
}
