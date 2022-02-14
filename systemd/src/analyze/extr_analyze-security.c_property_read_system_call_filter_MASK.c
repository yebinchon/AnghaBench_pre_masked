
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct security_info {int system_call_filter_whitelist; int system_call_filter; } ;
typedef char const sd_bus_message ;
typedef int sd_bus_error ;
typedef char const sd_bus ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,...) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(
                sd_bus *VAR_1,
                const char *VAR_2,
                sd_bus_message *VAR_3,
                sd_bus_error *VAR_4,
                void *VAR_5) {

        struct security_info *VAR_6 = VAR_5;
        int VAR_7, VAR_8;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_8 = FUNC_1(VAR_3, 'r', "bas");
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_3(VAR_3, "b", &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_6->system_call_filter_whitelist = VAR_7;

        VAR_8 = FUNC_1(VAR_3, 'a', "s");
        if (VAR_8 < 0)
                return VAR_8;

        for (;;) {
                const char *VAR_9;

                VAR_8 = FUNC_3(VAR_3, "s", &VAR_9);
                if (VAR_8 < 0)
                        return VAR_8;
                if (VAR_8 == 0)
                        break;

                VAR_8 = FUNC_4(&VAR_6->system_call_filter, &VAR_0);
                if (VAR_8 < 0)
                        return VAR_8;

                VAR_8 = FUNC_5(VAR_6->system_call_filter, VAR_9);
                if (VAR_8 < 0)
                        return VAR_8;
        }

        VAR_8 = FUNC_2(VAR_3);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_2(VAR_3);
}
