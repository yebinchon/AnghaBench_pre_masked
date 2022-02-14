
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ speed; scalar_t__ mode_delay; int effect_type; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static uint32_t FUNC_1()
{

  if (VAR_1->speed == 0 && VAR_1->mode_delay > 0)
  {
    return VAR_1->mode_delay;
  }

  uint32_t VAR_2 = 10;
  switch (VAR_1->effect_type) {
    case 141:
    case 131:
    case 130:
      VAR_2 = 10 + ((1000 * (uint32_t)(VAR_0 - VAR_1->speed)) / VAR_0);
    break;
    case 134:
    case 137:
    case 135:
    case 136:
      VAR_2 = 30 + (FUNC_0() % 100) + (200 * (VAR_0 - VAR_1->speed) / VAR_0);
    break;

    case 129:
    case 133:
    case 140:
    case 132:
    case 138:
    case 139:
    case 128:
      VAR_2 = 10 + ((1000 * (uint32_t)(VAR_0 - VAR_1->speed)) / VAR_0);
    break;

  }
  return VAR_2;
}
