
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char const sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
struct TYPE_4__ {scalar_t__ load_state; scalar_t__ transient; } ;
typedef TYPE_1__ Unit ;
typedef char const Automount ;


 char* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,char const*,int ,int *) ;

int FUNC_3(
                Unit *VAR_1,
                const char *VAR_2,
                sd_bus_message *VAR_3,
                UnitWriteFlags VAR_4,
                sd_bus_error *VAR_5) {

        Automount *VAR_6 = FUNC_0(VAR_1);

        FUNC_1(VAR_6);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        if (VAR_1->transient && VAR_1->load_state == VAR_0)
                return FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

        return 0;
}
