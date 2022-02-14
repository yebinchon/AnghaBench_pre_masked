
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;

void FUNC_2(void)
{
   unsigned char VAR_0[32], VAR_1[32];
   int VAR_2[256];
   int VAR_3[256], VAR_4;
   int VAR_5, VAR_6, VAR_7;
   int VAR_8 = 3;
   int VAR_9 = 1 << VAR_8;
   int VAR_10 = 8 * 4096;
   int VAR_11 = 12;
   int VAR_12 = (1 << VAR_11);
  int VAR_13 = 1;
  int VAR_14 = VAR_8;
  int VAR_15 = -1;

  for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
    VAR_0[VAR_5] = 1;
    VAR_1[VAR_5] = VAR_8;
  }

  for (VAR_6 = VAR_9; VAR_6 <= VAR_10; VAR_6 += (1 << VAR_14)) {
    int VAR_16 = FUNC_1(VAR_6);
    if (VAR_16 > VAR_15) {







      if ((VAR_16 >= 7) && (VAR_14 < 8)) {
        VAR_14++;
      }
      VAR_0[VAR_16] = VAR_13 - ((VAR_6-1) >> VAR_14);
      VAR_1[VAR_16] = VAR_14;
    }

    VAR_3[VAR_13] = VAR_6;
    VAR_15 = VAR_16;

    VAR_13++;
  }



  VAR_7 = 0;
  for (VAR_4 = 1; VAR_4 < VAR_13; VAR_4++) {


    size_t VAR_17 = VAR_12;
    const size_t VAR_18 = VAR_3[VAR_4];
    while ((VAR_17 % VAR_18) > (VAR_17 >> 3)) {
      VAR_17 += VAR_12;
    }
    VAR_2[VAR_4] = (int) (VAR_17 >> VAR_11);
    VAR_7 += (int) VAR_17;
  }

  FUNC_0("TCMalloc can waste as much as %d memory on one-shot allocations\n", VAR_7);


  return;
}
