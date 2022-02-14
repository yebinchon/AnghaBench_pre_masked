
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int listview_mouse_activated_cb ;
struct TYPE_3__ {void* mouse_activated_data; int mouse_activated; } ;
typedef TYPE_1__ listview ;



void FUNC_0 ( listview *VAR_0, listview_mouse_activated_cb VAR_1, void *VAR_2 )
{
    if ( VAR_0 ) {
        VAR_0->mouse_activated = VAR_1;
        VAR_0->mouse_activated_data = VAR_2;
    }
}
