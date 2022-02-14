
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int int32_t ;
typedef int UnitWriteFlags ;
typedef int Unit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,char*,int*) ;
 int FUNC_4 (int *,int ,char const*,char*,char const*,...) ;

__attribute__((used)) static int FUNC_5(
                Unit *VAR_1,
                const char *VAR_2,
                int *VAR_3,
                sd_bus_message *VAR_4,
                UnitWriteFlags VAR_5,
                sd_bus_error *VAR_6) {

        int32_t VAR_7;
        int VAR_8;

        FUNC_1(VAR_3);

        VAR_8 = FUNC_3(VAR_4, "i", &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        if (VAR_7 > 255)
                return FUNC_2(VAR_6, VAR_0, "Exit status must be in range 0…255 or negative.");

        if (!FUNC_0(VAR_5)) {
                *VAR_3 = VAR_7 < 0 ? -1 : VAR_7;

                if (VAR_7 < 0)
                        FUNC_4(VAR_1, VAR_5, VAR_2, "%s=", VAR_2);
                else
                        FUNC_4(VAR_1, VAR_5, VAR_2, "%s=%i", VAR_2, VAR_7);
        }

        return 1;
}
