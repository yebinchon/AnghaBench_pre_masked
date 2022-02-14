
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nk_rect {int h; } ;
struct TYPE_3__ {int fixed_background; void* padding; void* spacing; } ;
struct TYPE_4__ {TYPE_1__ window; } ;
struct nk_context {TYPE_2__ style; } ;
struct nk_color {int dummy; } ;
struct nk_canvas {int painter; int window_background; void* item_spacing; void* panel_padding; } ;
typedef int nk_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nk_context*,char*,int ,int) ;
 int FUNC_1 (struct nk_context*,int ,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (struct nk_color) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nk_rect*,struct nk_context*) ;
 int FUNC_6 (struct nk_context*) ;
 struct nk_rect FUNC_7 (struct nk_context*) ;
 int FUNC_8 (struct nk_context*,char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct nk_context *VAR_2, struct nk_canvas *VAR_3, nk_flags VAR_4,
    int VAR_5, int VAR_6, int VAR_7, int VAR_8, struct nk_color VAR_9)
{

    VAR_3->panel_padding = VAR_2->style.window.padding;
    VAR_3->item_spacing = VAR_2->style.window.spacing;
    VAR_3->window_background = VAR_2->style.window.fixed_background;


    VAR_2->style.window.spacing = FUNC_4(0,0);
    VAR_2->style.window.padding = FUNC_4(0,0);
    VAR_2->style.window.fixed_background = FUNC_3(VAR_9);


    VAR_4 = VAR_4 & ~VAR_0;
    FUNC_8(VAR_2, "Window", FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8));
    FUNC_0(VAR_2, "Window", FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8), VAR_1|VAR_4);


    {struct nk_rect VAR_10;
    VAR_10 = FUNC_7(VAR_2);
    FUNC_1(VAR_2, VAR_10.h, 1);
    FUNC_5(&VAR_10, VAR_2);
    VAR_3->painter = FUNC_6(VAR_2);}
}
