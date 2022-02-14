
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int procfile ;
typedef int RRDSET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int ,char*,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int *,int,int,int ) ;
 int FUNC_8 (int *,char*,unsigned long long) ;
 int * FUNC_9 (int ,char*,int *,int ,int *,char*,char*,int ,int ,int ,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int ,char*,int ,char*) ;
 unsigned long long FUNC_13 (int ,int *,int) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(int VAR_14, usec_t VAR_15) {
    (void)VAR_15;
    static int VAR_16 = -1, VAR_17 = -1, VAR_18 = -1;
    static procfile *VAR_19 = ((void*)0);

    if(VAR_16 == -1) VAR_16 = FUNC_1(VAR_1, "IPVS bandwidth", 1);
    if(VAR_17 == -1) VAR_17 = FUNC_1(VAR_1, "IPVS connections", 1);
    if(VAR_18 == -1) VAR_18 = FUNC_1(VAR_1, "IPVS packets", 1);

    if(!VAR_19) {
        char VAR_20[VAR_2 + 1];
        FUNC_12(VAR_20, VAR_2, "%s%s", VAR_13, "/proc/net/ip_vs_stats");
        VAR_19 = FUNC_5(FUNC_0(VAR_1, "filename to monitor", VAR_20), " \t,:|", VAR_8);
    }
    if(!VAR_19) return 1;

    VAR_19 = FUNC_6(VAR_19);
    if(!VAR_19) return 0;


    if(FUNC_2(VAR_19) < 3) return 1;


    if(FUNC_4(VAR_19, 2) < 5) return 1;

    unsigned long long VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

    VAR_21 = FUNC_13(FUNC_3(VAR_19, 2, 0), ((void*)0), 16);
    VAR_22 = FUNC_13(FUNC_3(VAR_19, 2, 1), ((void*)0), 16);
    VAR_23 = FUNC_13(FUNC_3(VAR_19, 2, 2), ((void*)0), 16);
    VAR_24 = FUNC_13(FUNC_3(VAR_19, 2, 3), ((void*)0), 16);
    VAR_25 = FUNC_13(FUNC_3(VAR_19, 2, 4), ((void*)0), 16);




    if(VAR_17) {
        static RRDSET *VAR_26 = ((void*)0);

        if(FUNC_14(!VAR_26)) {
            VAR_26 = FUNC_9(
                    VAR_12
                    , "sockets"
                    , ((void*)0)
                    , VAR_12
                    , ((void*)0)
                    , "IPVS New Connections"
                    , "connections/s"
                    , VAR_7
                    , VAR_6
                    , VAR_5
                    , VAR_14
                    , VAR_10
            );

            FUNC_7(VAR_26, "connections", ((void*)0), 1, 1, VAR_11);
        }
        else FUNC_11(VAR_26);

        FUNC_8(VAR_26, "connections", VAR_21);
        FUNC_10(VAR_26);
    }



    if(VAR_18) {
        static RRDSET *VAR_27 = ((void*)0);
        if(FUNC_14(!VAR_27)) {
            VAR_27 = FUNC_9(
                    VAR_12
                    , "packets"
                    , ((void*)0)
                    , VAR_12
                    , ((void*)0)
                    , "IPVS Packets"
                    , "packets/s"
                    , VAR_7
                    , VAR_6
                    , VAR_4
                    , VAR_14
                    , VAR_10
            );

            FUNC_7(VAR_27, "received", ((void*)0), 1, 1, VAR_11);
            FUNC_7(VAR_27, "sent", ((void*)0), -1, 1, VAR_11);
        }
        else FUNC_11(VAR_27);

        FUNC_8(VAR_27, "received", VAR_22);
        FUNC_8(VAR_27, "sent", VAR_23);
        FUNC_10(VAR_27);
    }



    if(VAR_16) {
        static RRDSET *VAR_28 = ((void*)0);
        if(FUNC_14(!VAR_28)) {
            VAR_28 = FUNC_9(
                    VAR_12
                    , "net"
                    , ((void*)0)
                    , VAR_12
                    , ((void*)0)
                    , "IPVS Bandwidth"
                    , "kilobits/s"
                    , VAR_7
                    , VAR_6
                    , VAR_3
                    , VAR_14
                    , VAR_9
            );

            FUNC_7(VAR_28, "received", ((void*)0), 8, VAR_0, VAR_11);
            FUNC_7(VAR_28, "sent", ((void*)0), -8, VAR_0, VAR_11);
        }
        else FUNC_11(VAR_28);

        FUNC_8(VAR_28, "received", VAR_24);
        FUNC_8(VAR_28, "sent", VAR_25);
        FUNC_10(VAR_28);
    }

    return 0;
}
