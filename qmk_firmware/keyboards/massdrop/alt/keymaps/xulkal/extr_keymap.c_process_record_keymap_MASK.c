
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

bool FUNC_1(uint16_t VAR_8, keyrecord_t *VAR_9)
{
    switch (VAR_8) {
        case 128:
            if (VAR_9->event.pressed && VAR_1 && VAR_0)
                FUNC_0(VAR_6, "USB extra port manual mode");
            return 0;
        case 129:
            if (VAR_9->event.pressed && VAR_1 && VAR_0)
                FUNC_0(VAR_7, "USB GCR auto mode");
            return 0;
        case 130:
            if (VAR_9->event.pressed)
                FUNC_0(VAR_2, "Debug mode");
            return 0;
        case 131:
            if (VAR_9->event.pressed)
                FUNC_0(VAR_4, "Debug matrix");
            return 0;
        case 133:
            if (VAR_9->event.pressed)
                FUNC_0(VAR_3, "Debug keyboard");
            return 0;
        case 132:
            if (VAR_9->event.pressed)
                FUNC_0(VAR_5, "Debug mouse");
            return 0;
    }

    return 1;
}
