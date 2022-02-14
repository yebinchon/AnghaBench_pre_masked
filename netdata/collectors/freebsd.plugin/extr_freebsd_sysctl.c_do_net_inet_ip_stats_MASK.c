
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct ipstat {scalar_t__ ips_noproto; scalar_t__ ips_badaddr; scalar_t__ ips_noroute; scalar_t__ ips_badvers; scalar_t__ ips_badoptions; scalar_t__ ips_badlen; scalar_t__ ips_badhlen; scalar_t__ ips_odropped; scalar_t__ ips_toolong; scalar_t__ ips_toosmall; scalar_t__ ips_tooshort; scalar_t__ ips_badsum; scalar_t__ ips_reassembled; scalar_t__ ips_fragdropped; scalar_t__ ips_fragments; scalar_t__ ips_ofragments; scalar_t__ ips_cantfrag; scalar_t__ ips_fragmented; scalar_t__ ips_delivered; scalar_t__ ips_forward; scalar_t__ ips_localout; scalar_t__ ips_total; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,struct ipstat) ;
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
    static int VAR_5 = -1, VAR_6 = -1, VAR_7 = -1, VAR_8 = -1;

    if (FUNC_10(VAR_5 == -1)) {
        VAR_5 = FUNC_1("plugin:freebsd:net.inet.ip.stats", "ipv4 packets", 1);
        VAR_6 = FUNC_1("plugin:freebsd:net.inet.ip.stats", "ipv4 fragments sent", 1);
        VAR_7 = FUNC_1("plugin:freebsd:net.inet.ip.stats", "ipv4 fragments assembly", 1);
        VAR_8 = FUNC_1("plugin:freebsd:net.inet.ip.stats", "ipv4 errors", 1);
    }


    if (FUNC_3(VAR_5 || VAR_6 || VAR_7 || VAR_8)) {
        static int VAR_9[4] = {0, 0, 0, 0};
        struct ipstat VAR_10;

        if (FUNC_10(FUNC_0("net.inet.ip.stats", VAR_9, VAR_10))) {
            VAR_5 = 0;
            FUNC_2("DISABLED: ipv4.packets chart");
            VAR_6 = 0;
            FUNC_2("DISABLED: ipv4.fragsout chart");
            VAR_7 = 0;
            FUNC_2("DISABLED: ipv4.fragsin chart");
            VAR_8 = 0;
            FUNC_2("DISABLED: ipv4.errors chart");
            FUNC_2("DISABLED: net.inet.ip.stats module");
            return 1;
        } else {



            if (FUNC_3(VAR_5)) {
                static RRDSET *VAR_11 = ((void*)0);
                static RRDDIM *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0),
                              *VAR_15 = ((void*)0);

                if (FUNC_10(!VAR_11)) {
                    VAR_11 = FUNC_6(
                            "ipv4",
                            "packets",
                            ((void*)0),
                            "packets",
                            ((void*)0),
                            "IPv4 Packets",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.ip.stats",
                            3000,
                            VAR_3,
                            VAR_1
                    );

                    VAR_12 = FUNC_4(VAR_11, "InReceives", "received", 1, 1, VAR_2);
                    VAR_13 = FUNC_4(VAR_11, "OutRequests", "sent", -1, 1, VAR_2);
                    VAR_14 = FUNC_4(VAR_11, "ForwDatagrams", "forwarded", 1, 1, VAR_2);
                    VAR_15 = FUNC_4(VAR_11, "InDelivers", "delivered", 1, 1, VAR_2);
                } else
                    FUNC_9(VAR_11);

                FUNC_5(VAR_11, VAR_12, VAR_10.ips_total);
                FUNC_5(VAR_11, VAR_13, VAR_10.ips_localout);
                FUNC_5(VAR_11, VAR_14, VAR_10.ips_forward);
                FUNC_5(VAR_11, VAR_15, VAR_10.ips_delivered);
                FUNC_7(VAR_11);
            }



            if (FUNC_3(VAR_6)) {
                static RRDSET *VAR_16 = ((void*)0);
                static RRDDIM *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);

                if (FUNC_10(!VAR_16)) {
                    VAR_16 = FUNC_6(
                            "ipv4",
                            "fragsout",
                            ((void*)0),
                            "fragments",
                            ((void*)0),
                            "IPv4 Fragments Sent",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.ip.stats",
                            3010,
                            VAR_3,
                            VAR_1
                    );

                    FUNC_8(VAR_16, VAR_0);

                    VAR_17 = FUNC_4(VAR_16, "FragOKs", "ok", 1, 1, VAR_2);
                    VAR_18 = FUNC_4(VAR_16, "FragFails", "failed", -1, 1, VAR_2);
                    VAR_19 = FUNC_4(VAR_16, "FragCreates", "created", 1, 1, VAR_2);
                } else
                    FUNC_9(VAR_16);

                FUNC_5(VAR_16, VAR_17, VAR_10.ips_fragmented);
                FUNC_5(VAR_16, VAR_18, VAR_10.ips_cantfrag);
                FUNC_5(VAR_16, VAR_19, VAR_10.ips_ofragments);
                FUNC_7(VAR_16);
            }



            if (FUNC_3(VAR_7)) {
                static RRDSET *VAR_20 = ((void*)0);
                static RRDDIM *VAR_21 = ((void*)0), *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);

                if (FUNC_10(!VAR_20)) {
                    VAR_20 = FUNC_6(
                            "ipv4",
                            "fragsin",
                            ((void*)0),
                            "fragments",
                            ((void*)0),
                            "IPv4 Fragments Reassembly",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.ip.stats",
                            3011,
                            VAR_3,
                            VAR_1
                    );

                    FUNC_8(VAR_20, VAR_0);

                    VAR_21 = FUNC_4(VAR_20, "ReasmOKs", "ok", 1, 1, VAR_2);
                    VAR_22 = FUNC_4(VAR_20, "ReasmFails", "failed", -1, 1, VAR_2);
                    VAR_23 = FUNC_4(VAR_20, "ReasmReqds", "all", 1, 1, VAR_2);
                } else
                    FUNC_9(VAR_20);

                FUNC_5(VAR_20, VAR_21, VAR_10.ips_fragments);
                FUNC_5(VAR_20, VAR_22, VAR_10.ips_fragdropped);
                FUNC_5(VAR_20, VAR_23, VAR_10.ips_reassembled);
                FUNC_7(VAR_20);
            }



            if (FUNC_3(VAR_8)) {
                static RRDSET *VAR_24 = ((void*)0);
                static RRDDIM *VAR_25 = ((void*)0), *VAR_26 = ((void*)0),
                              *VAR_27 = ((void*)0), *VAR_28 = ((void*)0),
                              *VAR_29 = ((void*)0), *VAR_30 = ((void*)0);

                if (FUNC_10(!VAR_24)) {
                    VAR_24 = FUNC_6(
                            "ipv4",
                            "errors",
                            ((void*)0),
                            "errors",
                            ((void*)0),
                            "IPv4 Errors",
                            "packets/s",
                            "freebsd.plugin",
                            "net.inet.ip.stats",
                            3002,
                            VAR_3,
                            VAR_1
                    );

                    FUNC_8(VAR_24, VAR_0);

                    VAR_25 = FUNC_4(VAR_24, "InDiscards", ((void*)0), 1, 1, VAR_2);
                    VAR_26 = FUNC_4(VAR_24, "OutDiscards", ((void*)0), -1, 1, VAR_2);
                    VAR_27 = FUNC_4(VAR_24, "InHdrErrors", ((void*)0), 1, 1, VAR_2);
                    VAR_28 = FUNC_4(VAR_24, "OutNoRoutes", ((void*)0), -1, 1, VAR_2);
                    VAR_29 = FUNC_4(VAR_24, "InAddrErrors", ((void*)0), 1, 1, VAR_2);
                    VAR_30 = FUNC_4(VAR_24, "InUnknownProtos", ((void*)0), 1, 1, VAR_2);
                } else
                    FUNC_9(VAR_24);

                FUNC_5(VAR_24, VAR_25, VAR_10.ips_badsum + VAR_10.ips_tooshort +
                                                                VAR_10.ips_toosmall + VAR_10.ips_toolong);
                FUNC_5(VAR_24, VAR_26, VAR_10.ips_odropped);
                FUNC_5(VAR_24, VAR_27, VAR_10.ips_badhlen + VAR_10.ips_badlen +
                                                                VAR_10.ips_badoptions + VAR_10.ips_badvers);
                FUNC_5(VAR_24, VAR_28, VAR_10.ips_noroute);
                FUNC_5(VAR_24, VAR_29, VAR_10.ips_badaddr);
                FUNC_5(VAR_24, VAR_30, VAR_10.ips_noproto);
                FUNC_7(VAR_24);
            }
        }
    } else {
        FUNC_2("DISABLED: net.inet.ip.stats module");
        return 1;
    }

    return 0;
}
