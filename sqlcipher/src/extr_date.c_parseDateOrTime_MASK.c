
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_context ;
typedef int DateTime ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,double) ;
 scalar_t__ FUNC_4 (char const*,double*,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(
  sqlite3_context *VAR_1,
  const char *VAR_2,
  DateTime *VAR_3
){
  double VAR_4;
  if( FUNC_1(VAR_2,VAR_3)==0 ){
    return 0;
  }else if( FUNC_0(VAR_2, VAR_3)==0 ){
    return 0;
  }else if( FUNC_6(VAR_2,"now")==0 && FUNC_5(VAR_1) ){
    return FUNC_2(VAR_1, VAR_3);
  }else if( FUNC_4(VAR_2, &VAR_4, FUNC_7(VAR_2), VAR_0) ){
    FUNC_3(VAR_3, VAR_4);
    return 0;
  }
  return 1;
}
