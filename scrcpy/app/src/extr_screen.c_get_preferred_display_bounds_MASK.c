
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct size {void* height; void* width; } ;
struct TYPE_3__ {scalar_t__ h; scalar_t__ w; } ;
typedef TYPE_1__ SDL_Rect ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 void* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static bool
FUNC_4(struct size *VAR_1) {
    SDL_Rect VAR_2;





    if (FUNC_0((0), (&VAR_2))) {
        FUNC_1("Could not get display usable bounds: %s", FUNC_3());
        return 0;
    }

    VAR_1->width = FUNC_2(0, VAR_2.w - VAR_0);
    VAR_1->height = FUNC_2(0, VAR_2.h - VAR_0);
    return 1;
}
