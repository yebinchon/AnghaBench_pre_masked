
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int const* VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

const macro_t *FUNC_6(keyrecord_t *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{

    switch (VAR_2)
    {
    case 129:


        if (VAR_1->event.pressed)
        {
            FUNC_1(3);
            FUNC_0();
            FUNC_5(1);
        }
        else
        {
            FUNC_1(1);
            FUNC_3();
            FUNC_4(1);
        }
        break;
    case 128:
        if (VAR_1->event.pressed)
        {
            FUNC_1(2);
            FUNC_2();
            FUNC_5(2);
        }
        else
        {
            FUNC_1(1);
            FUNC_3();
            FUNC_4(2);
        }
        break;
    }
    return VAR_0;
}
