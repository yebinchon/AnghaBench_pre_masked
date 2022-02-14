
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int uint64_t ;
typedef int ts ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
typedef int Unit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,scalar_t__) ;
 int FUNC_6 (int *,int ,char const*,char*,char*,int ) ;

int FUNC_7(
                Unit *VAR_3,
                const char *VAR_4,
                usec_t *VAR_5,
                bool VAR_6,
                sd_bus_message *VAR_7,
                UnitWriteFlags VAR_8,
                sd_bus_error *VAR_9) {

        uint64_t VAR_10;
        int VAR_11;

        FUNC_1(VAR_5);

        VAR_11 = FUNC_3(VAR_7, "t", &VAR_10);
        if (VAR_11 < 0)
                return VAR_11;

        if (!FUNC_0(VAR_8)) {
                char *VAR_12, VAR_13[VAR_0];

                if (VAR_6)
                        *VAR_5 = VAR_10 != 0 ? VAR_10: VAR_1;
                else
                        *VAR_5 = VAR_10;

                VAR_12 = FUNC_5(VAR_4, FUNC_4(VAR_4) - 4);
                FUNC_6(VAR_3, VAR_8, VAR_4, "%sSec=%s", VAR_12,
                                    FUNC_2(VAR_13, sizeof(VAR_13), VAR_10, VAR_2));
        }

        return 1;
}
