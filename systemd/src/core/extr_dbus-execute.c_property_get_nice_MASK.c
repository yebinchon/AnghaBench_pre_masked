
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nice; scalar_t__ nice_set; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef scalar_t__ int32_t ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                sd_bus_message *VAR_6,
                void *VAR_7,
                sd_bus_error *VAR_8) {

        ExecContext *VAR_9 = VAR_7;
        int32_t VAR_10;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_9);

        if (VAR_9->nice_set)
                VAR_10 = VAR_9->nice;
        else {
                VAR_1 = 0;
                VAR_10 = FUNC_1(VAR_0, 0);
                if (VAR_1 > 0)
                        VAR_10 = 0;
        }

        return FUNC_2(VAR_6, "i", VAR_10);
}
