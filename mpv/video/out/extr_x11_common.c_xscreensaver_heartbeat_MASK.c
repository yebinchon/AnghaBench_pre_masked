
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {double screensaver_time_last; scalar_t__ display; int screensaver_sem; int screensaver_enabled; } ;


 int FUNC_0 (scalar_t__) ;
 double FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vo_x11_state *VAR_0)
{
    double VAR_1 = FUNC_1();

    if (VAR_0->display && !VAR_0->screensaver_enabled &&
        (VAR_1 - VAR_0->screensaver_time_last) >= 10)
    {
        VAR_0->screensaver_time_last = VAR_1;
        FUNC_2(&VAR_0->screensaver_sem);
        FUNC_0(VAR_0->display);
    }
}
