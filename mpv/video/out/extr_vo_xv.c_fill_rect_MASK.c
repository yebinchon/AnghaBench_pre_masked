
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {scalar_t__ window; int display; } ;
struct vo {int dheight; int dwidth; struct vo_x11_state* x11; } ;
typedef scalar_t__ GC ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_0, GC VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    struct vo_x11_state *VAR_6 = VAR_0->x11;

    VAR_2 = FUNC_0(VAR_2, 0);
    VAR_3 = FUNC_0(VAR_3, 0);
    VAR_4 = FUNC_1(VAR_4, VAR_0->dwidth);
    VAR_5 = FUNC_1(VAR_5, VAR_0->dheight);

    if (VAR_6->window && VAR_1 && VAR_4 > VAR_2 && VAR_5 > VAR_3)
        FUNC_2(VAR_6->display, VAR_6->window, VAR_1, VAR_2, VAR_3, VAR_4 - VAR_2, VAR_5 - VAR_3);
}
