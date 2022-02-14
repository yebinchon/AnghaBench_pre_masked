
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_error ;
struct TYPE_4__ {int load_state; int id; int load_error; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *,int ,char*,int ) ;

int FUNC_3(Unit *VAR_3, sd_bus_error *VAR_4) {
        FUNC_0(VAR_3);



        switch (VAR_3->load_state) {

        case 132:
                return 0;

        case 129:
                return FUNC_2(VAR_4, VAR_1, "Unit %s not found.", VAR_3->id);

        case 134:
                return FUNC_2(VAR_4, VAR_0, "Unit %s has a bad unit file setting.", VAR_3->id);

        case 133:
                return FUNC_1(VAR_4, VAR_3->load_error, "Unit %s failed to load properly: %m.", VAR_3->id);

        case 131:
                return FUNC_2(VAR_4, VAR_2, "Unit %s is masked.", VAR_3->id);

        case 128:
        case 130:
        default:
                return FUNC_2(VAR_4, VAR_1, "Unexpected load state of unit %s", VAR_3->id);
        }
}
