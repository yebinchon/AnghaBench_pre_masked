
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINHELP_WINDOW ;
struct TYPE_4__ {int * active_win; } ;
struct TYPE_3__ {int * window; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

WINHELP_WINDOW* FUNC_0(void)
{
    return VAR_1 ? VAR_1->window : VAR_0.active_win;
}
