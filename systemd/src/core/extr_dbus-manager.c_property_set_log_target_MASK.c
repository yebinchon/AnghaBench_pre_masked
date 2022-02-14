
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int Manager ;
typedef scalar_t__ LogTarget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*,char const*) ;
 int FUNC_6 (int *,char*,char const**) ;

__attribute__((used)) static int FUNC_7(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        Manager *VAR_8 = VAR_6;
        const char *VAR_9;
        int VAR_10;

        FUNC_0(VAR_1);
        FUNC_0(VAR_5);

        VAR_10 = FUNC_6(VAR_5, "s", &VAR_9);
        if (VAR_10 < 0)
                return VAR_10;

        if (FUNC_1(VAR_9))
                FUNC_4(VAR_8);
        else {
                LogTarget VAR_11;

                VAR_11 = FUNC_2(VAR_9);
                if (VAR_11 < 0)
                        return FUNC_5(VAR_7, VAR_0, "Invalid log target '%s'", VAR_9);

                FUNC_3(VAR_8, VAR_11);
        }

        return 0;
}
