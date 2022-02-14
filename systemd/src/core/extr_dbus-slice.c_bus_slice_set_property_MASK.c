
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
typedef char const Unit ;
struct TYPE_3__ {int cgroup_context; } ;
typedef TYPE_1__ Slice ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int *,char const*,int *,int ,int *) ;

int FUNC_3(
                Unit *VAR_0,
                const char *VAR_1,
                sd_bus_message *VAR_2,
                UnitWriteFlags VAR_3,
                sd_bus_error *VAR_4) {

        Slice *VAR_5 = FUNC_0(VAR_0);

        FUNC_1(VAR_1);
        FUNC_1(VAR_0);

        return FUNC_2(VAR_0, &VAR_5->cgroup_context, VAR_1, VAR_2, VAR_3, VAR_4);
}
