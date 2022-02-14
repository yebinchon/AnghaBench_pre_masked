
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bus_track; TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_6__ {int api_bus; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(Unit *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        if (VAR_1->bus_track)
                return 0;

        VAR_2 = FUNC_1(VAR_1->manager->api_bus, &VAR_1->bus_track, VAR_0, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_2(VAR_1->bus_track, 1);
        if (VAR_2 < 0) {
                VAR_1->bus_track = FUNC_3(VAR_1->bus_track);
                return VAR_2;
        }

        return 0;
}
