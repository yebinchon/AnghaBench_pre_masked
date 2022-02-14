
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int SHA3Context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  SHA3Context VAR_6;
  int VAR_7 = FUNC_9(VAR_5[0]);
  int VAR_8 = FUNC_6(VAR_5[0]);
  int VAR_9;
  if( VAR_4==1 ){
    VAR_9 = 256;
  }else{
    VAR_9 = FUNC_7(VAR_5[1]);
    if( VAR_9!=224 && VAR_9!=256 && VAR_9!=384 && VAR_9!=512 ){
      FUNC_4(VAR_3, "SHA3 size should be one of: 224 256 "
                                    "384 512", -1);
      return;
    }
  }
  if( VAR_7==VAR_1 ) return;
  FUNC_1(&VAR_6, VAR_9);
  if( VAR_7==VAR_0 ){
    FUNC_2(&VAR_6, FUNC_5(VAR_5[0]), VAR_8);
  }else{
    FUNC_2(&VAR_6, FUNC_8(VAR_5[0]), VAR_8);
  }
  FUNC_3(VAR_3, FUNC_0(&VAR_6), VAR_9/8, VAR_2);
}
