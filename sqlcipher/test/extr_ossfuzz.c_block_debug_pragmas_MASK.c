
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_3,
  int VAR_4,
  const char *VAR_5,
  const char *VAR_6,
  const char *VAR_7,
  const char *VAR_8
){
  if( VAR_4==VAR_2
   && (FUNC_1("vdbe_", VAR_5, 5)==0
        || FUNC_0("parser_trace", VAR_5)==0)
  ){
    return VAR_0;
  }
  return VAR_1;
}
