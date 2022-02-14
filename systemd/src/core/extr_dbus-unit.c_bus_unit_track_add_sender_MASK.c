
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_bus_message ;
struct TYPE_5__ {int bus_track; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(Unit *VAR_0, sd_bus_message *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_1(VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        return FUNC_2(VAR_0->bus_track, VAR_1);
}
