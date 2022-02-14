
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_2__ {int width; int data; } ;
typedef TYPE_1__ bitmap ;
typedef scalar_t__ HBITMAP ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int ,int) ;
 int FUNC_1 (int,int,int,int,int ) ;
 scalar_t__ FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int,int ,int,int ) ;
 int FUNC_5 (int,int,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int,int,int,int) ;
 scalar_t__ FUNC_7 (int*,int*,int*,int*,int*,int*) ;

void FUNC_8(uint8 VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9,
               HBITMAP VAR_10, int VAR_11, int VAR_12)
{
  bitmap* VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16;

  if (FUNC_7(&VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_11, &VAR_12))
  {
    if (FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9))
      FUNC_3(VAR_3, VAR_4);
    VAR_13 = (bitmap*)VAR_10;
    if (VAR_5 == 0xc)
      FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, FUNC_5(VAR_11, VAR_12, VAR_13->data, VAR_13->width, VAR_2),
                     VAR_13->width * VAR_1);
    else
    {
      for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
      {
        for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
        {
          VAR_16 = FUNC_4(VAR_11 + VAR_15, VAR_12 + VAR_14, VAR_13->data, VAR_13->width, VAR_2);
          FUNC_6(VAR_6 + VAR_15, VAR_7 + VAR_14, VAR_16, VAR_5);
        }
      }
    }
    FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_0);
  }
}
