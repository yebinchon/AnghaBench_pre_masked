
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(
  void *VAR_0,
  int VAR_1, const void *VAR_2,
  int VAR_3, const void *VAR_4
){
  const char *VAR_5 = (const char*)VAR_2;
  const char *VAR_6 = (const char*)VAR_4;
  int VAR_7, VAR_8;
  for(VAR_7=0; VAR_7<VAR_1 && VAR_7<VAR_3; VAR_7++){
    VAR_8 = (int)FUNC_0(VAR_5[VAR_7]) - (int)FUNC_0(VAR_6[VAR_7]);
    if( VAR_8!=0 ) return VAR_8;
  }
  return VAR_1 - VAR_3;
}
