
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct tcpstat {scalar_t__ tcps_ecn_ect1; scalar_t__ tcps_ecn_ect0; scalar_t__ tcps_ecn_ce; scalar_t__ tcps_listendrop; scalar_t__ tcps_sc_zonefail; scalar_t__ tcps_sc_sendcookie; scalar_t__ tcps_sc_recvcookie; scalar_t__ tcps_rcvoopack; scalar_t__ tcps_finwait2_drops; scalar_t__ tcps_persistdrop; scalar_t__ tcps_rcvmemdrop; scalar_t__ tcps_rcvafterclose; scalar_t__ tcps_rcvpackafterwin; scalar_t__ tcps_conndrops; scalar_t__ tcps_accepts; scalar_t__ tcps_connattempt; scalar_t__ tcps_drops; scalar_t__ tcps_sndrexmitpack; scalar_t__ tcps_rcvbadsum; scalar_t__ tcps_rcvshort; scalar_t__ tcps_rcvbadoff; scalar_t__ tcps_rcvreassfull; scalar_t__ tcps_sndtotal; scalar_t__ tcps_rcvtotal; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*,struct tcpstat) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int * FUNC_5 (int *,char*,char*,int,int,int ) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 int * FUNC_7 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(int VAR_6, usec_t VAR_7) {
    (void)VAR_7;
    static int VAR_8 = -1, VAR_9 = -1, VAR_10 = -1, VAR_11 = -1, VAR_12 = -1,
               VAR_13 = -1, VAR_14 = -1, VAR_15 = -1;

    if (FUNC_11(VAR_8 == -1)) {
        VAR_8 = FUNC_1("plugin:freebsd:net.inet.tcp.stats", "ipv4 TCP packets", 1);
        VAR_9 = FUNC_1("plugin:freebsd:net.inet.tcp.stats", "ipv4 TCP errors", 1);
        VAR_10 = FUNC_1("plugin:freebsd:net.inet.tcp.stats", "ipv4 TCP handshake issues", 1);
        VAR_11 = FUNC_2("plugin:freebsd:net.inet.tcp.stats", "TCP connection aborts",
                                                           VAR_0);
        VAR_12 = FUNC_2("plugin:freebsd:net.inet.tcp.stats", "TCP out-of-order queue",
                                                           VAR_0);
        VAR_13 = FUNC_2("plugin:freebsd:net.inet.tcp.stats", "TCP SYN cookies",
                                                           VAR_0);
        VAR_14 = FUNC_2("plugin:freebsd:net.inet.tcp.stats", "TCP listen issues",
                                                           VAR_0);
        VAR_15 = FUNC_2("plugin:freebsd:net.inet.tcp.stats", "ECN packets",
                                                           VAR_0);
    }


    if (FUNC_4(VAR_8 || VAR_9 || VAR_10 || VAR_11 || VAR_12 ||
               VAR_13 || VAR_14 || VAR_15)) {
        static int VAR_16[4] = {0, 0, 0, 0};
        struct tcpstat VAR_17;

        if (FUNC_11(FUNC_0("net.inet.tcp.stats", VAR_16, VAR_17))) {
            VAR_8 = 0;
            FUNC_3("DISABLED: ipv4.tcppackets chart");
            VAR_9 = 0;
            FUNC_3("DISABLED: ipv4.tcperrors  chart");
            VAR_10 = 0;
            FUNC_3("DISABLED: ipv4.tcphandshake  chart");
            VAR_11 = 0;
            FUNC_3("DISABLED: ipv4.tcpconnaborts  chart");
            VAR_12 = 0;
            FUNC_3("DISABLED: ipv4.tcpofo chart");
            VAR_13 = 0;
            FUNC_3("DISABLED: ipv4.tcpsyncookies chart");
            VAR_14 = 0;
            FUNC_3("DISABLED: ipv4.tcplistenissues chart");
            VAR_15 = 0;
            FUNC_3("DISABLED: ipv4.ecnpkts chart");
            FUNC_3("DISABLED: net.inet.tcp.stats module");
            return 1;
        } else {



            if (FUNC_4(VAR_8)) {
                static RRDSET *VAR_18 = ((void*)0);
                static RRDDIM *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);

                if (FUNC_11(!VAR_18)) {
                    VAR_18 = FUNC_7(
                            "ipv4",
                            "tcppackets",
                            ((void*)0),
                            "tcp",
                            ((void*)0),
                            "IPv4 TCP Packets",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.tcp.stats",
                            2600,
                            VAR_6,
                            VAR_3
                    );

                    VAR_19 = FUNC_5(VAR_18, "InSegs", "received", 1, 1, VAR_4);
                    VAR_20 = FUNC_5(VAR_18, "OutSegs", "sent", -1, 1, VAR_4);
                } else
                    FUNC_10(VAR_18);

                FUNC_6(VAR_18, VAR_19, VAR_17.tcps_rcvtotal);
                FUNC_6(VAR_18, VAR_20, VAR_17.tcps_sndtotal);
                FUNC_8(VAR_18);
            }



            if (FUNC_4(VAR_9)) {
                static RRDSET *VAR_21 = ((void*)0);
                static RRDDIM *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);

                if (FUNC_11(!VAR_21)) {
                    VAR_21 = FUNC_7(
                            "ipv4",
                            "tcperrors",
                            ((void*)0),
                            "tcp",
                            ((void*)0),
                            "IPv4 TCP Errors",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.tcp.stats",
                            2700,
                            VAR_6,
                            VAR_3
                    );

                    FUNC_9(VAR_21, VAR_2);

                    VAR_22 = FUNC_5(VAR_21, "InErrs", ((void*)0), 1, 1, VAR_4);
                    VAR_23 = FUNC_5(VAR_21, "InCsumErrors", ((void*)0), 1, 1, VAR_4);
                    VAR_24 = FUNC_5(VAR_21, "RetransSegs", ((void*)0), -1, 1, VAR_4);
                } else
                    FUNC_10(VAR_21);





                FUNC_6(VAR_21, VAR_22, VAR_17.tcps_rcvbadoff + VAR_17.tcps_rcvshort);

                FUNC_6(VAR_21, VAR_23, VAR_17.tcps_rcvbadsum);
                FUNC_6(VAR_21, VAR_24, VAR_17.tcps_sndrexmitpack);
                FUNC_8(VAR_21);
            }



            if (FUNC_4(VAR_10)) {
                static RRDSET *VAR_25 = ((void*)0);
                static RRDDIM *VAR_26 = ((void*)0), *VAR_27 = ((void*)0), *VAR_28 = ((void*)0),
                              *VAR_29 = ((void*)0);

                if (FUNC_11(!VAR_25)) {
                    VAR_25 = FUNC_7(
                            "ipv4",
                            "tcphandshake",
                            ((void*)0),
                            "tcp",
                            ((void*)0),
                            "IPv4 TCP Handshake Issues",
                            "events/s",
                            "freebsd.plugin",
                            "net.inet.tcp.stats",
                            2900,
                            VAR_6,
                            VAR_3
                    );

                    FUNC_9(VAR_25, VAR_2);

                    VAR_26 = FUNC_5(VAR_25, "EstabResets", ((void*)0), 1, 1, VAR_4);
                    VAR_27 = FUNC_5(VAR_25, "ActiveOpens", ((void*)0), 1, 1, VAR_4);
                    VAR_28 = FUNC_5(VAR_25, "PassiveOpens", ((void*)0), 1, 1, VAR_4);
                    VAR_29 = FUNC_5(VAR_25, "AttemptFails", ((void*)0), 1, 1, VAR_4);
                } else
                    FUNC_10(VAR_25);

                FUNC_6(VAR_25, VAR_26, VAR_17.tcps_drops);
                FUNC_6(VAR_25, VAR_27, VAR_17.tcps_connattempt);
                FUNC_6(VAR_25, VAR_28, VAR_17.tcps_accepts);
                FUNC_6(VAR_25, VAR_29, VAR_17.tcps_conndrops);
                FUNC_8(VAR_25);
            }



            if (VAR_11 == VAR_1 || (VAR_11 == VAR_0 &&
                                                               (VAR_17.tcps_rcvpackafterwin ||
                                                                VAR_17.tcps_rcvafterclose ||
                                                                VAR_17.tcps_rcvmemdrop ||
                                                                VAR_17.tcps_persistdrop ||
                                                                VAR_17.tcps_finwait2_drops ||
                                                                VAR_5 == VAR_1))) {
                VAR_11 = VAR_1;

                static RRDSET *VAR_30 = ((void*)0);
                static RRDDIM *VAR_31 = ((void*)0), *VAR_32 = ((void*)0), *VAR_33 = ((void*)0),
                              *VAR_34 = ((void*)0), *VAR_35 = ((void*)0);

                if (FUNC_11(!VAR_30)) {
                    VAR_30 = FUNC_7(
                            "ipv4",
                            "tcpconnaborts",
                            ((void*)0),
                            "tcp",
                            ((void*)0),
                            "TCP Connection Aborts",
                            "connections/s",
                            "freebsd.plugin",
                            "net.inet.tcp.stats",
                            3010,
                            VAR_6,
                            VAR_3
                    );

                    VAR_31 = FUNC_5(VAR_30, "TCPAbortOnData", "baddata", 1, 1, VAR_4);
                    VAR_32 = FUNC_5(VAR_30, "TCPAbortOnClose", "userclosed", 1, 1, VAR_4);
                    VAR_33 = FUNC_5(VAR_30, "TCPAbortOnMemory", "nomemory", 1, 1, VAR_4);
                    VAR_34 = FUNC_5(VAR_30, "TCPAbortOnTimeout", "timeout", 1, 1, VAR_4);
                    VAR_35 = FUNC_5(VAR_30, "TCPAbortOnLinger", "linger", 1, 1, VAR_4);
                }
                else FUNC_10(VAR_30);

                FUNC_6(VAR_30, VAR_31, VAR_17.tcps_rcvpackafterwin);
                FUNC_6(VAR_30, VAR_32, VAR_17.tcps_rcvafterclose);
                FUNC_6(VAR_30, VAR_33, VAR_17.tcps_rcvmemdrop);
                FUNC_6(VAR_30, VAR_34, VAR_17.tcps_persistdrop);
                FUNC_6(VAR_30, VAR_35, VAR_17.tcps_finwait2_drops);
                FUNC_8(VAR_30);
            }



            if (VAR_12 == VAR_1 || (VAR_12 == VAR_0 &&
                                                        (VAR_17.tcps_rcvoopack ||
                                                         VAR_5 == VAR_1))) {
                VAR_12 = VAR_1;

                static RRDSET *VAR_36 = ((void*)0);
                static RRDDIM *VAR_37 = ((void*)0);

                if (FUNC_11(!VAR_36)) {
                    VAR_36 = FUNC_7(
                            "ipv4",
                            "tcpofo",
                            ((void*)0),
                            "tcp",
                            ((void*)0),
                            "TCP Out-Of-Order Queue",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.tcp.stats",
                            3050,
                            VAR_6,
                            VAR_3
                    );

                    VAR_37 = FUNC_5(VAR_36, "TCPOFOQueue", "inqueue", 1, 1, VAR_4);
                }
                else FUNC_10(VAR_36);

                FUNC_6(VAR_36, VAR_37, VAR_17.tcps_rcvoopack);
                FUNC_8(VAR_36);
            }



            if (VAR_13 == VAR_1 || (VAR_13 == VAR_0 &&
                                                               (VAR_17.tcps_sc_sendcookie ||
                                                                VAR_17.tcps_sc_recvcookie ||
                                                                VAR_17.tcps_sc_zonefail ||
                                                                VAR_5 == VAR_1))) {
                VAR_13 = VAR_1;

                static RRDSET *VAR_38 = ((void*)0);
                static RRDDIM *VAR_39 = ((void*)0), *VAR_40 = ((void*)0), *VAR_41 = ((void*)0);

                if (FUNC_11(!VAR_38)) {
                    VAR_38 = FUNC_7(
                            "ipv4",
                            "tcpsyncookies",
                            ((void*)0),
                            "tcp",
                            ((void*)0),
                            "TCP SYN Cookies",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.tcp.stats",
                            3100,
                            VAR_6,
                            VAR_3
                    );

                    VAR_39 = FUNC_5(VAR_38, "SyncookiesRecv", "received", 1, 1, VAR_4);
                    VAR_40 = FUNC_5(VAR_38, "SyncookiesSent", "sent", -1, 1, VAR_4);
                    VAR_41 = FUNC_5(VAR_38, "SyncookiesFailed", "failed", -1, 1, VAR_4);
                }
                else FUNC_10(VAR_38);

                FUNC_6(VAR_38, VAR_39, VAR_17.tcps_sc_recvcookie);
                FUNC_6(VAR_38, VAR_40, VAR_17.tcps_sc_sendcookie);
                FUNC_6(VAR_38, VAR_41, VAR_17.tcps_sc_zonefail);
                FUNC_8(VAR_38);
            }



            if(VAR_14 == VAR_1 || (VAR_14 == VAR_0 &&
                                                          (VAR_17.tcps_listendrop ||
                                                           VAR_5 == VAR_1))) {
                VAR_14 = VAR_1;

                static RRDSET *VAR_42 = ((void*)0);
                static RRDDIM *VAR_43 = ((void*)0);

                if(FUNC_11(!VAR_42)) {

                    VAR_42 = FUNC_7(
                            "ipv4",
                            "tcplistenissues",
                            ((void*)0),
                            "tcp",
                            ((void*)0),
                            "TCP Listen Socket Issues",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.tcp.stats",
                            3015,
                            VAR_6,
                            VAR_3
                    );

                    VAR_43 = FUNC_5(VAR_42, "ListenOverflows", "overflows", 1, 1, VAR_4);
                }
                else
                    FUNC_10(VAR_42);

                FUNC_6(VAR_42, VAR_43, VAR_17.tcps_listendrop);

                FUNC_8(VAR_42);
            }



            if (VAR_15 == VAR_1 || (VAR_15 == VAR_0 &&
                                                 (VAR_17.tcps_ecn_ce ||
                                                  VAR_17.tcps_ecn_ect0 ||
                                                  VAR_17.tcps_ecn_ect1 ||
                                                  VAR_5 == VAR_1))) {
                VAR_15 = VAR_1;

                static RRDSET *VAR_44 = ((void*)0);
                static RRDDIM *VAR_45 = ((void*)0), *VAR_46 = ((void*)0), *VAR_47 = ((void*)0), *VAR_48 = ((void*)0);

                if (FUNC_11(!VAR_44)) {
                    VAR_44 = FUNC_7(
                            "ipv4",
                            "ecnpkts",
                            ((void*)0),
                            "ecn",
                            ((void*)0),
                            "IPv4 ECN Statistics",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.tcp.stats",
                            8700,
                            VAR_6,
                            VAR_3
                    );

                    FUNC_9(VAR_44, VAR_2);

                    VAR_45 = FUNC_5(VAR_44, "InCEPkts", "CEP", 1, 1, VAR_4);
                    VAR_46 = FUNC_5(VAR_44, "InNoECTPkts", "NoECTP", -1, 1, VAR_4);
                    VAR_47 = FUNC_5(VAR_44, "InECT0Pkts", "ECTP0", 1, 1, VAR_4);
                    VAR_48 = FUNC_5(VAR_44, "InECT1Pkts", "ECTP1", 1, 1, VAR_4);
                }
                else FUNC_10(VAR_44);

                FUNC_6(VAR_44, VAR_45, VAR_17.tcps_ecn_ce);
                FUNC_6(VAR_44, VAR_46, VAR_17.tcps_ecn_ce - (VAR_17.tcps_ecn_ect0 +
                                                                            VAR_17.tcps_ecn_ect1));
                FUNC_6(VAR_44, VAR_47, VAR_17.tcps_ecn_ect0);
                FUNC_6(VAR_44, VAR_48, VAR_17.tcps_ecn_ect1);
                FUNC_8(VAR_44);
            }

        }
    } else {
        FUNC_3("DISABLED: net.inet.tcp.stats module");
        return 1;
    }

    return 0;
}
