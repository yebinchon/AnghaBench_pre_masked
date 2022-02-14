
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const char **VAR_2, int *VAR_3){
  const int VAR_4 = 10000000;
  const char *VAR_5;
  int VAR_6 = 0;

  for(VAR_5=*VAR_2; VAR_5[0]>='0' && VAR_5[0]<='9'; VAR_5++){
    VAR_6 = VAR_6 * 10 + (VAR_5[0] - '0');
    if( VAR_6>VAR_4 ){
      VAR_6 = 0;
      break;
    }
  }
  if( VAR_5==*VAR_2 ) return VAR_0;
  *VAR_3 = VAR_6;
  *VAR_2 = VAR_5;
  return VAR_1;
}
