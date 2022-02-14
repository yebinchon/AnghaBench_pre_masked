
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const char *VAR_2, int *VAR_3){
  int VAR_4 = 0;
  const char *VAR_5 = VAR_2;

  while( *VAR_5>='0' && *VAR_5<='9' ){
    VAR_4 = VAR_4*10 + (*VAR_5 - '0');
    VAR_5++;
  }
  if( *VAR_5=='K' || *VAR_5=='k' ){
    VAR_4 = VAR_4 * 1024;
    VAR_5++;
  }else if( *VAR_5=='M' || *VAR_5=='m' ){
    VAR_4 = VAR_4 * 1024 * 1024;
    VAR_5++;
  }

  if( *VAR_5 ) return VAR_0;
  *VAR_3 = VAR_4;
  return VAR_1;
}
