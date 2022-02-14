
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 () ;

void FUNC_3(const char *VAR_0, const char *VAR_1, int *VAR_2){
  if( *VAR_2==0 ){
    if( FUNC_0(VAR_0, VAR_1) ){
      FUNC_1("testCompareStr: \"%s\" != \"%s\"\n", VAR_0, VAR_1);
      *VAR_2 = 1;
      FUNC_2();
    }
  }
}
