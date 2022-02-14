
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int SHA1Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,char*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  SHA1Context VAR_6;
  int VAR_7 = FUNC_8(VAR_5[0]);
  int VAR_8 = FUNC_6(VAR_5[0]);
  char VAR_9[44];

  FUNC_0( VAR_4==1 );
  if( VAR_7==VAR_1 ) return;
  FUNC_2(&VAR_6);
  if( VAR_7==VAR_0 ){
    FUNC_3(&VAR_6, FUNC_5(VAR_5[0]), VAR_8);
  }else{
    FUNC_3(&VAR_6, FUNC_7(VAR_5[0]), VAR_8);
  }
  FUNC_1(&VAR_6, VAR_9);
  FUNC_4(VAR_3, VAR_9, 40, VAR_2);
}
