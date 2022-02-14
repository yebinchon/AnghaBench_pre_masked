
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* sd_bus_message_handler_t ) (int *,int *,int *) ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
typedef int Manager ;
typedef int GenericUnitOperationFlags ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char const*,int **,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*,int *,int *,int **) ;
 int FUNC_6 (int *,char*,char const**) ;

__attribute__((used)) static int FUNC_7(
                sd_bus_message *VAR_2,
                Manager *VAR_3,
                sd_bus_error *VAR_4,
                sd_bus_message_handler_t VAR_5,
                GenericUnitOperationFlags VAR_6) {

        const char *VAR_7;
        Unit *VAR_8;
        int VAR_9;

        FUNC_1(VAR_2);
        FUNC_1(VAR_3);




        VAR_9 = FUNC_6(VAR_2, "s", &VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        if (!FUNC_4(VAR_7) && FUNC_0(VAR_6, VAR_0))
                VAR_9 = FUNC_5(VAR_3, VAR_7, ((void*)0), VAR_4, &VAR_8);
        else
                VAR_9 = FUNC_2(VAR_3, VAR_2, VAR_7, &VAR_8, VAR_4);
        if (VAR_9 < 0)
                return VAR_9;

        if (FUNC_0(VAR_6, VAR_1)) {
                VAR_9 = FUNC_3(VAR_8, VAR_4);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        return VAR_5(VAR_2, VAR_8, VAR_4);
}
