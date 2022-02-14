
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,int,int ,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  FILE *VAR_3;
  const char *VAR_4;
  sqlite3_int64 VAR_5;
  const char *VAR_6;

  (void)VAR_1;
  VAR_6 = (const char*)FUNC_6(VAR_2[0]);
  if( VAR_6==0 ) return;
  VAR_3 = FUNC_1(VAR_6, "wb");
  if( VAR_3==0 ) return;
  VAR_4 = (const char*)FUNC_4(VAR_2[1]);
  if( VAR_4==0 ){
    VAR_5 = 0;
  }else{
    VAR_5 = FUNC_2(VAR_4, 1, FUNC_5(VAR_2[1]), VAR_3);
  }
  FUNC_0(VAR_3);
  FUNC_3(VAR_0, VAR_5);
}
