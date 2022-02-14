
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_5__ {TYPE_1__* job; } ;
typedef TYPE_2__ Unit ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef int Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char const*,TYPE_2__**,int *) ;
 int FUNC_2 (int *,int *,scalar_t__,int,int *) ;
 int FUNC_3 (int *,int ,char*,char const*) ;
 int FUNC_4 (int *,char*,char const**) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Manager *VAR_5 = VAR_3;
        const char *VAR_6;
        Unit *VAR_7;
        int VAR_8;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_8 = FUNC_4(VAR_2, "s", &VAR_6);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_6, &VAR_7, VAR_4);
        if (VAR_8 < 0)
                return VAR_8;
        if (!VAR_7->job || VAR_7->job->type != VAR_1)
                return FUNC_3(VAR_4, VAR_0, "No job queued for unit %s", VAR_6);

        return FUNC_2(VAR_2, VAR_5, VAR_1, 0, VAR_4);
}
