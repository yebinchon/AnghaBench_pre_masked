
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* working_directory; scalar_t__ working_directory_missing_ok; scalar_t__ working_directory_home; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        ExecContext *VAR_7 = VAR_5;
        const char *VAR_8;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        if (VAR_7->working_directory_home)
                VAR_8 = "~";
        else
                VAR_8 = VAR_7->working_directory;

        if (VAR_7->working_directory_missing_ok)
                VAR_8 = FUNC_2("!", VAR_8);

        return FUNC_1(VAR_4, "s", VAR_8);
}
