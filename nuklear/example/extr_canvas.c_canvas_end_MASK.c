
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fixed_background; int padding; int spacing; } ;
struct TYPE_4__ {TYPE_1__ window; } ;
struct nk_context {TYPE_2__ style; } ;
struct nk_canvas {int window_background; int item_spacing; int panel_padding; } ;


 int FUNC_0 (struct nk_context*) ;

__attribute__((used)) static void
FUNC_1(struct nk_context *VAR_0, struct nk_canvas *VAR_1)
{
    FUNC_0(VAR_0);
    VAR_0->style.window.spacing = VAR_1->panel_padding;
    VAR_0->style.window.padding = VAR_1->item_spacing;
    VAR_0->style.window.fixed_background = VAR_1->window_background;
}
