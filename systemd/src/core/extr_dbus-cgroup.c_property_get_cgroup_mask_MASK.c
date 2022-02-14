
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int CGroupMask ;
typedef scalar_t__ CGroupController ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char,char*) ;

__attribute__((used)) static int FUNC_6(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        CGroupMask *VAR_8 = VAR_6;
        CGroupController VAR_9;
        int VAR_10;

        FUNC_1(VAR_1);
        FUNC_1(VAR_5);

        VAR_10 = FUNC_5(VAR_5, 'a', "s");
        if (VAR_10 < 0)
                return VAR_10;

        for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
                if ((*VAR_8 & FUNC_0(VAR_9)) == 0)
                        continue;

                VAR_10 = FUNC_3(VAR_5, "s", FUNC_2(VAR_9));
                if (VAR_10 < 0)
                        return VAR_10;
        }

        return FUNC_4(VAR_5);
}
