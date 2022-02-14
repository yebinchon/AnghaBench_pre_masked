
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3){
  if( VAR_3 ){
    if( 0==FUNC_0(VAR_3, "exclusive") ) return VAR_0;
    if( 0==FUNC_0(VAR_3, "normal") ) return VAR_1;
  }
  return VAR_2;
}
