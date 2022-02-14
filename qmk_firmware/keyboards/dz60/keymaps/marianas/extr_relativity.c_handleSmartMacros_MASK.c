
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
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (int const) ;

bool FUNC_12(uint16_t VAR_2, keyrecord_t *VAR_3)
{
  if (VAR_0 != 1) return 1;
  if (VAR_3->event.pressed)
  {
    switch (VAR_2)
    {
      case 155:
        if (!FUNC_6()){
          FUNC_2();
        }
        else {
          FUNC_10(155);
          FUNC_11(155);
        }
        return 0;
      case 157:
      case 156:
      case 154:
      case 153:
      case 152:
      case 150:
      case 149:
      case 148:
      case 147:
      case 146:
      case 145:
      case 144:
      case 143:
      case 142:
      case 141:
      case 140:
      case 139:
      case 138:
      case 137:
      case 135:
      case 134:
      case 133:
      case 132:
      case 131:
      case 130:
      case 129:
        return FUNC_9(VAR_2);

      case 128:
        if (VAR_1)
        {
          FUNC_0("Id = ");
          FUNC_8();
          FUNC_0(".Id");
          return FUNC_1();
        }
        else
        {
          FUNC_7();
          FUNC_0("ON ");
          FUNC_8();
          FUNC_4();
          FUNC_5();
          FUNC_3();
          VAR_1 = 1;
          return 1;
        }


      case 136:
        FUNC_7();
          return FUNC_1();
      case 158:
        if (VAR_1)
        {
          FUNC_0("Id = ");
          FUNC_8();
          FUNC_0(".Id");
          FUNC_1();
          return 1;
        }
        else
        {
          FUNC_7();
          FUNC_1();
          return 1;
        }
      case 151:
          return FUNC_1();
    }
  }
  return 1;
}
