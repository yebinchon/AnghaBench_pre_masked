
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;





 int FUNC_0 (unsigned char const*) ;

 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  int VAR_3;

  FUNC_2( VAR_1==1 );
  FUNC_1(VAR_1);
  switch( FUNC_7(VAR_2[0]) ){
    case 131:
    case 129:
    case 130: {
      FUNC_3(VAR_0, FUNC_5(VAR_2[0]));
      break;
    }
    case 128: {
      const unsigned char *VAR_4 = FUNC_6(VAR_2[0]);
      if( VAR_4==0 ) return;
      VAR_3 = 0;
      while( *VAR_4 ){
        VAR_3++;
        FUNC_0(VAR_4);
      }
      FUNC_3(VAR_0, VAR_3);
      break;
    }
    default: {
      FUNC_4(VAR_0);
      break;
    }
  }
}
