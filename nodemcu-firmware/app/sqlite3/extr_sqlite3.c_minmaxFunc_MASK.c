
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int CollSeq ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;
  int VAR_5;
  int VAR_6;
  CollSeq *VAR_7;

  FUNC_0( VAR_2>1 );
  VAR_5 = FUNC_4(VAR_1)==0 ? 0 : -1;
  VAR_7 = FUNC_1(VAR_1);
  FUNC_0( *VAR_7 );
  FUNC_0( VAR_5==-1 || VAR_5==0 );
  VAR_6 = 0;
  if( FUNC_5(VAR_3[0])==VAR_0 ) return;
  for(VAR_4=1; VAR_4<VAR_2; VAR_4++){
    if( FUNC_5(VAR_3[VAR_4])==VAR_0 ) return;
    if( (FUNC_2(VAR_3[VAR_6], VAR_3[VAR_4], VAR_7)^VAR_5)>=0 ){
      FUNC_6( VAR_5==0 );
      VAR_6 = VAR_4;
    }
  }
  FUNC_3(VAR_1, VAR_3[VAR_6]);
}
