
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;

 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

bool FUNC_6(uint16_t VAR_5, keyrecord_t *VAR_6)
{

  if (VAR_6->event.pressed)
  {
    switch (VAR_5)
    {
      case 128:
        VAR_3 = FUNC_5();
        FUNC_4(VAR_0);
        VAR_4 = 1;
        return 0;
    }
    if (VAR_4)
    {
      VAR_1 = 1;
      return 1;
    }
  }
  else
  {
    switch(VAR_5)
    {
      case 128:
        FUNC_3(VAR_0);
        if (!VAR_1)
        {
          FUNC_1();

        }
        VAR_1 = 0;
        VAR_4 = 0;
        return 0;
    }
  }
  return 1;
}
