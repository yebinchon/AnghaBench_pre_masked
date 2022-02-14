
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int w; int h; unsigned int x; unsigned int y; int xormask; int andmask; } ;
typedef TYPE_1__ tcursor ;


 scalar_t__ FUNC_0 (int *,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (int) ;

void* FUNC_4(unsigned int VAR_0, unsigned int VAR_1,
                       int VAR_2, int VAR_3,
                       uint8* VAR_4, uint8* VAR_5)
{
  tcursor* VAR_6;
  int VAR_7;
  int VAR_8;

  VAR_6 = (tcursor*)FUNC_3(sizeof(tcursor));
  FUNC_1(VAR_6, 0, sizeof(tcursor));
  VAR_6->w = VAR_2;
  VAR_6->h = VAR_3;
  VAR_6->x = VAR_0;
  VAR_6->y = VAR_1;
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++)
  {
    for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    {
      if (FUNC_0(VAR_4, VAR_8, VAR_7, 32, 1))
        FUNC_2(VAR_6->andmask, VAR_8, 31 - VAR_7, 32, 8, 255);
      if (FUNC_0(VAR_5, VAR_8, VAR_7, 32, 24))
        FUNC_2(VAR_6->xormask, VAR_8, 31 - VAR_7, 32, 8, 255);
    }
  }
  return (void*)VAR_6;
}
