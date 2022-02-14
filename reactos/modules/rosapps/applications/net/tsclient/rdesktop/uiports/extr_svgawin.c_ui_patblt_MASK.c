
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int style; int yorigin; int xorigin; int * pattern; } ;
typedef TYPE_1__ BRUSH ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int ) ;
 scalar_t__ FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int,int,int,int,int ) ;
 int FUNC_4 (int *,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int,int,int ) ;
 scalar_t__ FUNC_6 (int*,int*,int*,int*,int *,int *) ;

void FUNC_7(uint8 VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7,
               BRUSH * VAR_8, int VAR_9, int VAR_10)
{
  int VAR_11;
  int VAR_12;
  uint8 VAR_13[8];

  if (FUNC_6(&VAR_4, &VAR_5, &VAR_6, &VAR_7, ((void*)0), ((void*)0)))
  {
    if (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7))
      FUNC_2(VAR_1, VAR_2);
    switch (VAR_8->style)
    {
      case 0:
        FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_3);
        break;
      case 3:
        for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
          VAR_13[VAR_11] = ~VAR_8->pattern[7 - VAR_11];
        for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
          for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
            if (FUNC_4(VAR_13, (VAR_4 + VAR_12 + VAR_8->xorigin) % 8,
                              (VAR_5 + VAR_11 + VAR_8->yorigin) % 8, 8, 1))
              FUNC_5(VAR_4 + VAR_12, VAR_5 + VAR_11, VAR_10, VAR_3);
            else
              FUNC_5(VAR_4 + VAR_12, VAR_5 + VAR_11, VAR_9, VAR_3);
        break;
    }
    FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_0);
  }
}
