
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
typedef int Unit ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char**,int ) ;
 int FUNC_4 (int *,char*,char const**) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,int,char const*,char*,char const*,int ) ;

int FUNC_7(
                Unit *VAR_1,
                const char *VAR_2,
                char **VAR_3,
                sd_bus_message *VAR_4,
                UnitWriteFlags VAR_5,
                sd_bus_error *VAR_6) {

        const char *VAR_7;
        int VAR_8;

        FUNC_1(VAR_3);

        VAR_8 = FUNC_4(VAR_4, "s", &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        if (!FUNC_0(VAR_5)) {
                VAR_8 = FUNC_3(VAR_3, FUNC_2(VAR_7));
                if (VAR_8 < 0)
                        return VAR_8;

                FUNC_6(VAR_1, VAR_5|VAR_0, VAR_2,
                                    "%s=%s", VAR_2, FUNC_5(VAR_7));
        }

        return 1;
}
