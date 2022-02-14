
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;


 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;

bool FUNC_8(uint16_t VAR_10, keyrecord_t *VAR_11)
{
    uint16_t VAR_12 = (VAR_10 == FUNC_0(VAR_4) ? VAR_0 : VAR_10);
    if (!FUNC_5(VAR_12, VAR_11))
    {
        return 0;
    }
    FUNC_4(" ");
    FUNC_3("process record");

    switch (VAR_10)
    {
    case 130:
        if (VAR_11->event.pressed)
        {

            FUNC_6(VAR_3);
            FUNC_6(VAR_2);
            FUNC_6(VAR_1);
            FUNC_7(VAR_1);
            FUNC_7(VAR_2);
            FUNC_7(VAR_3);
        }
        return 0;
        break;
    case 129:
        if (VAR_11->event.pressed)
        {
            FUNC_2(1UL << VAR_5);



            FUNC_3("Space-FN");
        }
        return 0;
        break;
    case 128:
        if (VAR_11->event.pressed)
        {
            FUNC_2(1UL << VAR_6);



            FUNC_3("Space-Numpad");
        }
        return 0;
        break;
    default:
        VAR_7 = 0;
        break;
    }

    return 1;
}
