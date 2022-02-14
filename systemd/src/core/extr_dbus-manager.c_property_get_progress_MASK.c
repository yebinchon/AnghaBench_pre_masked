
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ n_installed_jobs; int jobs; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef TYPE_1__ Manager ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,double) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Manager *VAR_7 = VAR_5;
        double VAR_8;

        FUNC_1(VAR_0);
        FUNC_1(VAR_4);
        FUNC_1(VAR_7);

        if (FUNC_0(VAR_7))
                VAR_8 = 1.0;
        else
                VAR_8 = 1.0 - ((double) FUNC_2(VAR_7->jobs) / (double) VAR_7->n_installed_jobs);

        return FUNC_3(VAR_4, "d", VAR_8);
}
