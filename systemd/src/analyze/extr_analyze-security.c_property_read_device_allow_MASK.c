
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct security_info {int device_allow_non_empty; } ;
typedef char const sd_bus_message ;
typedef int sd_bus_error ;
typedef char const sd_bus ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,char const**,char const**) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_0,
                const char *VAR_1,
                sd_bus_message *VAR_2,
                sd_bus_error *VAR_3,
                void *VAR_4) {

        struct security_info *VAR_5 = VAR_4;
        size_t VAR_6 = 0;
        int VAR_7;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_7 = FUNC_1(VAR_2, 'a', "(ss)");
        if (VAR_7 < 0)
                return VAR_7;

        for (;;) {
                const char *VAR_8, *VAR_9;

                VAR_7 = FUNC_3(VAR_2, "(ss)", &VAR_8, &VAR_9);
                if (VAR_7 < 0)
                        return VAR_7;
                if (VAR_7 == 0)
                        break;

                VAR_6++;
        }

        VAR_5->device_allow_non_empty = VAR_6 > 0;

        return FUNC_2(VAR_2);
}
