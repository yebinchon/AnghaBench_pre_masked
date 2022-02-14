
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int objective; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int *) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Manager *VAR_4 = VAR_2;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_3("Refusing to reexecute", VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_2(VAR_1, "reload", VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_3);
        if (VAR_5 < 0)
                return VAR_5;
        if (VAR_5 == 0)
                return 1;




        VAR_4->objective = VAR_0;
        return 1;
}
