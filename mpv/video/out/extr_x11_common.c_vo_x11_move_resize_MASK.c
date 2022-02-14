
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo {TYPE_1__* x11; } ;
struct mp_rect {int y0; int x0; } ;
struct TYPE_5__ {int width; int height; int y; int x; } ;
typedef TYPE_2__ XWindowChanges ;
struct TYPE_4__ {int window; int display; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct mp_rect) ;
 int FUNC_1 (struct mp_rect) ;
 int FUNC_2 (int ,int ,unsigned int,TYPE_2__*) ;
 int FUNC_3 (struct vo*,struct mp_rect,int) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_4, bool VAR_5, bool VAR_6,
                               struct mp_rect VAR_7)
{
    if (!VAR_4->x11->window)
        return;
    int VAR_8 = FUNC_1(VAR_7), VAR_9 = FUNC_0(VAR_7);
    XWindowChanges VAR_10 = {.x = VAR_7.x0, .y = VAR_7.y0, .width = VAR_8, .height = VAR_9};
    unsigned VAR_11 = (VAR_5 ? VAR_2 | VAR_3 : 0) | (VAR_6 ? VAR_1 | VAR_0 : 0);
    if (VAR_11)
        FUNC_2(VAR_4->x11->display, VAR_4->x11->window, VAR_11, &VAR_10);
    FUNC_3(VAR_4, VAR_7, 0);
}
