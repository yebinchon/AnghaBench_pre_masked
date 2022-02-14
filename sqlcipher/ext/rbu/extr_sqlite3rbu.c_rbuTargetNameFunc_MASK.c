
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3rbu ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int,int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  sqlite3rbu *VAR_4 = FUNC_4(VAR_1);
  const char *VAR_5;
  FUNC_0( VAR_2==1 || VAR_2==2 );

  VAR_5 = (const char*)FUNC_6(VAR_3[0]);
  if( VAR_5 ){
    if( FUNC_2(VAR_4) ){
      if( VAR_2==1 || 0==FUNC_5(VAR_3[1]) ){
        FUNC_3(VAR_1, VAR_5, -1, VAR_0);
      }
    }else{
      if( FUNC_7(VAR_5)>4 && FUNC_1("data", VAR_5, 4)==0 ){
        int VAR_6;
        for(VAR_6=4; VAR_5[VAR_6]>='0' && VAR_5[VAR_6]<='9'; VAR_6++);
        if( VAR_5[VAR_6]=='_' && VAR_5[VAR_6+1] ){
          FUNC_3(VAR_1, &VAR_5[VAR_6+1], -1, VAR_0);
        }
      }
    }
  }
}
