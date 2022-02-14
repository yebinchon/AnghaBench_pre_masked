
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
typedef int * Manager ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int **,int **,char const*,int **,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int **,char const*,int *,int *,int **) ;

__attribute__((used)) static int FUNC_4(Manager *VAR_0, sd_bus_message *VAR_1, const char *VAR_2, Unit **VAR_3, sd_bus_error *VAR_4) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(VAR_3);



        if (FUNC_2(VAR_2))
                return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

        return FUNC_3(VAR_0, VAR_2, ((void*)0), VAR_4, VAR_3);
}
