
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
typedef int Manager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char const**) ;
 int FUNC_4 (int *,int *,char const*,int **,int *) ;

__attribute__((used)) static int FUNC_5(
                Manager *VAR_0,
                sd_bus_message *VAR_1,
                sd_bus_error *VAR_2) {

        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_3 = FUNC_1(VAR_1, 'a', "(sa(sv))");
        if (VAR_3 < 0)
                return VAR_3;

        while ((VAR_3 = FUNC_1(VAR_1, 'r', "sa(sv)")) > 0) {
                const char *VAR_4 = ((void*)0);
                Unit *VAR_5;

                VAR_3 = FUNC_3(VAR_1, "s", &VAR_4);
                if (VAR_3 < 0)
                        return VAR_3;

                VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_4, &VAR_5, VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;

                VAR_3 = FUNC_2(VAR_1);
                if (VAR_3 < 0)
                        return VAR_3;
        }
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_2(VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
