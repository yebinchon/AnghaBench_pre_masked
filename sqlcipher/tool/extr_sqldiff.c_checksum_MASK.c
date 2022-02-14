
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(const char *VAR_0, size_t VAR_1){
  const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
  unsigned VAR_3 = 0;
  unsigned VAR_4 = 0;
  unsigned VAR_5 = 0;
  unsigned VAR_6 = 0;
  while(VAR_1 >= 16){
    VAR_3 += ((unsigned)VAR_2[0] + VAR_2[4] + VAR_2[8] + VAR_2[12]);
    VAR_4 += ((unsigned)VAR_2[1] + VAR_2[5] + VAR_2[9] + VAR_2[13]);
    VAR_5 += ((unsigned)VAR_2[2] + VAR_2[6] + VAR_2[10]+ VAR_2[14]);
    VAR_6 += ((unsigned)VAR_2[3] + VAR_2[7] + VAR_2[11]+ VAR_2[15]);
    VAR_2 += 16;
    VAR_1 -= 16;
  }
  while(VAR_1 >= 4){
    VAR_3 += VAR_2[0];
    VAR_4 += VAR_2[1];
    VAR_5 += VAR_2[2];
    VAR_6 += VAR_2[3];
    VAR_2 += 4;
    VAR_1 -= 4;
  }
  VAR_6 += (VAR_5 << 8) + (VAR_4 << 16) + (VAR_3 << 24);
  switch(VAR_1){
    case 3: VAR_6 += (VAR_2[2] << 8);
    case 2: VAR_6 += (VAR_2[1] << 16);
    case 1: VAR_6 += (VAR_2[0] << 24);
    default: ;
  }
  return VAR_6;
}
