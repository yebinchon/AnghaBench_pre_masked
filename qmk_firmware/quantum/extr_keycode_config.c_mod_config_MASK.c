
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ no_gui; scalar_t__ swap_rctl_rgui; scalar_t__ swap_lctl_lgui; scalar_t__ swap_ralt_rgui; scalar_t__ swap_lalt_lgui; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

uint8_t FUNC_0(uint8_t VAR_7) {
    if (VAR_6.swap_lalt_lgui) {
        if ((VAR_7 & VAR_5) == VAR_2) {
            VAR_7 &= ~VAR_2;
            VAR_7 |= VAR_0;
        } else if ((VAR_7 & VAR_3) == VAR_0) {
            VAR_7 &= ~VAR_0;
            VAR_7 |= VAR_2;
        }
    }
    if (VAR_6.swap_ralt_rgui) {
        if ((VAR_7 & VAR_5) == VAR_5) {
            VAR_7 &= ~VAR_5;
            VAR_7 |= VAR_3;
        } else if ((VAR_7 & VAR_3) == VAR_3) {
            VAR_7 &= ~VAR_3;
            VAR_7 |= VAR_5;
        }
    }
    if (VAR_6.swap_lctl_lgui) {
        if ((VAR_7 & VAR_5) == VAR_2) {
            VAR_7 &= ~VAR_2;
            VAR_7 |= VAR_1;
        } else if ((VAR_7 & VAR_4) == VAR_1) {
            VAR_7 &= ~VAR_1;
            VAR_7 |= VAR_2;
        }
    }
    if (VAR_6.swap_rctl_rgui) {
        if ((VAR_7 & VAR_5) == VAR_5) {
            VAR_7 &= ~VAR_5;
            VAR_7 |= VAR_4;
        } else if ((VAR_7 & VAR_4) == VAR_4) {
            VAR_7 &= ~VAR_4;
            VAR_7 |= VAR_5;
        }
    }
    if (VAR_6.no_gui) {
        VAR_7 &= ~VAR_2;
        VAR_7 &= ~VAR_5;
    }

    return VAR_7;
}
