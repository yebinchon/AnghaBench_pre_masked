
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int unit_file_scope; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitFileChange ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_2 (int *,int,int *,size_t) ;
 int FUNC_3 (TYPE_1__*,char*,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int,int *,size_t,int *) ;
 int FUNC_5 (TYPE_1__*,char*,char const**,int*) ;
 int FUNC_6 (int ,int ,int *,char const*,int **,size_t*) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        UnitFileChange *VAR_4 = ((void*)0);
        size_t VAR_5 = 0;
        Manager *VAR_6 = VAR_2;
        const char *VAR_7;
        int VAR_8, VAR_9;

        FUNC_0(VAR_1);
        FUNC_0(VAR_6);

        VAR_9 = FUNC_3(VAR_1, "enable", VAR_3);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_5(VAR_1, "sb", &VAR_7, &VAR_8);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_1(VAR_6, VAR_1, VAR_3);
        if (VAR_9 < 0)
                return VAR_9;
        if (VAR_9 == 0)
                return 1;

        VAR_9 = FUNC_6(VAR_6->unit_file_scope, VAR_8 ? VAR_0 : 0, ((void*)0), VAR_7, &VAR_4, &VAR_5);
        if (VAR_9 < 0)
                return FUNC_2(VAR_3, VAR_9, VAR_4, VAR_5);

        return FUNC_4(VAR_6, VAR_1, -1, VAR_4, VAR_5, VAR_3);
}
