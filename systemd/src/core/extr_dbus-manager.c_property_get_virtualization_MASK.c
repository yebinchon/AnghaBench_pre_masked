
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        int VAR_8;

        FUNC_0(VAR_1);
        FUNC_0(VAR_5);

        VAR_8 = FUNC_1();






        return FUNC_2(
                        VAR_5, "s",
                        VAR_8 == VAR_0 ? ((void*)0) : FUNC_3(VAR_8));
}
