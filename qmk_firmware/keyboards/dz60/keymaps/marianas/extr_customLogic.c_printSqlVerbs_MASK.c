
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

bool FUNC_2(uint16_t VAR_0, keyrecord_t *VAR_1)
{
  if (VAR_1->event.pressed)
  {
    switch (VAR_0)
    {
      case 131:
        FUNC_0("LEFT JOIN");
        FUNC_1();
        return 0;
      case 132:
        FUNC_0("INNER JOIN ");
        FUNC_1();
        return 0;
      case 129:
        FUNC_0("SELECT "); return
        0;
      case 133:
        FUNC_0("FROM "); return
        0;
      case 134:
        FUNC_0("DISTINCT "); return
        0;
      case 130:
        FUNC_0("ORDER BY "); return
        0;
      case 128:
        FUNC_0("WHERE "); return
        0;
      case 136:
        FUNC_0("ALTER SESSION SET CURRENT_SCHEMA = SUPPLY;"); return 0;
      case 135:
        FUNC_0("* "); return 0;

    }
  }
  return 1;
}
