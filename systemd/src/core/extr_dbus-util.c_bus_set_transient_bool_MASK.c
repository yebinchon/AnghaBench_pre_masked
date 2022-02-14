
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
typedef int Unit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,char*,int*) ;
 int FUNC_3 (int *,int ,char const*,char*,char const*,int ) ;
 int FUNC_4 (int) ;

int FUNC_5(
                Unit *VAR_0,
                const char *VAR_1,
                bool *VAR_2,
                sd_bus_message *VAR_3,
                UnitWriteFlags VAR_4,
                sd_bus_error *VAR_5) {

        int VAR_6, VAR_7;

        FUNC_1(VAR_2);

        VAR_7 = FUNC_2(VAR_3, "b", &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        if (!FUNC_0(VAR_4)) {
                *VAR_2 = VAR_6;
                FUNC_3(VAR_0, VAR_4, VAR_1, "%s=%s", VAR_1, FUNC_4(VAR_6));
        }

        return 1;
}
