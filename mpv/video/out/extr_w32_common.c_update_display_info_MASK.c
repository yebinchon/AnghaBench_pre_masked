
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_w32_state {scalar_t__ monitor; double display_fps; char* color_profile; int window; } ;
struct TYPE_2__ {int cbSize; int szDevice; } ;
typedef TYPE_1__ MONITORINFOEXW ;
typedef int MONITORINFO ;
typedef scalar_t__ HMONITOR ;


 int FUNC_0 (scalar_t__,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct vo_w32_state*,char*,...) ;
 int FUNC_2 (struct vo_w32_state*,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (struct vo_w32_state*,int ) ;
 double FUNC_5 (int ) ;
 double FUNC_6 (int ) ;
 int FUNC_7 (struct vo_w32_state*,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct vo_w32_state*) ;

__attribute__((used)) static void FUNC_11(struct vo_w32_state *VAR_3)
{
    HMONITOR VAR_4 = FUNC_3(VAR_3->window, VAR_0);
    if (VAR_3->monitor == VAR_4)
        return;
    VAR_3->monitor = VAR_4;

    FUNC_10(VAR_3);

    MONITORINFOEXW VAR_5 = { .cbSize = sizeof VAR_5 };
    FUNC_0(VAR_4, (MONITORINFO*)&VAR_5);


    double VAR_6 = 0.0;

    if (VAR_6 == 0.0)
        VAR_6 = FUNC_6(VAR_5.szDevice);
    if (VAR_6 == 0.0)
        VAR_6 = FUNC_5(VAR_5.szDevice);

    if (VAR_6 != VAR_3->display_fps) {
        FUNC_1(VAR_3, "display-fps: %f\n", VAR_6);
        if (VAR_6 == 0.0)
            FUNC_2(VAR_3, "Couldn't determine monitor refresh rate\n");
        VAR_3->display_fps = VAR_6;
        FUNC_7(VAR_3, VAR_2);
    }

    char *VAR_7 = FUNC_4(VAR_3, VAR_5.szDevice);
    if ((VAR_7 == ((void*)0)) != (VAR_3->color_profile == ((void*)0)) ||
        (VAR_7 && FUNC_8(VAR_7, VAR_3->color_profile)))
    {
        if (VAR_7)
            FUNC_1(VAR_3, "color-profile: %s\n", VAR_7);
        FUNC_9(VAR_3->color_profile);
        VAR_3->color_profile = VAR_7;
        VAR_7 = ((void*)0);
        FUNC_7(VAR_3, VAR_1);
    }

    FUNC_9(VAR_7);
}
