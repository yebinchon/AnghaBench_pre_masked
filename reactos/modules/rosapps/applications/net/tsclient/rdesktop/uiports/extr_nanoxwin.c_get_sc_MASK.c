
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ chs; scalar_t__ ch1; scalar_t__ ch2; scalar_t__ ch3; } ;
struct TYPE_4__ {int modifiers; scalar_t__ ch; } ;
typedef TYPE_1__ GR_EVENT_KEYSTROKE ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_0(GR_EVENT_KEYSTROKE * VAR_1, int * VAR_2, int * VAR_3)
{
  int VAR_4;


  *VAR_2 = 0;
  *VAR_3 = 0;
  for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
  {
    if (VAR_1->modifiers & 1)
    {
      if (VAR_1->ch == VAR_0[VAR_4].chs)
      {
        *VAR_2 = VAR_4;
        break;
      }
    }
    if (VAR_1->ch == VAR_0[VAR_4].ch1 ||
        VAR_1->ch == VAR_0[VAR_4].ch2 ||
        VAR_1->ch == VAR_0[VAR_4].ch3)
    {
      *VAR_2 = VAR_4;
      break;
    }
  }
  if (*VAR_2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
