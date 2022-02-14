
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; } ;
struct screen {TYPE_1__ frame_size; int window; int fullscreen; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(struct screen *VAR_0) {
    if (!VAR_0->fullscreen) {
        FUNC_1(VAR_0->window, VAR_0->frame_size.width,
                          VAR_0->frame_size.height);
        FUNC_0("Resized to pixel-perfect");
    }
}
