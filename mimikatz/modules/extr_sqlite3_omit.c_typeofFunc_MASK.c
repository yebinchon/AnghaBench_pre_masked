
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char const*,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_6,
  int VAR_7,
  sqlite3_value **VAR_8
){
  static const char *VAR_9[] = { "integer", "real", "text", "blob", "null" };
  int VAR_10 = FUNC_4(VAR_8[0]) - 1;
  FUNC_1(VAR_7);
  FUNC_2( VAR_10>=0 && VAR_10<FUNC_0(VAR_9) );
  FUNC_2( VAR_2==1 );
  FUNC_2( VAR_1==2 );
  FUNC_2( VAR_5==3 );
  FUNC_2( VAR_0==4 );
  FUNC_2( VAR_3==5 );




  FUNC_3(VAR_6, VAR_9[VAR_10], -1, VAR_4);
}
