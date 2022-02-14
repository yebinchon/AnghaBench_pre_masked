
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ bus_track; TYPE_2__* unit; } ;
struct TYPE_8__ {TYPE_1__* manager; } ;
struct TYPE_7__ {int api_bus; } ;
typedef TYPE_3__ Job ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__*,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(Job *VAR_1) {

        FUNC_0(VAR_1);

        if (VAR_1->bus_track)
                return 0;

        return FUNC_1(VAR_1->unit->manager->api_bus, &VAR_1->bus_track, VAR_0, VAR_1);
}
