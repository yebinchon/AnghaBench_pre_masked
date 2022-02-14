
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CmdLineOption ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(CmdLineOption *VAR_0, const char *VAR_1){
  if( 0==FUNC_1(VAR_1, "true") ) return 1;
  if( 0==FUNC_1(VAR_1, "1") ) return 1;
  if( 0==FUNC_1(VAR_1, "0") ) return 0;
  if( 0==FUNC_1(VAR_1, "false") ) return 0;
  FUNC_0(VAR_0);
  return 0;
}
