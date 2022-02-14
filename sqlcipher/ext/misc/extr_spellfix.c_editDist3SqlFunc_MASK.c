
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
typedef int EditDist3Lang ;
typedef int EditDist3FromString ;
typedef int EditDist3Config ;


 int FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (int *,char const*,int,int const*,int ) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int const*,char const*,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  EditDist3Config *VAR_3 = (EditDist3Config*)FUNC_9(VAR_0);
  sqlite3 *VAR_4 = FUNC_5(VAR_0);
  int VAR_5;
  if( VAR_1==1 ){
    const char *VAR_6 = (const char*)FUNC_12(VAR_2[0]);
    VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_6);
    if( VAR_5 ) FUNC_6(VAR_0, VAR_5);
  }else{
    const char *VAR_7 = (const char*)FUNC_12(VAR_2[0]);
    const char *VAR_8 = (const char*)FUNC_12(VAR_2[1]);
    int VAR_9 = FUNC_10(VAR_2[0]);
    int VAR_10 = FUNC_10(VAR_2[1]);
    int VAR_11 = VAR_1==3 ? FUNC_11(VAR_2[2]) : 0;
    const EditDist3Lang *VAR_12 = FUNC_2(VAR_3, VAR_11);
    EditDist3FromString *VAR_13;
    int VAR_14;

    VAR_13 = FUNC_4(VAR_12, VAR_7, VAR_9);
    if( VAR_13==0 ){
      FUNC_7(VAR_0);
      return;
    }
    VAR_14 = FUNC_1(VAR_13, VAR_8, VAR_10, VAR_12, 0);
    FUNC_3(VAR_13);
    if( VAR_14==(-1) ){
      FUNC_7(VAR_0);
    }else{
      FUNC_8(VAR_0, VAR_14);
    }
  }
}
