
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct groupConcat {scalar_t__ nUsed; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct groupConcat*,char const*,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const char *VAR_4;
  struct groupConcat *VAR_5;
  const char *VAR_6;
  int VAR_7, VAR_8;
  FUNC_0( VAR_2==1 || VAR_2==2 );
  if( FUNC_5(VAR_3[0])==VAR_0 ) return;
  VAR_5= (struct groupConcat*)FUNC_2(VAR_1, sizeof(*VAR_5));

  if( VAR_5 ){
    int VAR_9 = VAR_5->nUsed==0;
    if( !VAR_9 ){
      if( VAR_2==2 ){
        VAR_6 = (char*)FUNC_4(VAR_3[1]);
        VAR_8 = FUNC_3(VAR_3[1]);
      }else{
        VAR_6 = ",";
        VAR_8 = 1;
      }
      if( VAR_8 ) FUNC_1(VAR_5, VAR_6, VAR_8);
    }
    VAR_4 = (char*)FUNC_4(VAR_3[0]);
    VAR_7 = FUNC_3(VAR_3[0]);
    if( VAR_4 ) FUNC_1(VAR_5, VAR_4, VAR_7);
  }
}
