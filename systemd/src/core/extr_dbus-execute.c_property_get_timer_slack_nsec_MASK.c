
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {scalar_t__ timer_slack_nsec; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef TYPE_1__ ExecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
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
        uint64_t VAR_10;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_9);

        if (VAR_9->timer_slack_nsec != VAR_0)
                VAR_10 = (uint64_t) VAR_9->timer_slack_nsec;
        else
                VAR_10 = (uint64_t) FUNC_1(VAR_1);

        return FUNC_2(VAR_6, "t", VAR_10);
}
