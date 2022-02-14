
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct udpstat {scalar_t__ udps_filtermcast; scalar_t__ udps_nosum; scalar_t__ udps_badsum; scalar_t__ udps_fullsock; scalar_t__ udps_noport; scalar_t__ udps_badlen; scalar_t__ udps_hdrops; scalar_t__ udps_opackets; scalar_t__ udps_ipackets; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,struct udpstat) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int *,char*,char*,int,int,int ) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int * FUNC_6 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(int VAR_3, usec_t VAR_4) {
    (void)VAR_4;
    static int VAR_5 = -1, VAR_6 = -1;

    if (FUNC_10(VAR_5 == -1)) {
        VAR_5 = FUNC_1("plugin:freebsd:net.inet.udp.stats", "ipv4 UDP packets", 1);
        VAR_6 = FUNC_1("plugin:freebsd:net.inet.udp.stats", "ipv4 UDP errors", 1);
    }


    if (FUNC_3(VAR_5 || VAR_6)) {
        static int VAR_7[4] = {0, 0, 0, 0};
        struct udpstat VAR_8;

        if (FUNC_10(FUNC_0("net.inet.udp.stats", VAR_7, VAR_8))) {
            VAR_5 = 0;
            FUNC_2("DISABLED: ipv4.udppackets chart");
            VAR_6 = 0;
            FUNC_2("DISABLED: ipv4.udperrors chart");
            FUNC_2("DISABLED: net.inet.udp.stats module");
            return 1;
        } else {



            if (FUNC_3(VAR_5)) {
                static RRDSET *VAR_9 = ((void*)0);
                static RRDDIM *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

                if (FUNC_10(!VAR_9)) {
                    VAR_9 = FUNC_6(
                            "ipv4",
                            "udppackets",
                            ((void*)0),
                            "udp",
                            ((void*)0),
                            "IPv4 UDP Packets",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.udp.stats",
                            2601,
                            VAR_3,
                            VAR_1
                    );

                    VAR_10 = FUNC_4(VAR_9, "InDatagrams", "received", 1, 1, VAR_2);
                    VAR_11 = FUNC_4(VAR_9, "OutDatagrams", "sent", -1, 1, VAR_2);
                } else
                    FUNC_9(VAR_9);

                FUNC_5(VAR_9, VAR_10, VAR_8.udps_ipackets);
                FUNC_5(VAR_9, VAR_11, VAR_8.udps_opackets);
                FUNC_7(VAR_9);
            }



            if (FUNC_3(VAR_6)) {
                static RRDSET *VAR_12 = ((void*)0);
                static RRDDIM *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0),
                              *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);

                if (FUNC_10(!VAR_12)) {
                    VAR_12 = FUNC_6(
                            "ipv4",
                            "udperrors",
                            ((void*)0),
                            "udp",
                            ((void*)0),
                            "IPv4 UDP Errors",
                            "events/s",
                            "freebsd.plugin",
                            "net.inet.udp.stats",
                            2701,
                            VAR_3,
                            VAR_1
                    );

                    FUNC_8(VAR_12, VAR_0);

                    VAR_13 = FUNC_4(VAR_12, "InErrors", ((void*)0), 1, 1, VAR_2);
                    VAR_14 = FUNC_4(VAR_12, "NoPorts", ((void*)0), 1, 1, VAR_2);
                    VAR_15 = FUNC_4(VAR_12, "RcvbufErrors", ((void*)0), 1, 1, VAR_2);
                    VAR_16 = FUNC_4(VAR_12, "InCsumErrors", ((void*)0), 1, 1, VAR_2);
                    VAR_17 = FUNC_4(VAR_12, "IgnoredMulti", ((void*)0), 1, 1, VAR_2);
                } else
                    FUNC_9(VAR_12);

                FUNC_5(VAR_12, VAR_13, VAR_8.udps_hdrops + VAR_8.udps_badlen);
                FUNC_5(VAR_12, VAR_14, VAR_8.udps_noport);
                FUNC_5(VAR_12, VAR_15, VAR_8.udps_fullsock);
                FUNC_5(VAR_12, VAR_16, VAR_8.udps_badsum + VAR_8.udps_nosum);
                FUNC_5(VAR_12, VAR_17, VAR_8.udps_filtermcast);
                FUNC_7(VAR_12);
            }
        }
    } else {
        FUNC_2("DISABLED: net.inet.udp.stats module");
        return 1;
    }

    return 0;
}
