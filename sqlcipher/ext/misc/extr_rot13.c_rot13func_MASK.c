
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zTemp ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (unsigned char const) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  const unsigned char *VAR_5;
  int VAR_6;
  unsigned char *VAR_7;
  unsigned char *VAR_8 = 0;
  int VAR_9;
  unsigned char VAR_10[100];
  FUNC_0( VAR_3==1 );
  if( FUNC_8(VAR_4[0])==VAR_0 ) return;
  VAR_5 = (const unsigned char*)FUNC_7(VAR_4[0]);
  VAR_6 = FUNC_6(VAR_4[0]);
  if( VAR_6<sizeof(VAR_10)-1 ){
    VAR_7 = VAR_10;
  }else{
    VAR_7 = VAR_8 = (unsigned char*)FUNC_3( VAR_6+1 );
    if( VAR_7==0 ){
      FUNC_4(VAR_2);
      return;
    }
  }
  for(VAR_9=0; VAR_9<VAR_6; VAR_9++) VAR_7[VAR_9] = FUNC_1(VAR_5[VAR_9]);
  VAR_7[VAR_9] = 0;
  FUNC_5(VAR_2, (char*)VAR_7, VAR_9, VAR_1);
  FUNC_2(VAR_8);
}
