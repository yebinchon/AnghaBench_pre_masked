
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int Fts3Cursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,char*,int *,int **) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  Fts3Cursor *VAR_4;

  FUNC_0(VAR_2);

  FUNC_1( VAR_2==1 );
  if( FUNC_3(VAR_1, "offsets", VAR_3[0], &VAR_4) ) return;
  FUNC_1( *VAR_4 );
  if( VAR_0==FUNC_2(VAR_1, VAR_4) ){
    FUNC_4(VAR_1, VAR_4);
  }
}
