
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int VAR_1, int *VAR_2){
  int VAR_3 = 0;
  while( VAR_0[VAR_3] ){
    int VAR_4 = FUNC_2(VAR_0+VAR_3, VAR_2);
    if( (FUNC_1(VAR_0+VAR_3,"--endif",7)==0 && FUNC_0(VAR_0[VAR_3+7]))
     || (VAR_1 && FUNC_1(VAR_0+VAR_3,"--else",6)==0 && FUNC_0(VAR_0[VAR_3+6]))
    ){
      return VAR_3+VAR_4;
    }
    if( FUNC_1(VAR_0+VAR_3,"--if",4)==0 && FUNC_0(VAR_0[VAR_3+4]) ){
      int VAR_5 = FUNC_3(VAR_0+VAR_3+VAR_4, 0, VAR_2);
      VAR_3 += VAR_5 + VAR_4;
    }else{
      VAR_3 += VAR_4;
    }
  }
  return VAR_3;
}
