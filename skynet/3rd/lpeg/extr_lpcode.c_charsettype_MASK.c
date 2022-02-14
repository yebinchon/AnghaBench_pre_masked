
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;
typedef int Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static Opcode FUNC_1 (const byte *VAR_6, int *VAR_7) {
  int VAR_8 = 0;
  int VAR_9;
  int VAR_10 = -1;
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
    int VAR_11 = VAR_6[VAR_9];
    if (VAR_11 == 0) {
      if (VAR_8 > 1)
        return VAR_5;

    }
    else if (VAR_11 == 0xFF) {
      if (VAR_8 < (VAR_9 * VAR_0))
        return VAR_5;
      else VAR_8 += VAR_0;
    }
    else if ((VAR_11 & (VAR_11 - 1)) == 0) {
      if (VAR_8 > 0)
        return VAR_5;
      else {
        VAR_8++;
        VAR_10 = VAR_9;
      }
    }
    else return VAR_5;
  }
  switch (VAR_8) {
    case 0: return VAR_4;
    case 1: {
      int VAR_12 = VAR_6[VAR_10];
      *VAR_7 = VAR_10 * VAR_0;
      if ((VAR_12 & 0xF0) != 0) { *VAR_7 += 4; VAR_12 >>= 4; }
      if ((VAR_12 & 0x0C) != 0) { *VAR_7 += 2; VAR_12 >>= 2; }
      if ((VAR_12 & 0x02) != 0) { *VAR_7 += 1; }
      return VAR_3;
    }
    default: {
       FUNC_0(VAR_8 == VAR_1 * VAR_0);
       return VAR_2;
    }
  }
}
