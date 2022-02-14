
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (char const*,char const*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  int VAR_3 = FUNC_0(
                    (const char*)FUNC_4(VAR_2[0]),
                    (const char*)FUNC_4(VAR_2[1]),
                    0);
  if( VAR_3<0 ){
    if( VAR_3==(-3) ){
      FUNC_2(VAR_0);
    }else if( VAR_3==(-2) ){
      FUNC_1(VAR_0, "non-ASCII input to editdist()", -1);
    }else{
      FUNC_1(VAR_0, "NULL input to editdist()", -1);
    }
  }else{
    FUNC_3(VAR_0, VAR_3);
  }
}
