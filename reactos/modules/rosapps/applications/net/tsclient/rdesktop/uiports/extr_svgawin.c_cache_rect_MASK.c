
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; int cx; int cy; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ myrect ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int*,int*,int*,int*,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  myrect* VAR_7;
  myrect* VAR_8;

  if (VAR_1 == 0)
  {
    FUNC_0();
    return;
  }
  if (VAR_6)
    if (!FUNC_2(&VAR_2, &VAR_3, &VAR_4, &VAR_5, ((void*)0), ((void*)0)))
      return;
  VAR_7 = (myrect*)FUNC_4(sizeof(myrect));
  VAR_7->x = VAR_2;
  VAR_7->y = VAR_3;
  VAR_7->cx = VAR_4;
  VAR_7->cy = VAR_5;
  VAR_7->next = 0;
  VAR_7->prev = 0;
  if (VAR_0 == 0)
    VAR_0 = VAR_7;
  else
  {
    VAR_8 = 0;
    do
    {
      if (VAR_8 == 0)
        VAR_8 = VAR_0;
      else
        VAR_8 = VAR_8->next;
      if (FUNC_1(VAR_7, VAR_8))
      {
        FUNC_3(VAR_7);
        return;
      }
    }
    while (VAR_8->next != 0);
    VAR_8->next = VAR_7;
    VAR_7->prev = VAR_8;
  }
}
