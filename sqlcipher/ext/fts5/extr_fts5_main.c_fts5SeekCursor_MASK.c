
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pVtab; } ;
struct TYPE_15__ {scalar_t__ pStmt; int pExpr; TYPE_1__ base; } ;
struct TYPE_12__ {scalar_t__ zErrMsg; } ;
struct TYPE_13__ {TYPE_2__ base; } ;
struct TYPE_14__ {TYPE_3__ p; int pStorage; } ;
typedef TYPE_4__ Fts5FullTable ;
typedef TYPE_5__ Fts5Cursor ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(Fts5Cursor *VAR_4, int VAR_5){
  int VAR_6 = VAR_2;


  if( VAR_4->pStmt==0 ){
    Fts5FullTable *VAR_7 = (Fts5FullTable*)(VAR_4->base.pVtab);
    int VAR_8 = FUNC_4(VAR_4);
    VAR_6 = FUNC_5(
        VAR_7->pStorage, VAR_8, &VAR_4->pStmt, (VAR_5?&VAR_7->p.base.zErrMsg:0)
    );
    FUNC_2( VAR_6!=VAR_2 || VAR_7->p.base.zErrMsg==0 );
    FUNC_2( FUNC_1(VAR_4, VAR_0) );
  }

  if( VAR_6==VAR_2 && FUNC_1(VAR_4, VAR_0) ){
    FUNC_2( VAR_4->pExpr );
    FUNC_7(VAR_4->pStmt);
    FUNC_6(VAR_4->pStmt, 1, FUNC_3(VAR_4));
    VAR_6 = FUNC_8(VAR_4->pStmt);
    if( VAR_6==VAR_3 ){
      VAR_6 = VAR_2;
      FUNC_0(VAR_4, VAR_0);
    }else{
      VAR_6 = FUNC_7(VAR_4->pStmt);
      if( VAR_6==VAR_2 ){
        VAR_6 = VAR_1;
      }
    }
  }
  return VAR_6;
}
