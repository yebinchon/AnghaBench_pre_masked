
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zDir ;
typedef int sqlite3_vfs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,char*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vfs *VAR_3,
  const char *VAR_4,
  int VAR_5,
  char *VAR_6
){
  char VAR_7[VAR_0+1];
  if( VAR_4[0]=='/' ){
    VAR_7[0] = '\0';
  }else{
    if( FUNC_0(VAR_7, sizeof(VAR_7))==0 ) return VAR_1;
  }
  VAR_7[VAR_0] = '\0';

  FUNC_1(VAR_5, VAR_6, "%s/%s", VAR_7, VAR_4);
  VAR_6[VAR_5-1] = '\0';

  return VAR_2;
}
