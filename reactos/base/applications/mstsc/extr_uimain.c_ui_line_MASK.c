
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int width; scalar_t__ style; int colour; } ;
typedef TYPE_1__ PEN ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int,int,int,int,scalar_t__,int ) ;
 int FUNC_3 (int,int,int,int,int ) ;
 int FUNC_4 (int,int,int,int) ;

void
FUNC_5(uint8 VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
        PEN * VAR_5)
{
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;

  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->width, VAR_5->style,
          VAR_5->colour);
  if (VAR_5->style == 0 && VAR_5->width < 2 && VAR_0 == 12)
  {
    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->colour);
  }
  else
  {
    VAR_6 = FUNC_1(VAR_1, VAR_3);
    VAR_7 = FUNC_1(VAR_2, VAR_4);
    VAR_8 = (FUNC_0(VAR_1, VAR_3) + 1) - VAR_6;
    VAR_9 = (FUNC_0(VAR_2, VAR_4) + 1) - VAR_7;
    FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);
  }
}
