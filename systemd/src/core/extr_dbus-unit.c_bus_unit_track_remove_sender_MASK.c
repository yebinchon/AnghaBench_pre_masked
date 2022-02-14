
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
struct TYPE_4__ {int bus_track; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(Unit *VAR_1, sd_bus_message *VAR_2) {
        FUNC_0(VAR_1);



        if (!VAR_1->bus_track)
                return -VAR_0;

        return FUNC_1(VAR_1->bus_track, VAR_2);
}
