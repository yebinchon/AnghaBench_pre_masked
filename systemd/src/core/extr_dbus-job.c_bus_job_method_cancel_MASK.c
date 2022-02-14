
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* unit; int bus_track; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_12__ {int manager; } ;
typedef TYPE_1__ Job ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_1__*,char*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Job *VAR_4 = VAR_2;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_3(VAR_4->unit, VAR_1, "stop", VAR_3);
        if (VAR_5 < 0)
                return VAR_5;


        if (!FUNC_6(VAR_4->bus_track, FUNC_4(VAR_1))) {


                VAR_5 = FUNC_1(VAR_4->unit->manager, VAR_1, VAR_3);
                if (VAR_5 < 0)
                        return VAR_5;
                if (VAR_5 == 0)
                        return 1;
        }

        FUNC_2(VAR_4, VAR_0, 1, 0);

        return FUNC_5(VAR_1, ((void*)0));
}
