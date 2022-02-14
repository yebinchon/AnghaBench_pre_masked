
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

bool FUNC_3(uint16_t VAR_6, keyrecord_t *VAR_7)
{
    if (VAR_3 <= VAR_6 && VAR_6 < VAR_2)
    {
        if (VAR_7->event.pressed)
        {
            if (VAR_4 != VAR_6 || FUNC_1(VAR_5))
            {
                VAR_4 = VAR_6;
                VAR_5 = FUNC_2() + VAR_1;
            }
            else
                FUNC_0(1);
        }
        return 0;
    }

    if (VAR_4 != VAR_0)
        FUNC_0(0);
    return 1;
}
