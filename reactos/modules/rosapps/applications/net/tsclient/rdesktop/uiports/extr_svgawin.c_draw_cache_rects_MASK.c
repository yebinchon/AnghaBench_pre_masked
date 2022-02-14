
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int cy; int cx; struct TYPE_4__* next; scalar_t__ y; int x; } ;
typedef TYPE_1__ myrect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,scalar_t__,int ,int,int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(void)
{
  int VAR_5;
  myrect* VAR_6;
  myrect* VAR_7;
  uint8* VAR_8;


  VAR_6 = VAR_3;
  while (VAR_6 != 0)
  {
    VAR_8 = FUNC_0(VAR_6->x, VAR_6->y, VAR_4, VAR_2, VAR_1);
    for (VAR_5 = 0; VAR_5 < VAR_6->cy; VAR_5++)
    {
      FUNC_1(VAR_8, VAR_6->x, VAR_6->y + VAR_5, VAR_6->cx * VAR_0);
      VAR_8 = VAR_8 + VAR_2 * VAR_0;
    }
    VAR_7 = VAR_6;
    VAR_6 = VAR_6->next;
    FUNC_2(VAR_7);
  }
  VAR_3 = 0;
}
