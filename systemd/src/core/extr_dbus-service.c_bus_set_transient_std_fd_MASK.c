
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
typedef int Unit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int*) ;

__attribute__((used)) static int FUNC_5(
                Unit *VAR_2,
                const char *VAR_3,
                int *VAR_4,
                bool *VAR_5,
                sd_bus_message *VAR_6,
                UnitWriteFlags VAR_7,
                sd_bus_error *VAR_8) {

        int VAR_9, VAR_10;

        FUNC_1(VAR_4);
        FUNC_1(VAR_5);

        VAR_10 = FUNC_4(VAR_6, "h", &VAR_9);
        if (VAR_10 < 0)
                return VAR_10;

        if (!FUNC_0(VAR_7)) {
                int VAR_11;

                VAR_11 = FUNC_3(VAR_9, VAR_0, 3);
                if (VAR_11 < 0)
                        return -VAR_1;

                FUNC_2(*VAR_4);
                *VAR_4 = VAR_11;
                *VAR_5 = 1;
        }

        return 1;
}
