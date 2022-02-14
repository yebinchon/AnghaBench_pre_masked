
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bus_track; } ;
typedef TYPE_1__ sd_bus_track ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(sd_bus_track *VAR_0, void *VAR_1) {
        Unit *VAR_2 = VAR_1;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        VAR_2->bus_track = FUNC_1(VAR_2->bus_track);



        FUNC_2(VAR_2);


        FUNC_3(VAR_2);

        return 0;
}
