
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int,int *) ;
 int FUNC_3 (int *,char*,int ,int ,int,int *,int *) ;
 int FUNC_4 (int *,int *,char*,int *) ;
 int FUNC_5 (int *,char*,int*) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(sd_bus_message *VAR_3, void *VAR_4, sd_bus_error *VAR_5) {
        Unit *VAR_6 = VAR_4;
        int VAR_7, VAR_8;

        FUNC_1(VAR_3);
        FUNC_1(VAR_6);

        VAR_8 = FUNC_4(VAR_6, VAR_3, "start", VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_5(VAR_3, "b", &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_3(
                        VAR_6,
                        "set-property",
                        VAR_0,
                        FUNC_0("Authentication is required to set properties on '$(unit)'."),
                        1,
                        VAR_3,
                        VAR_5);
        if (VAR_8 < 0)
                return VAR_8;
        if (VAR_8 == 0)
                return 1;

        VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_7 ? VAR_2 : VAR_1, 1, VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_6(VAR_3, ((void*)0));
}
