
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(const char *VAR_0, char *VAR_1, int VAR_2){
  const char *VAR_3 = VAR_0;
  char *VAR_4 = VAR_1;
  char *VAR_5 = &VAR_4[VAR_2-1];
  char VAR_6 = 0;

  if( VAR_3==0 ) return 0;
  while( *VAR_3==' ' ) VAR_3++;
  switch( *VAR_3 ){
    case '"': VAR_6 = '"'; break;
    case '\'': VAR_6 = '\''; break;
    case '`': VAR_6 = '`'; break;
    case '[': VAR_6 = ']'; break;
  }

  if( VAR_6 ){
    VAR_3++;
    while( *VAR_3 && VAR_4<VAR_5 ){
      if( *VAR_3==VAR_6 ){
        VAR_3++;
        if( *VAR_3!=VAR_6 ) break;
      }
      if( VAR_4<VAR_5 ) *VAR_4++ = *VAR_3;
      VAR_3++;
    }
  }else{
    while( *VAR_3 && *VAR_3!=' ' && *VAR_3!='(' ){
      if( VAR_4<VAR_5 ) *VAR_4++ = *VAR_3;
      VAR_3++;
    }
  }

  *VAR_4 = '\0';
  return VAR_3;
}
