
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int width; int height; } ;
typedef TYPE_1__ GR_WINDOW_INFO ;
typedef int GR_WINDOW_ID ;
typedef int GR_PIXELVAL ;
typedef int GR_DRAW_ID ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int,int,int*,int ) ;
 int FUNC_1 (int ,int ,int,int,int,int,int ,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int ,int,int,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int*,int,int,int,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int*,int,int,int,int,int ) ;
 int FUNC_10 (int*) ;
 int* FUNC_11 (int) ;

void FUNC_12(uint8 VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10,
               void * VAR_11, int VAR_12, int VAR_13)
{
  uint8 * VAR_14;
  uint8 * VAR_15;
  uint8 * VAR_16;
  GR_WINDOW_INFO VAR_17;
  int VAR_18, VAR_19, VAR_20, VAR_21;
  GR_WINDOW_ID VAR_22;

  if (VAR_6 == 12)
  {
    FUNC_1(VAR_5, VAR_3, VAR_7, VAR_8, VAR_9, VAR_10, (GR_DRAW_ID)VAR_11, VAR_12, VAR_13,
               VAR_0);
  }
  else
  {
    FUNC_3((GR_DRAW_ID)VAR_11, &VAR_17);
    VAR_14 = FUNC_11(VAR_9 * VAR_10 * VAR_2);
    VAR_15 = FUNC_11(VAR_17.width * VAR_17.height * VAR_2);
    VAR_16 = FUNC_11(VAR_9 * VAR_10 * VAR_2);
    FUNC_7(VAR_16, 0, VAR_9 * VAR_10 * VAR_2);

    FUNC_5(VAR_5, VAR_7, VAR_8, VAR_9, VAR_10, (GR_PIXELVAL*)VAR_14);

    FUNC_5((GR_DRAW_ID)VAR_11, 0, 0,
               VAR_17.width, VAR_17.height, (GR_PIXELVAL*)VAR_15);
    for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++)
    {
      for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++)
      {
        VAR_20 = FUNC_6(VAR_15, VAR_19 + VAR_12, VAR_18 + VAR_13, VAR_17.width, VAR_17.height);
        VAR_21 = FUNC_6(VAR_14, VAR_19, VAR_18, VAR_9 ,VAR_10);
        FUNC_9(VAR_16, VAR_19, VAR_18, VAR_9, VAR_10, FUNC_8(VAR_6, VAR_20, VAR_21));
      }
    }
    VAR_22 = FUNC_4(VAR_9, VAR_10, 0);
    FUNC_0(VAR_22, VAR_4, 0, 0, VAR_9, VAR_10, VAR_16, VAR_1);
    FUNC_1(VAR_5, VAR_3, VAR_7, VAR_8, VAR_9, VAR_10, VAR_22, 0, 0, VAR_0);
    FUNC_2(VAR_22);
    FUNC_10(VAR_14);
    FUNC_10(VAR_15);
    FUNC_10(VAR_16);
  }
}
