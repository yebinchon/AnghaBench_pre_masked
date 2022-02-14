
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
typedef size_t JobType ;
typedef scalar_t__ JobMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,size_t,scalar_t__,int ,int *) ;
 int FUNC_2 (int *,char const*,int ,int ,int,int *,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (size_t) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int * VAR_4 ;
 int FUNC_7 (int *,int ,char*,char const*) ;
 int FUNC_8 (int *,char*,char const**) ;
 char* FUNC_9 (char*,char*) ;

int FUNC_10(
                sd_bus_message *VAR_5,
                Unit *VAR_6,
                JobType VAR_7,
                bool VAR_8,
                sd_bus_error *VAR_9) {

        const char *VAR_10, *VAR_11;
        JobMode VAR_12;
        int VAR_13;

        FUNC_0(*VAR_5);
        FUNC_0(*VAR_6);
        FUNC_0(VAR_7 >= 0 && VAR_7 < VAR_3);

        VAR_13 = FUNC_6(
                        VAR_6, VAR_5,
                        FUNC_4(VAR_7),
                        VAR_9);
        if (VAR_13 < 0)
                return VAR_13;

        VAR_13 = FUNC_8(VAR_5, "s", &VAR_10);
        if (VAR_13 < 0)
                return VAR_13;

        VAR_12 = FUNC_3(VAR_10);
        if (VAR_12 < 0)
                return FUNC_7(VAR_9, VAR_2, "Job mode %s invalid", VAR_10);

        if (VAR_8)
                VAR_11 = FUNC_9("reload-or-", FUNC_5(VAR_7));
        else
                VAR_11 = FUNC_5(VAR_7);

        VAR_13 = FUNC_2(
                        VAR_6,
                        VAR_11,
                        VAR_1,
                        VAR_4[VAR_7],
                        1,
                        VAR_5,
                        VAR_9);
        if (VAR_13 < 0)
                return VAR_13;
        if (VAR_13 == 0)
                return 1;

        return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_12,
                                  VAR_8 ? VAR_0 : 0, VAR_9);
}
