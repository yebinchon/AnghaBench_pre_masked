
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
typedef int Manager ;
typedef scalar_t__ JobMode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,scalar_t__,int ,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,int ,char*,char const*) ;
 int FUNC_6 (int *,char*,char const**,char const**) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,char const*,int **,int *) ;

__attribute__((used)) static int FUNC_9(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        const char *VAR_5, *VAR_6;
        Manager *VAR_7 = VAR_3;
        JobMode VAR_8;
        Unit *VAR_9;
        int VAR_10;

        FUNC_0(VAR_2);
        FUNC_0(VAR_7);

        VAR_10 = FUNC_4(VAR_2, "start", VAR_4);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_6(VAR_2, "ss", &VAR_5, &VAR_6);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_8 = FUNC_3(VAR_6);
        if (VAR_8 < 0)
                return FUNC_5(VAR_4, VAR_1, "Job mode %s is invalid.", VAR_6);

        VAR_10 = FUNC_2(VAR_7, VAR_2, VAR_4);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        VAR_10 = FUNC_8(VAR_7, VAR_2, VAR_5, &VAR_9, VAR_4);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_7(VAR_7, VAR_2, VAR_4);
        if (VAR_10 < 0)
                return VAR_10;


        return FUNC_1(VAR_2, VAR_9, VAR_0, VAR_8, 0, VAR_4);
}
