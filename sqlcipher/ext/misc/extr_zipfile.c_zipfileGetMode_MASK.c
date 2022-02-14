
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int sqlite3_value ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_value *VAR_6,
  int VAR_7,
  u32 *VAR_8,
  char **VAR_9
){
  const char *VAR_10 = (const char*)FUNC_2(VAR_6);
  u32 VAR_11 = 0;
  if( VAR_10==0 ){
    VAR_11 = (VAR_7 ? (VAR_3 + 0755) : (VAR_5 + 0644));
  }else if( VAR_10[0]>='0' && VAR_10[0]<='9' ){
    VAR_11 = (unsigned int)FUNC_1(VAR_6);
  }else{
    const char VAR_12[11] = "-rwxrwxrwx";
    int VAR_13;
    if( FUNC_3(VAR_10)!=10 ) goto parse_error;
    switch( VAR_10[0] ){
      case '-': VAR_11 |= VAR_5; break;
      case 'd': VAR_11 |= VAR_3; break;
      case 'l': VAR_11 |= VAR_4; break;
      default: goto parse_error;
    }
    for(VAR_13=1; VAR_13<10; VAR_13++){
      if( VAR_10[VAR_13]==VAR_12[VAR_13] ) VAR_11 |= 1 << (9-VAR_13);
      else if( VAR_10[VAR_13]!='-' ) goto parse_error;
    }
  }
  if( ((VAR_11 & VAR_3)==0)==VAR_7 ){


    *VAR_9 = FUNC_0("zipfile: mode does not match data");
    return VAR_0;
  }
  *VAR_8 = VAR_11;
  return VAR_2;

 parse_error:
  *VAR_9 = FUNC_0("zipfile: parse error in mode: %s", VAR_10);
  return VAR_1;
}
