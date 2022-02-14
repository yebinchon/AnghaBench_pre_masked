
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_7__ {int ePlan; int pStmt; int pExpr; int iLastRowid; } ;
typedef TYPE_1__ Fts5Cursor ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(sqlite3_vtab_cursor *VAR_5){
  Fts5Cursor *VAR_6 = (Fts5Cursor*)VAR_5;
  int VAR_7;

  FUNC_2( (VAR_6->ePlan<3)==
          (VAR_6->ePlan==VAR_1 || VAR_6->ePlan==VAR_2)
  );
  FUNC_2( !FUNC_1(VAR_6, VAR_0) );

  if( VAR_6->ePlan<3 ){
    int VAR_8 = 0;
    if( (VAR_7 = FUNC_4(VAR_6, &VAR_8)) || VAR_8 ) return VAR_7;
    VAR_7 = FUNC_7(VAR_6->pExpr, VAR_6->iLastRowid);
    FUNC_0(VAR_6, FUNC_6(VAR_6->pExpr));
    FUNC_3(VAR_6);
  }else{
    switch( VAR_6->ePlan ){
      case 128: {
        FUNC_0(VAR_6, VAR_0);
        VAR_7 = VAR_3;
        break;
      }

      case 129: {
        VAR_7 = FUNC_5(VAR_6);
        break;
      }

      default:
        VAR_7 = FUNC_9(VAR_6->pStmt);
        if( VAR_7!=VAR_4 ){
          FUNC_0(VAR_6, VAR_0);
          VAR_7 = FUNC_8(VAR_6->pStmt);
        }else{
          VAR_7 = VAR_3;
        }
        break;
    }
  }

  return VAR_7;
}
