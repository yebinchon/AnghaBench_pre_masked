
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uid_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,scalar_t__*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (int *,char,char const**) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        Manager *VAR_7 = VAR_5;
        const char *VAR_8;
        uid_t VAR_9;
        int VAR_10;

        FUNC_1(VAR_4);
        FUNC_1(VAR_7);

        VAR_10 = FUNC_4(VAR_4, 's', &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        if (!FUNC_0(VAR_7))
                return FUNC_3(VAR_6, VAR_3, "Dynamic users are only supported in the system instance.");
        if (!FUNC_6(VAR_8))
                return FUNC_3(VAR_6, VAR_2, "User name invalid: %s", VAR_8);

        VAR_10 = FUNC_2(VAR_7, VAR_8, &VAR_9);
        if (VAR_10 == -VAR_1)
                return FUNC_3(VAR_6, VAR_0, "Dynamic user %s does not exist.", VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        return FUNC_5(VAR_4, "u", (uint32_t) VAR_9);
}
