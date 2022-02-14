
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef int uint ;
typedef int uchar ;
struct TYPE_4__ {int hashMask; int* hashChain; int* hashTable; int hashBits; } ;
struct TYPE_3__ {int inLen; int inNdx; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (int const) ;
 TYPE_1__* VAR_6 ;

void FUNC_5(const uchar *VAR_7, uint VAR_8) {
  int VAR_9, VAR_10, VAR_11, VAR_12;
  uint VAR_13 = VAR_5->hashMask;
  ushort *VAR_14 = VAR_5->hashChain;
  ushort *VAR_15 = VAR_5->hashTable;
  uint VAR_16 = 24 - VAR_5->hashBits;
  uint VAR_17 = 0, VAR_18 = 0;
  VAR_6->inLen = VAR_8;
  FUNC_1(9);

  for (VAR_9 = 0; VAR_9 <= ((int)VAR_8) - VAR_2; VAR_9++) {
    const uchar *VAR_19 = VAR_7 + VAR_9, *VAR_20;
    uint VAR_21 = VAR_9 & ~VAR_4;
    uint VAR_22 = VAR_9 - VAR_21;
    uint VAR_23 = VAR_8 - VAR_9;
    uint VAR_24 = VAR_2 - 1;
    uint VAR_25 = 0;
    uint VAR_26 = (VAR_19[0] << 16) | (VAR_19[1] << 8) | VAR_19[2];
    uint VAR_27 = ((VAR_26 >> VAR_16) - VAR_26) & VAR_13;
    uint VAR_28 = VAR_15[VAR_27];
    VAR_6->inNdx = VAR_9;
    FUNC_1(10);

    if (VAR_23>VAR_0)
      VAR_23 = VAR_0;

    VAR_15[VAR_27] = VAR_22;
    VAR_14[VAR_22 & (VAR_1-1)] = VAR_28;

    for (VAR_12 = 0; VAR_28 != VAR_3 && VAR_12<60; VAR_12++) {
      FUNC_1(11);


      VAR_10 = VAR_21 + VAR_28 - ((VAR_28 < VAR_22) ? 0 : (VAR_4 + 1));

      if (VAR_9 - VAR_10 > VAR_1)
        break;

      for (VAR_11 = 0, VAR_20 = VAR_7 + VAR_10; VAR_19[VAR_11] == VAR_20[VAR_11] && VAR_11 < VAR_23; VAR_11++)
        {}
      FUNC_0(12, VAR_11);

      if (VAR_11 > VAR_24) {
         VAR_25 = VAR_9 - VAR_10;
         VAR_24 = VAR_11;
      }
      VAR_28 = VAR_14[VAR_28 & (VAR_1-1)];
    }

    if (VAR_17) {
      if (VAR_25 == 0 || VAR_18 >= VAR_24 ) {

        FUNC_1(14);
        FUNC_3(VAR_17, VAR_18);
        FUNC_2("dic: %6x %6x %6x\n", VAR_9-1, VAR_18, VAR_17);
        VAR_9 += VAR_18 - 1 - 1;
        VAR_17 = VAR_18 = 0;
      } else {

        FUNC_1(15);
        FUNC_4(VAR_19[-1]);
        VAR_17 = VAR_25;
        VAR_18 = VAR_24;
      }
    } else {
      if (VAR_25) {
        FUNC_1(16);

        VAR_17 = VAR_25;
        VAR_18 = VAR_24;
      } else {
        FUNC_1(17);

        FUNC_4(VAR_19[0]);
      }
    }
  }

  if (VAR_17) {
    FUNC_3(VAR_17, VAR_18);
    FUNC_2("dic: %6x %6x %6x\n", VAR_9, VAR_18, VAR_17);
    VAR_9 += VAR_18 - 1;
  }
  while (VAR_9 < VAR_8)
    FUNC_4(VAR_7[VAR_9++]);
}
