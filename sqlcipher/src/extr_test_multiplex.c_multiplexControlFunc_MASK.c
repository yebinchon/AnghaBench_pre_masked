
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int,int*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_6,
  int VAR_7,
  sqlite3_value **VAR_8
){
  int VAR_9 = VAR_5;
  sqlite3 *VAR_10 = FUNC_0(VAR_6);
  int VAR_11 = 0;
  int VAR_12;

  if( !VAR_10 || VAR_7!=2 ){
    VAR_9 = VAR_3;
  }else{

    VAR_11 = FUNC_3(VAR_8[0]);
    VAR_12 = FUNC_3(VAR_8[1]);

    switch( VAR_11 ){
      case 1:
        VAR_11 = VAR_0;
        break;
      case 2:
        VAR_11 = VAR_1;
        break;
      case 3:
        VAR_11 = VAR_2;
        break;
      default:
        VAR_9 = VAR_4;
        break;
    }
  }
  if( VAR_9==VAR_5 ){
    VAR_9 = FUNC_1(VAR_10, 0, VAR_11, &VAR_12);
  }
  FUNC_2(VAR_6, VAR_9);
}
