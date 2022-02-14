
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,char*,char const*) ;
 int FUNC_3 (int,char*,char const*) ;

__attribute__((used)) static int FUNC_4(
  const char *VAR_2,
  char *VAR_3,
  int VAR_4
){
  int VAR_5 = FUNC_1(VAR_2);
  int VAR_6 = 0;
  if( VAR_2[0]!='/' ){
    if( FUNC_0(VAR_3, VAR_4-2)==0 ){
      return FUNC_3(VAR_0, "getcwd", VAR_2);
    }
    VAR_6 = FUNC_1(VAR_3);
    VAR_3[VAR_6++] = '/';
  }
  if( (VAR_6+VAR_5+1)>VAR_4 ){


    VAR_3[VAR_6] = '\0';
    return VAR_0;
  }
  FUNC_2(VAR_4-VAR_6, &VAR_3[VAR_6], "%s", VAR_2);
  return VAR_1;
}
