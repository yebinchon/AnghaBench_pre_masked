
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(
  void *VAR_0,
  void *VAR_1, int VAR_2,
  void *VAR_3, int VAR_4
){
  u8 *VAR_5 = (u8 *)VAR_3;
  u32 *VAR_6 = (u32 *)VAR_0;
  u32 VAR_7 = *VAR_6;
  int VAR_8;

  FUNC_0(VAR_1);
  FUNC_0(VAR_2);

  for(VAR_8=0; VAR_8<VAR_4; VAR_8++){
    VAR_7 += (VAR_7<<3) + (int)VAR_5[VAR_8];
  }

  *VAR_6 = VAR_7;
}
