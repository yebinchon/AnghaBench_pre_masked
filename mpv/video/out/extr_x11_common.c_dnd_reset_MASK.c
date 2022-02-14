
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {scalar_t__ dnd_requested_format; scalar_t__ dnd_src_window; } ;
struct vo {struct vo_x11_state* x11; } ;



__attribute__((used)) static void FUNC_0(struct vo *VAR_0)
{
    struct vo_x11_state *VAR_1 = VAR_0->x11;

    VAR_1->dnd_src_window = 0;
    VAR_1->dnd_requested_format = 0;
}
