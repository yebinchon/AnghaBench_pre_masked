
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int leds; } ;
struct TYPE_5__ {TYPE_1__ status; } ;
typedef TYPE_2__ visualizer_state_t ;
typedef int uint8_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(char* VAR_5, visualizer_state_t* VAR_6) {
    uint8_t VAR_7 = 0;

    if (VAR_6->status.leds & (1u << VAR_3)) {
        FUNC_0(VAR_5 + VAR_7, "NUM ", 4);
        VAR_7 += 4;
    }
    if (VAR_6->status.leds & (1u << VAR_0)) {
        FUNC_0(VAR_5 + VAR_7, "CAPS ", 5);
        VAR_7 += 5;
    }
    if (VAR_6->status.leds & (1u << VAR_4)) {
        FUNC_0(VAR_5 + VAR_7, "SCRL ", 5);
        VAR_7 += 5;
    }
    if (VAR_6->status.leds & (1u << VAR_1)) {
        FUNC_0(VAR_5 + VAR_7, "COMP ", 5);
        VAR_7 += 5;
    }
    if (VAR_6->status.leds & (1u << VAR_2)) {
        FUNC_0(VAR_5 + VAR_7, "KANA", 4);
        VAR_7 += 4;
    }
    VAR_5[VAR_7] = 0;
}
