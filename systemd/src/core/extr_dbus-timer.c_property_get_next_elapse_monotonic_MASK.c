
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int next_elapse_monotonic_or_boottime; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef TYPE_1__ Timer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        Timer *VAR_8 = VAR_6;

        FUNC_1(VAR_1);
        FUNC_1(VAR_5);
        FUNC_1(VAR_8);

        return FUNC_2(VAR_5, "t",
                                     (uint64_t) FUNC_3(VAR_8->next_elapse_monotonic_or_boottime,
                                                                 FUNC_0(VAR_8), VAR_0));
}
