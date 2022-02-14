
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {int nResult; char* zResult; int * pStmt; int db; scalar_t__ bReprepare; scalar_t__ bSqlOnly; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*) ;

void FUNC_11(void){
  int VAR_2, VAR_3, VAR_4;
  if( VAR_1.bSqlOnly ) return;
  FUNC_0( VAR_1.pStmt );
  VAR_1.nResult = 0;
  while( FUNC_9(VAR_1.pStmt)==VAR_0 ){
    VAR_3 = FUNC_3(VAR_1.pStmt);
    for(VAR_2=0; VAR_2<VAR_3; VAR_2++){
      const char *VAR_5 = (const char*)FUNC_4(VAR_1.pStmt, VAR_2);
      if( VAR_5==0 ) VAR_5 = "nil";
      VAR_4 = (int)FUNC_10(VAR_5);
      if( VAR_1.nResult+VAR_4<sizeof(VAR_1.zResult)-2 ){
        if( VAR_1.nResult>0 ) VAR_1.zResult[VAR_1.nResult++] = ' ';
        FUNC_1(VAR_1.zResult + VAR_1.nResult, VAR_5, VAR_4+1);
        VAR_1.nResult += VAR_4;
      }
    }
  }
  {
    FUNC_7(VAR_1.pStmt);
  }
  FUNC_2();
}
