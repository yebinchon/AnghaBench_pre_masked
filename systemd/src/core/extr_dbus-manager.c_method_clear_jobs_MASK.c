
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Manager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        Manager *VAR_3 = VAR_1;
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_4 = FUNC_2(VAR_0, "reload", VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_2);
        if (VAR_4 < 0)
                return VAR_4;
        if (VAR_4 == 0)
                return 1;

        FUNC_3(VAR_3);

        return FUNC_4(VAR_0, ((void*)0));
}
