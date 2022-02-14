
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int uint64_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        usec_t *VAR_7 = VAR_5;
        int VAR_8;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);

        FUNC_1(sizeof(usec_t) == sizeof(uint64_t));

        VAR_8 = FUNC_2(VAR_4, "t", VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_3(VAR_7);
}
