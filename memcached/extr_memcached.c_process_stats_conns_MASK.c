
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int last_cmd_time; int transport; } ;
typedef int ADD_STAT ;


 int FUNC_0 (int,char*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(ADD_STAT VAR_9, void *VAR_10) {
    int VAR_11;
    char VAR_12[VAR_1];
    char VAR_13[VAR_2];
    size_t VAR_14 = sizeof("unix:") + sizeof("65535");
    char VAR_15[VAR_0 + VAR_14];
    char VAR_16[VAR_0 + VAR_14];
    int VAR_17 = 0, VAR_18 = 0;

    FUNC_2(VAR_9);

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        if (VAR_6[VAR_11]) {





            if (FUNC_1(VAR_6[VAR_11]->transport)) {
                FUNC_0(VAR_11, "UDP", "%s", "UDP");
            }
            if (VAR_6[VAR_11]->state != VAR_3) {
                FUNC_3(VAR_6[VAR_11], VAR_15, VAR_16);

                FUNC_0(VAR_11, "addr", "%s", VAR_15);
                if (VAR_6[VAR_11]->state != VAR_4 &&
                    !(FUNC_1(VAR_6[VAR_11]->transport) && VAR_6[VAR_11]->state == VAR_5)) {
                    FUNC_0(VAR_11, "listen_addr", "%s", VAR_16);
                }
                FUNC_0(VAR_11, "state", "%s",
                        FUNC_4(VAR_6[VAR_11]->state));
                FUNC_0(VAR_11, "secs_since_last_cmd", "%d",
                        VAR_7 - VAR_6[VAR_11]->last_cmd_time);
            }
        }
    }
}
