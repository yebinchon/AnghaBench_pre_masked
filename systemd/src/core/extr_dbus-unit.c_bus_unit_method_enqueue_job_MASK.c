
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
typedef size_t JobType ;
typedef scalar_t__ JobMode ;
typedef int BusUnitQueueFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t,scalar_t__,int ,int *) ;
 int FUNC_2 (int *,char const*,int ,int ,int,int *,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int * VAR_6 ;
 int FUNC_7 (int *,int ,char*,char const*) ;
 int FUNC_8 (int *,char*,char const**,char const**) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

int FUNC_10(sd_bus_message *VAR_7, void *VAR_8, sd_bus_error *VAR_9) {
        BusUnitQueueFlags VAR_10 = VAR_1;
        const char *VAR_11, *VAR_12;
        Unit *VAR_13 = VAR_8;
        JobType VAR_14;
        JobMode VAR_15;
        int VAR_16;

        FUNC_0(VAR_7);
        FUNC_0(VAR_13);

        VAR_16 = FUNC_8(VAR_7, "ss", &VAR_11, &VAR_12);
        if (VAR_16 < 0)
                return VAR_16;


        if (FUNC_9(VAR_11, "reload-or-restart")) {
                VAR_14 = VAR_3;
                VAR_10 |= VAR_0;
        } else if (FUNC_9(VAR_11, "reload-or-try-restart")) {
                VAR_14 = VAR_4;
                VAR_10 |= VAR_0;
        } else {

                VAR_14 = FUNC_4(VAR_11);
                if (VAR_14 < 0)
                        return FUNC_7(VAR_9, VAR_5, "Job type %s invalid", VAR_11);
        }

        VAR_15 = FUNC_3(VAR_12);
        if (VAR_15 < 0)
                return FUNC_7(VAR_9, VAR_5, "Job mode %s invalid", VAR_12);

        VAR_16 = FUNC_6(
                        VAR_13, VAR_7,
                        FUNC_5(VAR_14),
                        VAR_9);
        if (VAR_16 < 0)
                return VAR_16;

        VAR_16 = FUNC_2(
                        VAR_13,
                        VAR_11,
                        VAR_2,
                        VAR_6[VAR_14],
                        1,
                        VAR_7,
                        VAR_9);
        if (VAR_16 < 0)
                return VAR_16;
        if (VAR_16 == 0)
                return 1;

        return FUNC_1(VAR_7, VAR_13, VAR_14, VAR_15, VAR_10, VAR_9);
}
