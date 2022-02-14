
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mpv_handle {int num_properties; scalar_t__ lowest_changed; TYPE_1__** properties; } ;
struct TYPE_2__ {int event_mask; } ;


 int FUNC_0 (struct mpv_handle*,int) ;
 int FUNC_1 (struct mpv_handle*) ;

__attribute__((used)) static void FUNC_2(struct mpv_handle *VAR_0, uint64_t VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_properties; VAR_2++) {
        if (VAR_0->properties[VAR_2]->event_mask & VAR_1)
            FUNC_0(VAR_0, VAR_2);
    }
    if (VAR_0->lowest_changed < VAR_0->num_properties)
        FUNC_1(VAR_0);
}
