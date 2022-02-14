
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int char_width; int char_height; int text_gc; TYPE_1__* drawarea; int back_pixel; } ;
struct TYPE_6__ {int pixel; } ;
struct TYPE_5__ {int * window; } ;
typedef TYPE_2__ GdkColor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,int ,int ,int,int) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_3__ VAR_2 ;

void
FUNC_4(int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    GdkColor VAR_7;

    if (VAR_2.drawarea->window == ((void*)0))
 return;

    VAR_7.pixel = VAR_2.back_pixel;

    FUNC_3(VAR_2.text_gc, &VAR_7);



    FUNC_2(VAR_2.drawarea->window, VAR_2.text_gc, VAR_1,
         FUNC_0(VAR_4), FUNC_1(VAR_3),
         (VAR_6 - VAR_4 + 1) * VAR_2.char_width
            + (VAR_6 == VAR_0 - 1),
         (VAR_5 - VAR_3 + 1) * VAR_2.char_height);
}
