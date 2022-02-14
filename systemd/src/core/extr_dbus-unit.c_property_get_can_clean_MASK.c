
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int Unit ;
typedef unsigned int ExecDirectoryType ;
typedef int ExecCleanMask ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char,char*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        Unit *VAR_8 = VAR_6;
        ExecCleanMask VAR_9;
        int VAR_10;

        FUNC_1(VAR_1);
        FUNC_1(VAR_5);

        VAR_10 = FUNC_6(VAR_8, &VAR_9);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_5(VAR_5, 'a', "s");
        if (VAR_10 < 0)
                return VAR_10;

        for (ExecDirectoryType VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
                if (!FUNC_0(VAR_9, 1U << VAR_11))
                        continue;

                VAR_10 = FUNC_3(VAR_5, "s", FUNC_2(VAR_11));
                if (VAR_10 < 0)
                        return VAR_10;
        }

        return FUNC_4(VAR_5);
}
