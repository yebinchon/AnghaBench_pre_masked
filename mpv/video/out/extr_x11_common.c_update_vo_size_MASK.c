
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int pending_vo_events; int winrc; } ;
struct vo {scalar_t__ dwidth; scalar_t__ dheight; struct vo_x11_state* x11; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_1)
{
    struct vo_x11_state *VAR_2 = VAR_1->x11;

    if (FUNC_1(VAR_2->winrc) != VAR_1->dwidth || FUNC_0(VAR_2->winrc) != VAR_1->dheight) {
        VAR_1->dwidth = FUNC_1(VAR_2->winrc);
        VAR_1->dheight = FUNC_0(VAR_2->winrc);
        VAR_2->pending_vo_events |= VAR_0;
    }
}
