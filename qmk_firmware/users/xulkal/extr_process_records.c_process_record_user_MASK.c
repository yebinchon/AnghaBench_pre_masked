
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int pressed; } ;
struct TYPE_8__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;





 int FUNC_0 (int,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;

bool FUNC_8(uint16_t VAR_0, keyrecord_t *VAR_1)
{
    static uint16_t VAR_2;


    if (!FUNC_0(VAR_0, VAR_1))
        return 0;


    switch (VAR_0)
    {
        case 129:




            return 0;
        case 130:
            {
                if (VAR_1->event.pressed)
                    VAR_2 = FUNC_7() + 500;
                else if (FUNC_6(FUNC_7(), VAR_2))
                    FUNC_3();
            }
            return 0;







  }

  return FUNC_1(VAR_0, VAR_1) && FUNC_2(VAR_0, VAR_1);
}
