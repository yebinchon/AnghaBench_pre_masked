
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
typedef int Manager ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ,char*,char const*) ;
 int FUNC_3 (int *,char*,char const**) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Manager *VAR_4 = VAR_2;
        const char *VAR_5;
        Unit *VAR_6;
        int VAR_7;

        VAR_7 = FUNC_3(VAR_1, "s", &VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_6 = FUNC_0(VAR_4, VAR_5);
        if (!VAR_6)
                return FUNC_2(VAR_3, VAR_0, "Control group '%s' is not valid or not managed by this instance", VAR_5);

        return FUNC_1(VAR_6, VAR_1, VAR_3);
}
