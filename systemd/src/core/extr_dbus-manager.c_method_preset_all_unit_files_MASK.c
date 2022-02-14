
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int unit_file_scope; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef scalar_t__ UnitFilePresetMode ;
typedef int UnitFileFlags ;
typedef int UnitFileChange ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_2 (int *,int,int *,size_t) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,char*,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int,int *,size_t,int *) ;
 int FUNC_6 (TYPE_1__*,char*,char const**,int*,int*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ,int *,scalar_t__,int **,size_t*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        UnitFileChange *VAR_5 = ((void*)0);
        size_t VAR_6 = 0;
        Manager *VAR_7 = VAR_3;
        UnitFilePresetMode VAR_8;
        const char *VAR_9;
        UnitFileFlags VAR_10;
        int VAR_11, VAR_12, VAR_13;

        FUNC_0(VAR_2);
        FUNC_0(VAR_7);

        VAR_13 = FUNC_4(VAR_2, "enable", VAR_4);
        if (VAR_13 < 0)
                return VAR_13;

        VAR_13 = FUNC_6(VAR_2, "sbb", &VAR_9, &VAR_12, &VAR_11);
        if (VAR_13 < 0)
                return VAR_13;

        VAR_10 = FUNC_7(VAR_12, VAR_11);

        if (FUNC_3(VAR_9))
                VAR_8 = VAR_1;
        else {
                VAR_8 = FUNC_9(VAR_9);
                if (VAR_8 < 0)
                        return -VAR_0;
        }

        VAR_13 = FUNC_1(VAR_7, VAR_2, VAR_4);
        if (VAR_13 < 0)
                return VAR_13;
        if (VAR_13 == 0)
                return 1;

        VAR_13 = FUNC_8(VAR_7->unit_file_scope, VAR_10, ((void*)0), VAR_8, &VAR_5, &VAR_6);
        if (VAR_13 < 0)
                return FUNC_2(VAR_4, VAR_13, VAR_5, VAR_6);

        return FUNC_5(VAR_7, VAR_2, -1, VAR_5, VAR_6, VAR_4);
}
