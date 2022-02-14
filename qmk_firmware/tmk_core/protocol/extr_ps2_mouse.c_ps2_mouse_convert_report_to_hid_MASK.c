
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int buttons; } ;
typedef TYPE_1__ report_mouse_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(report_mouse_t *VAR_5) {







    VAR_5->x = VAR_1 ? ((!VAR_2 && -127 <= VAR_5->x && VAR_5->x <= -1) ? VAR_5->x : -127) : ((!VAR_2 && 0 <= VAR_5->x && VAR_5->x <= 127) ? VAR_5->x : 127);
    VAR_5->y = VAR_3 ? ((!VAR_4 && -127 <= VAR_5->y && VAR_5->y <= -1) ? VAR_5->y : -127) : ((!VAR_4 && 0 <= VAR_5->y && VAR_5->y <= 127) ? VAR_5->y : 127);


    VAR_5->buttons &= VAR_0;






    VAR_5->y = -VAR_5->y;

}
