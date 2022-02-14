
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int uint64_t ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,char*,int,int,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(int VAR_4, usec_t VAR_5) {
    (void)VAR_5;
    static int VAR_6[4] = {0, 0, 0, 0};
    uint64_t VAR_7[VAR_3];


    if (FUNC_7(FUNC_0("net.inet.tcp.states", VAR_6, VAR_7))) {
        FUNC_1("DISABLED: ipv4.tcpsock chart");
        FUNC_1("DISABLED: net.inet.tcp.states module");
        return 1;
    } else {



        static RRDSET *VAR_8 = ((void*)0);
        static RRDDIM *VAR_9 = ((void*)0);

        if (FUNC_7(!VAR_8)) {
            VAR_8 = FUNC_4(
                    "ipv4",
                    "tcpsock",
                    ((void*)0),
                    "tcp",
                    ((void*)0),
                    "IPv4 TCP Connections",
                    "active connections",
                    "freebsd.plugin",
                    "net.inet.tcp.states",
                    2500,
                    VAR_4,
                    VAR_0
            );

            VAR_9 = FUNC_2(VAR_8, "CurrEstab", "connections", 1, 1, VAR_1);
        } else
            FUNC_6(VAR_8);

        FUNC_3(VAR_8, VAR_9, VAR_7[VAR_2]);
        FUNC_5(VAR_8);
    }

    return 0;
}
