
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int FUNC_0 (void*,int,void const*,int,void const*) ;

__attribute__((used)) static int FUNC_1(
  void *VAR_0,
  int VAR_1, const void *VAR_2,
  int VAR_3, const void *VAR_4
){
  const u8 *VAR_5 = (const u8*)VAR_2;
  const u8 *VAR_6 = (const u8*)VAR_4;
  while( VAR_1 && VAR_5[VAR_1-1]==' ' ) VAR_1--;
  while( VAR_3 && VAR_6[VAR_3-1]==' ' ) VAR_3--;
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
