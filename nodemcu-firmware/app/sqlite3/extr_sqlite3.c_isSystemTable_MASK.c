
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Parse ;


 int FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(Parse *VAR_0, const char *VAR_1){
  if( FUNC_2(VAR_1)>6 && 0==FUNC_1(VAR_1, "sqlite_", 7) ){
    FUNC_0(VAR_0, "table %s may not be altered", VAR_1);
    return 1;
  }
  return 0;
}
