
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0){
  if( FUNC_0("yes",VAR_0)==0
   || FUNC_0("on",VAR_0)==0
   || FUNC_0("true",VAR_0)==0
   || (VAR_0[0]=='1' && VAR_0[1]==0)
  ){
    return 1;
  }
  if( FUNC_0("no",VAR_0)==0
   || FUNC_0("off",VAR_0)==0
   || FUNC_0("false",VAR_0)==0
   || (VAR_0[0]=='0' && VAR_0[1]==0)
  ){
    return 0;
  }
  return -1;
}
