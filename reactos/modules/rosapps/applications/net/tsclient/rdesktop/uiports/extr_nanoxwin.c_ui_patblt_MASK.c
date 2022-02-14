
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_3__ {int style; int* pattern; int yorigin; int xorigin; } ;
typedef int GR_WINDOW_ID ;
typedef int GR_PIXELVAL ;
typedef TYPE_1__ BRUSH ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int,int,int*,int ) ;
 int FUNC_2 (int ,int ,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int,int,int) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ,int,int,int,int,int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int*,int,int,int,int) ;
 int FUNC_10 (int*,int,int,int,int) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (int,int,int) ;
 int FUNC_13 (int*,int,int,int,int,int ) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (int*) ;
 int* FUNC_16 (int) ;

void FUNC_17(uint8 VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13,
               BRUSH * VAR_14, int VAR_15, int VAR_16)
{
  uint8 VAR_17[8], * VAR_18, * VAR_19;
  uint32 VAR_20;
  int VAR_21, VAR_22, VAR_23, VAR_24;
  GR_WINDOW_ID VAR_25;

  if (VAR_7 == 16 && VAR_3 == 32)
  {
    VAR_16 = FUNC_0(VAR_16);
    VAR_15 = FUNC_0(VAR_15);
  }
  switch (VAR_14->style)
  {
    case 0:
      if (VAR_9 == 12 || VAR_9 == 6)
      {
        VAR_20 = VAR_6[VAR_9];
        FUNC_8(VAR_4, VAR_20);
        FUNC_7(VAR_4, VAR_16);
        FUNC_4(VAR_8, VAR_4, VAR_10, VAR_11, VAR_12, VAR_13);
        FUNC_8(VAR_4, VAR_0);
      }
      else
      {
        FUNC_14("opcode %d in ui_patblt solid brush\n", VAR_9);
      }
      break;
    case 3:
      for (VAR_21 = 0; VAR_21 != 8; VAR_21++)
      {
        VAR_17[7 - VAR_21] = VAR_14->pattern[VAR_21];
      }
      VAR_18 = FUNC_16(VAR_12 * VAR_13 * VAR_2);
      VAR_19 = FUNC_16(VAR_12 * VAR_13 * VAR_2);
      FUNC_11(VAR_19, 0, VAR_12 * VAR_13 * VAR_2);

      if (VAR_9 != 12)
      {
        FUNC_6(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, (GR_PIXELVAL*)VAR_18);
      }
      for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++)
      {
        for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++)
        {
          if (FUNC_10(VAR_17, (VAR_10 + VAR_22 + VAR_14->xorigin) % 8,
                          (VAR_11 + VAR_21 + VAR_14->yorigin) % 8, 8, 1))
          {
            VAR_23 = VAR_16;
          }
          else
          {
            VAR_23 = VAR_15;
          }
          VAR_24 = FUNC_9(VAR_18, VAR_22, VAR_21, VAR_12 ,VAR_13);
          FUNC_13(VAR_19, VAR_22, VAR_21, VAR_12, VAR_13, FUNC_12(VAR_9, VAR_23, VAR_24));
        }
      }
      VAR_25 = FUNC_5(VAR_12, VAR_13, 0);
      FUNC_1(VAR_25, VAR_5, 0, 0, VAR_12, VAR_13, VAR_19, VAR_1);
      FUNC_2(VAR_8, VAR_4, VAR_10, VAR_11, VAR_12, VAR_13, VAR_25, 0, 0, VAR_0);
      FUNC_3(VAR_25);
      FUNC_15(VAR_18);
      FUNC_15(VAR_19);
      break;
  }
}
