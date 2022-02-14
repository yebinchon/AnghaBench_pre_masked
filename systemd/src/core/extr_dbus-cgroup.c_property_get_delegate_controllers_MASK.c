
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int delegate_controllers; int delegate; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef TYPE_1__ CGroupContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,char const*,char const*,TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        CGroupContext *VAR_7 = VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        if (!VAR_7->delegate)
                return FUNC_2(VAR_4, "as", 0);

        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7->delegate_controllers, VAR_6);
}
