
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef scalar_t__ u_long ;
struct icmpstat {scalar_t__* icps_outhist; scalar_t__* icps_inhist; scalar_t__ icps_checksum; scalar_t__ icps_error; scalar_t__ icps_tooshort; scalar_t__ icps_badlen; scalar_t__ icps_badcode; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,struct icmpstat) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int *,char*,char*,int,int,int ) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int * FUNC_6 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(int VAR_5, usec_t VAR_6) {
    (void)VAR_6;
    static int VAR_7 = -1, VAR_8 = -1, VAR_9 = -1;

    if (FUNC_9(VAR_7 == -1)) {
        VAR_7 = FUNC_1("plugin:freebsd:net.inet.icmp.stats", "ipv4 ICMP packets", 1);
        VAR_8 = FUNC_1("plugin:freebsd:net.inet.icmp.stats", "ipv4 ICMP errors", 1);
        VAR_9 = FUNC_1("plugin:freebsd:net.inet.icmp.stats", "ipv4 ICMP messages", 1);
    }

    if (FUNC_3(VAR_7 || VAR_8 || VAR_9)) {
        static int VAR_10[4] = {0, 0, 0, 0};
        struct icmpstat VAR_11;
        struct icmp_total {
            u_long msgs_in;
            u_long msgs_out;
        } VAR_12 = {0, 0};

        if (FUNC_9(FUNC_0("net.inet.icmp.stats", VAR_10, VAR_11))) {
            VAR_7 = 0;
            FUNC_2("DISABLED: ipv4.icmp chart");
            VAR_8 = 0;
            FUNC_2("DISABLED: ipv4.icmp_errors chart");
            VAR_9 = 0;
            FUNC_2("DISABLED: ipv4.icmpmsg chart");
            FUNC_2("DISABLED: net.inet.icmp.stats module");
            return 1;
        } else {
            int VAR_13;

            for (VAR_13 = 0; VAR_13 <= VAR_2; VAR_13++) {
                VAR_12.msgs_in += VAR_11.icps_inhist[VAR_13];
                VAR_12.msgs_out += VAR_11.icps_outhist[VAR_13];
            }
            VAR_12.msgs_in += VAR_11.icps_badcode + VAR_11.icps_badlen + VAR_11.icps_checksum + VAR_11.icps_tooshort;



            if (FUNC_3(VAR_7)) {
                static RRDSET *VAR_14 = ((void*)0);
                static RRDDIM *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

                if (FUNC_9(!VAR_14)) {
                    VAR_14 = FUNC_6(
                            "ipv4"
                            , "icmp"
                            , ((void*)0)
                            , "icmp"
                            , ((void*)0)
                            , "IPv4 ICMP Packets"
                            , "packets/s"
                            , "freebsd.plugin"
                            , "net.inet.icmp.stats"
                            , 2602
                            , VAR_5
                            , VAR_3
                    );

                    VAR_15 = FUNC_4(VAR_14, "InMsgs", "received", 1, 1, VAR_4);
                    VAR_16 = FUNC_4(VAR_14, "OutMsgs", "sent", -1, 1, VAR_4);
                } else
                    FUNC_8(VAR_14);

                FUNC_5(VAR_14, VAR_15, VAR_12.msgs_in);
                FUNC_5(VAR_14, VAR_16, VAR_12.msgs_out);

                FUNC_7(VAR_14);
            }



            if (FUNC_3(VAR_8)) {
                static RRDSET *VAR_17 = ((void*)0);
                static RRDDIM *VAR_18 = ((void*)0), *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);

                if (FUNC_9(!VAR_17)) {
                    VAR_17 = FUNC_6(
                            "ipv4"
                            , "icmp_errors"
                            , ((void*)0)
                            , "icmp"
                            , ((void*)0)
                            , "IPv4 ICMP Errors"
                            , "packets/s"
                            , "freebsd.plugin"
                            , "net.inet.icmp.stats"
                            , 2603
                            , VAR_5
                            , VAR_3
                    );

                    VAR_18 = FUNC_4(VAR_17, "InErrors", ((void*)0), 1, 1, VAR_4);
                    VAR_19 = FUNC_4(VAR_17, "OutErrors", ((void*)0), -1, 1, VAR_4);
                    VAR_20 = FUNC_4(VAR_17, "InCsumErrors", ((void*)0), 1, 1, VAR_4);
                } else
                    FUNC_8(VAR_17);

                FUNC_5(VAR_17, VAR_18, VAR_11.icps_badcode + VAR_11.icps_badlen +
                                                      VAR_11.icps_checksum + VAR_11.icps_tooshort);
                FUNC_5(VAR_17, VAR_19, VAR_11.icps_error);
                FUNC_5(VAR_17, VAR_20, VAR_11.icps_checksum);

                FUNC_7(VAR_17);
            }



            if (FUNC_3(VAR_9)) {
                static RRDSET *VAR_21 = ((void*)0);
                static RRDDIM *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);

                if (FUNC_9(!VAR_21)) {
                    VAR_21 = FUNC_6(
                            "ipv4"
                            , "icmpmsg"
                            , ((void*)0)
                            , "icmp"
                            , ((void*)0)
                            , "IPv4 ICMP Messages"
                            , "packets/s"
                            , "freebsd.plugin"
                            , "net.inet.icmp.stats"
                            , 2604
                            , VAR_5
                            , VAR_3
                    );

                    VAR_22 = FUNC_4(VAR_21, "InEchoReps", ((void*)0), 1, 1, VAR_4);
                    VAR_23 = FUNC_4(VAR_21, "OutEchoReps", ((void*)0), -1, 1, VAR_4);
                    VAR_24 = FUNC_4(VAR_21, "InEchos", ((void*)0), 1, 1, VAR_4);
                    VAR_25 = FUNC_4(VAR_21, "OutEchos", ((void*)0), -1, 1, VAR_4);
                } else
                    FUNC_8(VAR_21);

                FUNC_5(VAR_21, VAR_22, VAR_11.icps_inhist[VAR_1]);
                FUNC_5(VAR_21, VAR_23, VAR_11.icps_outhist[VAR_1]);
                FUNC_5(VAR_21, VAR_24, VAR_11.icps_inhist[VAR_0]);
                FUNC_5(VAR_21, VAR_25, VAR_11.icps_outhist[VAR_0]);

                FUNC_7(VAR_21);
            }
        }
    } else {
        FUNC_2("DISABLED: net.inet.icmp.stats module");
        return 1;
    }

    return 0;
}
