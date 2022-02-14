
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int height; int width; } ;
struct screen {int fullscreen; TYPE_1__ windowed_window_size; int window; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;
 TYPE_1__ FUNC_5 (int ) ;
 int FUNC_6 (struct screen*) ;

void
FUNC_7(struct screen *VAR_1) {
    if (!VAR_1->fullscreen) {

        VAR_1->windowed_window_size = FUNC_5(VAR_1->window);
    }
    uint32_t VAR_2 = VAR_1->fullscreen ? 0 : VAR_0;
    if (FUNC_3(VAR_1->window, VAR_2)) {
        FUNC_1("Could not switch fullscreen mode: %s", FUNC_2());
        return;
    }

    VAR_1->fullscreen = !VAR_1->fullscreen;
    if (!VAR_1->fullscreen) {

        FUNC_4(VAR_1->window, VAR_1->windowed_window_size.width,
                          VAR_1->windowed_window_size.height);
    }

    FUNC_0("Switched to %s mode", VAR_1->fullscreen ? "fullscreen" : "windowed");
    FUNC_6(VAR_1);
}
