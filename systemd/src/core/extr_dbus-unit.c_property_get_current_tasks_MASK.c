
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int Unit ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        uint64_t VAR_8 = (uint64_t) -1;
        Unit *VAR_9 = VAR_6;
        int VAR_10;

        FUNC_0(VAR_1);
        FUNC_0(VAR_5);
        FUNC_0(VAR_9);

        VAR_10 = FUNC_3(VAR_9, &VAR_8);
        if (VAR_10 < 0 && VAR_10 != -VAR_0)
                FUNC_1(VAR_9, VAR_10, "Failed to get pids.current attribute: %m");

        return FUNC_2(VAR_5, "t", VAR_8);
}
