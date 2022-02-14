
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Unit *VAR_5 = VAR_3;
        int VAR_6;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_1(VAR_5, VAR_2);
        if (VAR_6 == -VAR_1)
                return FUNC_2(VAR_4, VAR_0, "Unit has not been referenced yet.");
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_3(VAR_2, ((void*)0));
}
