
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


struct TYPE_20__ {scalar_t__ load_state; scalar_t__ transient; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
typedef TYPE_1__ Unit ;
struct TYPE_19__ {int (* bus_set_property ) (TYPE_1__*,char const*,TYPE_1__*,int,int *) ;int (* bus_commit_properties ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_17__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,TYPE_1__*,int,int *) ;
 int FUNC_4 (TYPE_1__*,char const*,TYPE_1__*,int,int *) ;
 int FUNC_5 (int *,int ,char*,...) ;
 int FUNC_6 (TYPE_1__*,char,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,char const**) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,char const*,TYPE_1__*,int,int *) ;
 int FUNC_11 (TYPE_1__*) ;

int FUNC_12(
                Unit *VAR_4,
                sd_bus_message *VAR_5,
                UnitWriteFlags VAR_6,
                bool VAR_7,
                sd_bus_error *VAR_8) {

        bool VAR_9 = 0;
        unsigned VAR_10 = 0;
        int VAR_11;

        FUNC_2(VAR_4);
        FUNC_2(VAR_5);






        VAR_11 = FUNC_6(VAR_5, 'a', "(sv)");
        if (VAR_11 < 0)
                return VAR_11;

        for (;;) {
                const char *VAR_12;
                UnitWriteFlags VAR_13;

                VAR_11 = FUNC_6(VAR_5, 'r', "sv");
                if (VAR_11 < 0)
                        return VAR_11;
                if (VAR_11 == 0) {
                        if (VAR_9 || FUNC_1(VAR_6))
                                break;


                        VAR_11 = FUNC_9(VAR_5, 0);
                        if (VAR_11 < 0)
                                return VAR_11;

                        VAR_9 = 1;
                        continue;
                }

                VAR_11 = FUNC_8(VAR_5, "s", &VAR_12);
                if (VAR_11 < 0)
                        return VAR_11;

                if (!FUNC_0(VAR_4)->bus_set_property)
                        return FUNC_5(VAR_8, VAR_0, "Objects of this type do not support setting properties.");

                VAR_11 = FUNC_6(VAR_5, 'v', ((void*)0));
                if (VAR_11 < 0)
                        return VAR_11;


                VAR_13 = VAR_9 ? VAR_6 : (VAR_6 & ~(VAR_2|VAR_1));

                VAR_11 = FUNC_0(VAR_4)->bus_set_property(VAR_4, VAR_12, VAR_5, VAR_13, VAR_8);
                if (VAR_11 == 0 && VAR_4->transient && VAR_4->load_state == VAR_3)
                        VAR_11 = FUNC_4(VAR_4, VAR_12, VAR_5, VAR_13, VAR_8);
                if (VAR_11 == 0)
                        VAR_11 = FUNC_3(VAR_4, VAR_12, VAR_5, VAR_13, VAR_8);
                if (VAR_11 < 0)
                        return VAR_11;

                if (VAR_11 == 0)
                        return FUNC_5(VAR_8, VAR_0, "Cannot set property %s, or unknown property.", VAR_12);

                VAR_11 = FUNC_7(VAR_5);
                if (VAR_11 < 0)
                        return VAR_11;

                VAR_11 = FUNC_7(VAR_5);
                if (VAR_11 < 0)
                        return VAR_11;

                VAR_10 += VAR_9;
        }

        VAR_11 = FUNC_7(VAR_5);
        if (VAR_11 < 0)
                return VAR_11;

        if (VAR_7 && VAR_10 > 0 && FUNC_0(VAR_4)->bus_commit_properties)
                FUNC_0(VAR_4)->bus_commit_properties(VAR_4);

        return VAR_10;
}
