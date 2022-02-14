
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;



__attribute__((used)) static unsigned int FUNC_0(int VAR_0, const u8 *VAR_1, int VAR_2){
  int VAR_3;
  unsigned int VAR_4 = 13;
  for(VAR_3=VAR_2-1; VAR_3>=0; VAR_3--){
    VAR_4 = (VAR_4 << 3) ^ VAR_4 ^ VAR_1[VAR_3];
  }
  return (VAR_4 % VAR_0);
}
