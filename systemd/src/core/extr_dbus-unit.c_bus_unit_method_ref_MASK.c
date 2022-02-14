
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int ,int *,int,int *,int *) ;
 int FUNC_3 (int *,int *,char*,int *) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Unit *VAR_4 = VAR_2;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_3(VAR_4, VAR_1, "start", VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_2(
                        VAR_4,
                        "ref",
                        VAR_0,
                        ((void*)0),
                        0,
                        VAR_1,
                        VAR_3);
        if (VAR_5 < 0)
                return VAR_5;
        if (VAR_5 == 0)
                return 1;

        VAR_5 = FUNC_1(VAR_4, VAR_1);
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_4(VAR_1, ((void*)0));
}
