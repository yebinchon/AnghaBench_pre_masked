
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (int *,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  char *VAR_6;
  int VAR_7;

  VAR_2++;
  FUNC_0( VAR_4==1 );
  if( FUNC_5(VAR_5[0])==VAR_0 ) return;
  VAR_7 = FUNC_3(VAR_5[0]);
  VAR_6 = FUNC_6(VAR_3, VAR_7+3);
  if( !VAR_6 ){
    return;
  }
  VAR_6[VAR_7+1] = 0;
  VAR_6[VAR_7+2] = 0;
  VAR_6++;
  FUNC_1(VAR_6, FUNC_4(VAR_5[0]), VAR_7);
  FUNC_2(VAR_3, VAR_6, -1, VAR_1);
}
