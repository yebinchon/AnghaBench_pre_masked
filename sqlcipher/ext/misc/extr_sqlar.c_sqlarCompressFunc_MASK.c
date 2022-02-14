
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLongf ;
typedef int uLong ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int Bytef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  FUNC_0( VAR_4==1 );
  if( FUNC_11(VAR_5[0])==VAR_0 ){
    const Bytef *VAR_6 = FUNC_9(VAR_5[0]);
    uLong VAR_7 = FUNC_10(VAR_5[0]);
    uLongf VAR_8 = FUNC_2(VAR_7);
    Bytef *VAR_9;

    VAR_9 = (Bytef*)FUNC_4(VAR_8);
    if( VAR_9==0 ){
      FUNC_7(VAR_3);
      return;
    }else{
      if( VAR_2!=FUNC_1(VAR_9, &VAR_8, VAR_6, VAR_7) ){
        FUNC_6(VAR_3, "error in compress()", -1);
      }else if( VAR_8<VAR_7 ){
        FUNC_5(VAR_3, VAR_9, VAR_8, VAR_1);
      }else{
        FUNC_8(VAR_3, VAR_5[0]);
      }
      FUNC_3(VAR_9);
    }
  }else{
    FUNC_8(VAR_3, VAR_5[0]);
  }
}
