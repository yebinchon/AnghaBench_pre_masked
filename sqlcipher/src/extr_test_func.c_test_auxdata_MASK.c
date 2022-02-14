
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int,int ) ;
 int FUNC_5 (int *,int,char*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 char* FUNC_9 (int *,int) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;
  char *VAR_5 = FUNC_9(VAR_1, VAR_2*2);
  if( !VAR_5 ) return;
  FUNC_2(VAR_5, 0, VAR_2*2);
  for(VAR_4=0; VAR_4<VAR_2; VAR_4++){
    char const *VAR_6 = (char*)FUNC_6(VAR_3[VAR_4]);
    if( VAR_6 ){
      int VAR_7;
      char *VAR_8 = FUNC_3(VAR_1, VAR_4);
      if( VAR_8 ){
        VAR_5[VAR_4*2] = '1';
        FUNC_0( FUNC_7(VAR_8,VAR_6)==0 );
      }else {
        VAR_5[VAR_4*2] = '0';
      }
      VAR_7 = (int)FUNC_8(VAR_6) + 1;
      VAR_8 = FUNC_9(VAR_1, VAR_7);
      if( VAR_8 ){
        FUNC_1(VAR_8, VAR_6, VAR_7);
        FUNC_5(VAR_1, VAR_4, VAR_8, VAR_0);
      }
      VAR_5[VAR_4*2+1] = ' ';
    }
  }
  FUNC_4(VAR_1, VAR_5, 2*VAR_2-1, VAR_0);
}
