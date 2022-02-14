
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct observe_property {scalar_t__ reply_id; int dead; } ;
struct TYPE_4__ {int num_properties; int lock; struct observe_property** properties; } ;
typedef TYPE_1__ mpv_handle ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(mpv_handle *VAR_0, uint64_t VAR_1)
{
    FUNC_1(&VAR_0->lock);
    int VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_properties; VAR_3++) {
        struct observe_property *VAR_4 = VAR_0->properties[VAR_3];


        if (VAR_4->reply_id == VAR_1 && !VAR_4->dead) {
            FUNC_0(VAR_0, VAR_3);
            VAR_4->dead = 1;
            VAR_2++;
        }
    }
    FUNC_2(&VAR_0->lock);
    return VAR_2;
}
