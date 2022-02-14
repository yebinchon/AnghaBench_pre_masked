
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size {int height; int width; } ;
struct screen {int window; struct size windowed_window_size; scalar_t__ fullscreen; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct screen *VAR_0, struct size VAR_1) {


    if (VAR_0->fullscreen) {

        VAR_0->windowed_window_size = VAR_1;
    } else {
        FUNC_0(VAR_0->window, VAR_1.width, VAR_1.height);
    }
}
