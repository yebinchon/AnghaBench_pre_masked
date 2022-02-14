
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0){
  return
    FUNC_0(VAR_0) &&
    VAR_0[0]!='w' && VAR_0[0]!='x' && VAR_0[0]!='y' &&
    FUNC_1(VAR_0+1) &&
    FUNC_0(VAR_0+2);
}
