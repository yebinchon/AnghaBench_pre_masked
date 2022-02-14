
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (char const*,int*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int *VAR_1){
  int VAR_2 = 0;
  while( VAR_0[VAR_2] && (FUNC_1(VAR_0+VAR_2,"--end",5) || !FUNC_0(VAR_0[VAR_2+5])) ){
    VAR_2 += FUNC_2(VAR_0+VAR_2, VAR_1);
  }
  return VAR_2;
}
