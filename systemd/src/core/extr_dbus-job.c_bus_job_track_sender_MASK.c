
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int ref_by_private_bus; int bus_track; TYPE_2__* unit; } ;
typedef TYPE_3__ sd_bus_message ;
struct TYPE_12__ {TYPE_1__* manager; } ;
struct TYPE_11__ {scalar_t__ api_bus; } ;
typedef TYPE_3__ Job ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;

int FUNC_4(Job *VAR_0, sd_bus_message *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (FUNC_2(VAR_1) != VAR_0->unit->manager->api_bus) {
                VAR_0->ref_by_private_bus = 1;
                return 0;
        }

        VAR_2 = FUNC_1(VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        return FUNC_3(VAR_0->bus_track, VAR_1);
}
