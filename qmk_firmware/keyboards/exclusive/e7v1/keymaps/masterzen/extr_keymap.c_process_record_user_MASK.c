
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mode; } ;


 unsigned long VAR_0 ;


 unsigned long VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

bool FUNC_3(uint16_t VAR_4, keyrecord_t *VAR_5)
{
  switch (VAR_4)
  {

  case 130:
    if (VAR_5->event.pressed)
    {
      FUNC_0(1UL << VAR_0);
    }
    return 0;
    break;
  case 129:
    if (VAR_5->event.pressed)
    {
      FUNC_0(1UL << VAR_1);
    }
    return 0;
    break;
  case 128:


    if (VAR_5->event.pressed)
    {
      FUNC_1(VAR_2);
      FUNC_2();
      VAR_2 = VAR_3.mode;
    }
    return 0;
    break;
  }
  return 1;
}
