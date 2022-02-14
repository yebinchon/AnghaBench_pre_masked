
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ visibility; int scroll_region_left; int char_width; int scroll_region_right; int char_height; int scroll_region_bot; TYPE_1__* drawarea; int text_gc; int bgcolor; int fgcolor; } ;
struct TYPE_3__ {int window; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_6 (int,int,int,int) ;

void
FUNC_7(int VAR_2, int VAR_3)
{
    if (VAR_1.visibility == VAR_0)
 return;

    FUNC_4(VAR_1.text_gc, VAR_1.fgcolor);
    FUNC_3(VAR_1.text_gc, VAR_1.bgcolor);


    FUNC_5(VAR_1.drawarea->window, VAR_1.text_gc,
     FUNC_0(VAR_1.scroll_region_left), FUNC_1(VAR_2),
     VAR_1.drawarea->window,
     FUNC_0(VAR_1.scroll_region_left),
     FUNC_1(VAR_2 + VAR_3),
     VAR_1.char_width * (VAR_1.scroll_region_right
         - VAR_1.scroll_region_left + 1) + 1,
     VAR_1.char_height * (VAR_1.scroll_region_bot - VAR_2 - VAR_3 + 1));

    FUNC_6(VAR_1.scroll_region_bot - VAR_3 + 1,
             VAR_1.scroll_region_left,
      VAR_1.scroll_region_bot, VAR_1.scroll_region_right);
    FUNC_2();
}
