
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int usec_t ;
struct loadavg {double fscale; scalar_t__* ldavg; } ;
typedef int collected_number ;
struct TYPE_7__ {int update_every; } ;
typedef TYPE_1__ RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,struct loadavg) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_1__*,char*,int *,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_4 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(int VAR_5, usec_t VAR_6){
    static usec_t VAR_7 = 0;

    if (VAR_7 <= VAR_6) {
        static int VAR_8[2] = {0, 0};
        struct loadavg VAR_9;

        if (FUNC_7(FUNC_0("vm.loadavg", VAR_8, VAR_9))) {
            FUNC_1("DISABLED: system.load chart");
            FUNC_1("DISABLED: vm.loadavg module");
            return 1;
        } else {



            static RRDSET *VAR_10 = ((void*)0);
            static RRDDIM *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);

            if (FUNC_7(!VAR_10)) {
                VAR_10 = FUNC_4(
                        "system",
                        "load",
                        ((void*)0),
                        "load",
                        ((void*)0),
                        "System Load Average",
                        "load",
                        "freebsd.plugin",
                        "vm.loadavg",
                        VAR_1,
                        (VAR_5 < VAR_0) ?
                        VAR_0 : VAR_5, VAR_2
                );
                VAR_11 = FUNC_2(VAR_10, "load1", ((void*)0), 1, 1000, VAR_3);
                VAR_12 = FUNC_2(VAR_10, "load5", ((void*)0), 1, 1000, VAR_3);
                VAR_13 = FUNC_2(VAR_10, "load15", ((void*)0), 1, 1000, VAR_3);
            } else
                FUNC_6(VAR_10);

            FUNC_3(VAR_10, VAR_11, (collected_number) ((double) VAR_9.ldavg[0] / VAR_9.fscale * 1000));
            FUNC_3(VAR_10, VAR_12, (collected_number) ((double) VAR_9.ldavg[1] / VAR_9.fscale * 1000));
            FUNC_3(VAR_10, VAR_13, (collected_number) ((double) VAR_9.ldavg[2] / VAR_9.fscale * 1000));
            FUNC_5(VAR_10);

            VAR_7 = VAR_10->update_every * VAR_4;
        }
    }
    else
        VAR_7 -= VAR_6;

    return 0;
}
