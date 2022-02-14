
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum android_motionevent_buttons { ____Placeholder_android_motionevent_buttons } android_motionevent_buttons ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static enum android_motionevent_buttons
FUNC_0(uint32_t VAR_10) {
    enum android_motionevent_buttons VAR_11 = 0;
    if (VAR_10 & VAR_5) {
        VAR_11 |= VAR_2;
    }
    if (VAR_10 & VAR_7) {
        VAR_11 |= VAR_3;
    }
    if (VAR_10 & VAR_6) {
        VAR_11 |= VAR_4;
    }
    if (VAR_10 & VAR_8) {
        VAR_11 |= VAR_0;
    }
    if (VAR_10 & VAR_9) {
        VAR_11 |= VAR_1;
    }
    return VAR_11;
}
