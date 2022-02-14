
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ api_bus; int subscribed; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Manager *VAR_4 = VAR_2;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);



        VAR_5 = FUNC_1(VAR_1, "status", VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        if (FUNC_3(VAR_1) == VAR_4->api_bus) {
                VAR_5 = FUNC_5(VAR_4->subscribed, VAR_1);
                if (VAR_5 < 0)
                        return VAR_5;
                if (VAR_5 == 0)
                        return FUNC_2(VAR_3, VAR_0, "Client is not subscribed.");
        }

        return FUNC_4(VAR_1, ((void*)0));
}
