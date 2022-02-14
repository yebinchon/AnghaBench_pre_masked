
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int uint32_t ;
struct TYPE_11__ {TYPE_4__* cur_swap; TYPE_1__* plat; } ;
typedef TYPE_5__ gs_device_t ;
struct TYPE_9__ {int cy; int cx; } ;
struct TYPE_10__ {TYPE_3__ info; TYPE_2__* wi; } ;
struct TYPE_8__ {int window; } ;
struct TYPE_7__ {int * display; } ;
typedef int Display ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,int *) ;

extern void FUNC_2(gs_device_t *VAR_2)
{
 Display *VAR_3 = VAR_2->plat->display;
 xcb_window_t VAR_4 = VAR_2->cur_swap->wi->window;

 uint32_t VAR_5[] = {VAR_2->cur_swap->info.cx,
        VAR_2->cur_swap->info.cy};

 FUNC_1(FUNC_0(VAR_3), VAR_4,
        VAR_1 | VAR_0,
        VAR_5);
}
