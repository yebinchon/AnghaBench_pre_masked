
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus_track ;
struct TYPE_3__ {int controller_track; scalar_t__ controller; } ;
typedef TYPE_1__ Scope ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(sd_bus_track *VAR_0, void *VAR_1) {
        Scope *VAR_2 = VAR_1;

        FUNC_1(VAR_0);

        if (VAR_2->controller) {
                FUNC_2(FUNC_0(VAR_2), "Controller %s disappeared from bus.", VAR_2->controller);
                FUNC_5(FUNC_0(VAR_2));
                VAR_2->controller = FUNC_3(VAR_2->controller);
        }

        VAR_2->controller_track = FUNC_4(VAR_2->controller_track);

        return 0;
}
