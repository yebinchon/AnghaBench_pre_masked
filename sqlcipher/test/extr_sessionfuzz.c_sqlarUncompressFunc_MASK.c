
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uLongf ;
typedef scalar_t__ uLong ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int Bytef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,scalar_t__,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__*,int const*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  uLong VAR_5;
  uLongf VAR_6;

  FUNC_0( VAR_3==2 );
  VAR_6 = FUNC_8(VAR_4[1]);

  if( VAR_6<=0 || VAR_6==(VAR_5 = FUNC_7(VAR_4[0])) ){
    FUNC_5(VAR_2, VAR_4[0]);
  }else{
    const Bytef *VAR_7= FUNC_6(VAR_4[0]);
    Bytef *VAR_8 = FUNC_2(VAR_6);
    if( VAR_1!=FUNC_9(VAR_8, &VAR_6, VAR_7, VAR_5) ){
      FUNC_4(VAR_2, "error in uncompress()", -1);
    }else{
      FUNC_3(VAR_2, VAR_8, VAR_6, VAR_0);
    }
    FUNC_1(VAR_8);
  }
}
