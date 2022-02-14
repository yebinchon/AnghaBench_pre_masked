
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vfs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vfs *VAR_7,
  const char *VAR_8,
  int VAR_9,
  int *VAR_10
){
  int VAR_11;
  int VAR_12 = VAR_0;

  FUNC_1( VAR_9==VAR_2
       || VAR_9==VAR_3
       || VAR_9==VAR_4
  );

  if( VAR_9==VAR_4 ) VAR_12 = VAR_1|VAR_6;
  if( VAR_9==VAR_3 ) VAR_12 = VAR_1;

  VAR_11 = FUNC_0(VAR_8, VAR_12);
  *VAR_10 = (VAR_11==0);
  return VAR_5;
}
