
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
struct TYPE_4__ {int manager; } ;
typedef TYPE_1__ Unit ;
typedef int EmergencyAction ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int,int *) ;
 int FUNC_4 (int *,int ,char*,char const*,char const*) ;
 int FUNC_5 (int *,char*,char const**) ;
 int FUNC_6 (TYPE_1__*,int ,char const*,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_7(
                Unit *VAR_2,
                const char *VAR_3,
                EmergencyAction *VAR_4,
                sd_bus_message *VAR_5,
                UnitWriteFlags VAR_6,
                sd_bus_error *VAR_7) {

        const char *VAR_8;
        EmergencyAction VAR_9;
        int VAR_10;
        bool VAR_11;

        FUNC_2(VAR_4);

        VAR_10 = FUNC_5(VAR_5, "s", &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_11 = FUNC_0(VAR_2->manager);
        VAR_10 = FUNC_3(VAR_8, VAR_11, &VAR_9);
        if (VAR_10 < 0)
                return FUNC_4(VAR_7, VAR_1,
                                         VAR_10 == -VAR_0 ? "%s setting invalid for manager type: %s"
                                                          : "Invalid %s setting: %s",
                                         VAR_3, VAR_8);

        if (!FUNC_1(VAR_6)) {
                *VAR_4 = VAR_9;
                FUNC_6(VAR_2, VAR_6, VAR_3,
                                    "%s=%s", VAR_3, VAR_8);
        }

        return 1;
}
