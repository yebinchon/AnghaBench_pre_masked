
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int screensaver_enabled; int dpms_touched; int * display; } ;
typedef int Display ;
typedef int CARD16 ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int*,int*) ;
 int FUNC_4 (struct vo_x11_state*,char*,char*) ;
 int FUNC_5 (struct vo_x11_state*,char*) ;
 scalar_t__ FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(struct vo_x11_state *VAR_0, bool VAR_1)
{
    Display *VAR_2 = VAR_0->display;
    if (!VAR_2 || VAR_0->screensaver_enabled == VAR_1)
        return;
    FUNC_4(VAR_0, "%s screensaver.\n", VAR_1 ? "Enabling" : "Disabling");
    VAR_0->screensaver_enabled = VAR_1;
    if (FUNC_6(VAR_2, !VAR_1))
        return;
    int VAR_3;
    if (FUNC_3(VAR_2, &VAR_3, &VAR_3)) {
        BOOL VAR_4 = 0;
        CARD16 VAR_5;
        FUNC_2(VAR_2, &VAR_5, &VAR_4);
        if (!VAR_0->dpms_touched && VAR_1)
            return;
        if (VAR_1 != !!VAR_4) {
            FUNC_4(VAR_0, "Setting DMPS: %s.\n", VAR_1 ? "on" : "off");
            if (VAR_1) {
                FUNC_1(VAR_2);
            } else {
                FUNC_0(VAR_2);
                VAR_0->dpms_touched = 1;
            }
            FUNC_2(VAR_2, &VAR_5, &VAR_4);
            if (VAR_1 != !!VAR_4)
                FUNC_5(VAR_0, "DPMS state could not be set.\n");
        }
    }
}
