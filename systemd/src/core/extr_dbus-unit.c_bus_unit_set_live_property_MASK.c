
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
typedef char const Unit ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,char const**) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,int,char const*,char*,char const*) ;

__attribute__((used)) static int FUNC_6(
                Unit *VAR_1,
                const char *VAR_2,
                sd_bus_message *VAR_3,
                UnitWriteFlags VAR_4,
                sd_bus_error *VAR_5) {

        int VAR_6;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);




        if (FUNC_3(VAR_2, "Description")) {
                const char *VAR_7;

                VAR_6 = FUNC_2(VAR_3, "s", &VAR_7);
                if (VAR_6 < 0)
                        return VAR_6;

                if (!FUNC_0(VAR_4)) {
                        VAR_6 = FUNC_4(VAR_1, VAR_7);
                        if (VAR_6 < 0)
                                return VAR_6;

                        FUNC_5(VAR_1, VAR_4|VAR_0, VAR_2, "Description=%s", VAR_7);
                }

                return 1;
        }

        return 0;
}
