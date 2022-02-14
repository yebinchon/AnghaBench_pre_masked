
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;



__attribute__((used)) static unsigned int FUNC_0(int VAR_0, u8 VAR_1, const u8 *VAR_2, int VAR_3){
  int VAR_4;
  unsigned int VAR_5 = 13;
  for(VAR_4=VAR_3-1; VAR_4>=0; VAR_4--){
    VAR_5 = (VAR_5 << 3) ^ VAR_5 ^ VAR_2[VAR_4];
  }
  VAR_5 = (VAR_5 << 3) ^ VAR_5 ^ VAR_1;
  return (VAR_5 % VAR_0);
}
