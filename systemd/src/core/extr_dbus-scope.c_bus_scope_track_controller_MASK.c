
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* manager; } ;
struct TYPE_9__ {scalar_t__ controller_track; int controller; } ;
struct TYPE_8__ {int api_bus; } ;
typedef TYPE_2__ Scope ;


 TYPE_6__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

int FUNC_5(Scope *VAR_1) {
        int VAR_2;

        FUNC_1(VAR_1);

        if (!VAR_1->controller || VAR_1->controller_track)
                return 0;

        VAR_2 = FUNC_3(FUNC_0(VAR_1)->manager->api_bus, &VAR_1->controller_track, VAR_0, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_2(VAR_1->controller_track, VAR_1->controller);
        if (VAR_2 < 0) {
                VAR_1->controller_track = FUNC_4(VAR_1->controller_track);
                return VAR_2;
        }

        return 0;
}
