
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char const sd_bus_message ;
typedef int sd_bus_error ;
typedef size_t UnitType ;
struct TYPE_10__ {scalar_t__ bus_track_add; } ;
typedef TYPE_1__ Unit ;
struct TYPE_11__ {int can_transient; } ;
typedef char const Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,char const*,int ,int,int *) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*,int *,int *,TYPE_1__**) ;
 int FUNC_6 (int *,int ,char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 size_t FUNC_10 (char const*) ;
 char const* FUNC_11 (size_t) ;
 TYPE_2__** VAR_3 ;

__attribute__((used)) static int FUNC_12(
                Manager *VAR_4,
                sd_bus_message *VAR_5,
                const char *VAR_6,
                Unit **VAR_7,
                sd_bus_error *VAR_8) {

        UnitType VAR_9;
        Unit *VAR_10;
        int VAR_11;

        FUNC_0(VAR_4);
        FUNC_0(VAR_5);
        FUNC_0(VAR_6);

        VAR_9 = FUNC_10(VAR_6);
        if (VAR_9 < 0)
                return FUNC_6(VAR_8, VAR_1, "Invalid unit name or type.");

        if (!VAR_3[VAR_9]->can_transient)
                return FUNC_6(VAR_8, VAR_1, "Unit type %s does not support transient units.", FUNC_11(VAR_9));

        VAR_11 = FUNC_5(VAR_4, VAR_6, ((void*)0), VAR_8, &VAR_10);
        if (VAR_11 < 0)
                return VAR_11;

        if (!FUNC_8(VAR_10))
                return FUNC_6(VAR_8, VAR_0, "Unit %s already exists.", VAR_6);



        VAR_11 = FUNC_9(VAR_10);
        if (VAR_11 < 0)
                return VAR_11;


        VAR_11 = FUNC_1(VAR_10, VAR_5, VAR_2, 0, VAR_8);
        if (VAR_11 < 0)
                return VAR_11;


        if (VAR_10->bus_track_add) {
                VAR_11 = FUNC_2(VAR_10, VAR_5);
                if (VAR_11 < 0)
                        return FUNC_3(VAR_11, "Failed to watch sender: %m");
        }


        FUNC_7(VAR_10);
        FUNC_4(VAR_4);

        *VAR_7 = VAR_10;

        return 0;
}
