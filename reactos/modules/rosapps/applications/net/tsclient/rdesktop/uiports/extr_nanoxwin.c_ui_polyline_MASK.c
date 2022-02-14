
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int PEN ;


 int FUNC_0 (int ,int,int,int,int,int *) ;

void FUNC_1(uint8 VAR_0, POINT * VAR_1, int VAR_2, PEN * VAR_3)
{
  int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

  if (VAR_2 > 0)
  {
    VAR_5 = VAR_1[0].x;
    VAR_6 = VAR_1[0].y;
    for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++)
    {
      VAR_7 = VAR_1[VAR_4].x;
      VAR_8 = VAR_1[VAR_4].y;
      FUNC_0(VAR_0, VAR_5, VAR_6, VAR_5 + VAR_7, VAR_6 + VAR_8, VAR_3);
      VAR_5 = VAR_5 + VAR_7;
      VAR_6 = VAR_6 + VAR_8;
    }
  }
}
