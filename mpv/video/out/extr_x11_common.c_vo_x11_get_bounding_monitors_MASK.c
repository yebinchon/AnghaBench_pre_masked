
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vo_x11_state {int display; } ;
struct TYPE_4__ {scalar_t__ y_org; scalar_t__ height; scalar_t__ x_org; scalar_t__ width; } ;
typedef TYPE_1__ XineramaScreenInfo ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int*) ;

__attribute__((used)) static void FUNC_2(struct vo_x11_state *VAR_0, long VAR_1[4])
{

    VAR_1[0] = VAR_1[1] = VAR_1[2] = VAR_1[3] = 0;
    int VAR_2 = 0;
    XineramaScreenInfo *VAR_3 = FUNC_1(VAR_0->display, &VAR_2);
    if (!VAR_3)
        return;
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        XineramaScreenInfo *VAR_5 = &VAR_3[VAR_4];
        if (VAR_5->y_org < VAR_3[VAR_1[0]].y_org)
            VAR_1[0] = VAR_4;
        if (VAR_5->y_org + VAR_5->height > VAR_3[VAR_1[1]].y_org + VAR_3[VAR_1[1]].height)
            VAR_1[1] = VAR_4;
        if (VAR_5->x_org < VAR_3[VAR_1[2]].x_org)
            VAR_1[2] = VAR_4;
        if (VAR_5->x_org + VAR_5->width > VAR_3[VAR_1[3]].x_org + VAR_3[VAR_1[3]].width)
            VAR_1[3] = VAR_4;
    }
    FUNC_0(VAR_3);
}
