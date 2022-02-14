
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const Unit ;
struct TYPE_3__ {int deserialized_found; scalar_t__ deserialized_state; } ;
typedef char const FDSet ;
typedef scalar_t__ DeviceState ;
typedef TYPE_1__ Device ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*,char const*) ;
 int FUNC_5 (char const*,int,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(Unit *VAR_0, const char *VAR_1, const char *VAR_2, FDSet *VAR_3) {
        Device *VAR_4 = FUNC_0(VAR_0);
        int VAR_5;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        if (FUNC_6(VAR_1, "state")) {
                DeviceState VAR_6;

                VAR_6 = FUNC_3(VAR_2);
                if (VAR_6 < 0)
                        FUNC_4(VAR_0, "Failed to parse state value, ignoring: %s", VAR_2);
                else
                        VAR_4->deserialized_state = VAR_6;

        } else if (FUNC_6(VAR_1, "found")) {
                VAR_5 = FUNC_2(VAR_2, &VAR_4->deserialized_found);
                if (VAR_5 < 0)
                        FUNC_5(VAR_0, VAR_5, "Failed to parse found value '%s', ignoring: %m", VAR_2);

        } else
                FUNC_4(VAR_0, "Unknown serialization key: %s", VAR_1);

        return 0;
}
