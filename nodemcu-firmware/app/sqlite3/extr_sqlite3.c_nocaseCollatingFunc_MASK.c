
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_0,
  int VAR_1, const void *VAR_2,
  int VAR_3, const void *VAR_4
){
  int VAR_5 = FUNC_1(
      (const char *)VAR_2, (const char *)VAR_4, (VAR_1<VAR_3)?VAR_1:VAR_3);
  FUNC_0(VAR_0);
  if( 0==VAR_5 ){
    VAR_5 = VAR_1-VAR_3;
  }
  return VAR_5;
}
