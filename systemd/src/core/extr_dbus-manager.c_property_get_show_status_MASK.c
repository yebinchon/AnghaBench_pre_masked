
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int show_status; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char,int*) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                sd_bus_message *VAR_6,
                void *VAR_7,
                sd_bus_error *VAR_8) {

        Manager *VAR_9 = VAR_7;
        int VAR_10;

        FUNC_1(VAR_2);
        FUNC_1(VAR_6);
        FUNC_1(VAR_9);

        VAR_10 = FUNC_0(VAR_9->show_status, VAR_0, VAR_1);
        return FUNC_2(VAR_6, 'b', &VAR_10);
}
