
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size {int height; int width; } ;
struct screen {int window; int frame_size; int fullscreen; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct size FUNC_2 (struct screen*,int ) ;

void
FUNC_3(struct screen *VAR_0) {
    if (!VAR_0->fullscreen) {
        struct size VAR_1 = FUNC_2(VAR_0,
                                                           VAR_0->frame_size);
        FUNC_1(VAR_0->window, VAR_1.width,
                          VAR_1.height);
        FUNC_0("Resized to optimal size");
    }
}
