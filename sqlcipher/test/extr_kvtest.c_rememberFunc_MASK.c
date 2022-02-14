
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  sqlite3_int64 VAR_3;
  sqlite3_int64 VAR_4;
  FUNC_1( VAR_1==2 );
  VAR_3 = FUNC_3(VAR_2[0]);
  VAR_4 = FUNC_3(VAR_2[1]);
  *(sqlite3_int64*)FUNC_0(VAR_4) = VAR_3;
  FUNC_2(VAR_0, VAR_3);
}
