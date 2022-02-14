
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bus_track; } ;
typedef TYPE_1__ sd_bus_track ;
typedef TYPE_1__ Job ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sd_bus_track *VAR_0, void *VAR_1) {
        Job *VAR_2 = VAR_1;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        VAR_2->bus_track = FUNC_2(VAR_2->bus_track);


        FUNC_1(VAR_2);
        return 0;
}
