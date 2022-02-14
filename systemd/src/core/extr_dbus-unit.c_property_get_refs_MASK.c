
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_2__ {int bus_track; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char,char*) ;
 int FUNC_4 (int ,char const*) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Unit *VAR_7 = VAR_5;
        const char *VAR_8;
        int VAR_9;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);

        VAR_9 = FUNC_3(VAR_4, 'a', "s");
        if (VAR_9 < 0)
                return VAR_9;

        for (VAR_8 = FUNC_5(VAR_7->bus_track); VAR_8; VAR_8 = FUNC_6(VAR_7->bus_track)) {
                int VAR_10, VAR_11;

                VAR_10 = FUNC_4(VAR_7->bus_track, VAR_8);
                if (VAR_10 < 0)
                        return VAR_10;


                for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
                        VAR_9 = FUNC_1(VAR_4, "s", VAR_8);
                        if (VAR_9 < 0)
                                return VAR_9;
                }
        }

        return FUNC_2(VAR_4);
}
