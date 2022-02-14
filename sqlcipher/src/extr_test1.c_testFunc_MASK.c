
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  while( VAR_2>=2 ){
    const char *VAR_4 = (char*)FUNC_11(VAR_3[0]);
    if( VAR_4 ){
      if( 0==FUNC_0(VAR_4, "int") ){
        FUNC_3(VAR_1, FUNC_9(VAR_3[1]));
      }else if( FUNC_0(VAR_4,"int64")==0 ){
        FUNC_4(VAR_1, FUNC_10(VAR_3[1]));
      }else if( FUNC_0(VAR_4,"string")==0 ){
        FUNC_6(VAR_1, (char*)FUNC_11(VAR_3[1]), -1,
            VAR_0);
      }else if( FUNC_0(VAR_4,"double")==0 ){
        FUNC_1(VAR_1, FUNC_8(VAR_3[1]));
      }else if( FUNC_0(VAR_4,"null")==0 ){
        FUNC_5(VAR_1);
      }else if( FUNC_0(VAR_4,"value")==0 ){
        FUNC_7(VAR_1, VAR_3[FUNC_9(VAR_3[1])]);
      }else{
        goto error_out;
      }
    }else{
      goto error_out;
    }
    VAR_2 -= 2;
    VAR_3 += 2;
  }
  return;

error_out:
  FUNC_2(VAR_1,"first argument should be one of: "
      "int int64 string double null value", -1);
}
