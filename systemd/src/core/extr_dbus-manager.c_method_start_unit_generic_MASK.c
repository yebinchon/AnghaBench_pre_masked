
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
typedef int Manager ;
typedef int JobType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int,int *) ;
 int FUNC_2 (int *,char const*,int *,int *,int **) ;
 int FUNC_3 (int *,char*,char const**) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_0, Manager *VAR_1, JobType VAR_2, bool VAR_3, sd_bus_error *VAR_4) {
        const char *VAR_5;
        Unit *VAR_6;
        int VAR_7;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_7 = FUNC_3(VAR_0, "s", &VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_2(VAR_1, VAR_5, ((void*)0), VAR_4, &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_1(VAR_0, VAR_6, VAR_2, VAR_3, VAR_4);
}
