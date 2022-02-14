
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,...) ;
 void* FUNC_4 (int ,char*,char*,void*) ;
 int VAR_8 ;
 void* FUNC_5 (void*,int *,int ) ;
 int FUNC_6 (char*,char*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int * VAR_29 ;

void FUNC_7(void)
{
    VAR_25 =
        (int)FUNC_2(VAR_1, "disconnect idle clients after seconds", VAR_25);
    VAR_23 =
        (int)FUNC_2(VAR_1, "timeout for first request", VAR_23);
    VAR_24 =
        FUNC_2(VAR_1, "accept a streaming request every seconds", VAR_24);

    VAR_8 =
        FUNC_1(VAR_1, "respect do not track policy", VAR_8);
    VAR_29 = FUNC_0(VAR_1, "x-frame-options response header", "");
    if(!*VAR_29)
        VAR_29 = ((void*)0);

    VAR_12 =
        FUNC_5(FUNC_0(VAR_1, "allow connections from", "localhost *"),
                              ((void*)0), VAR_2);
    VAR_11 =
        FUNC_4(VAR_1, "allow connections by dns", "heuristic", VAR_12);
    VAR_14 =
        FUNC_5(FUNC_0(VAR_1, "allow dashboard from", "localhost *"),
                              ((void*)0), VAR_2);
    VAR_13 =
        FUNC_4(VAR_1, "allow dashboard by dns", "heuristic", VAR_14);
    VAR_10 =
        FUNC_5(FUNC_0(VAR_1, "allow badges from", "*"), ((void*)0), VAR_2);
    VAR_9 =
        FUNC_4(VAR_1, "allow badges by dns", "heuristic", VAR_10);
    VAR_20 =
        FUNC_5(FUNC_0(VAR_0, "allow from", "*"), ((void*)0), VAR_2);
    VAR_19 = FUNC_4(VAR_0, "allow by dns", "heuristic",
                                                   VAR_20);
    VAR_22 = FUNC_5(FUNC_0(VAR_1, "allow streaming from", "*"),
                                                       ((void*)0), VAR_2);
    VAR_21 = FUNC_4(VAR_1, "allow streaming by dns", "heuristic",
                                                   VAR_22);

    VAR_18 = FUNC_5(FUNC_0(VAR_1, "allow netdata.conf from",
                                                       "localhost fd* 10.* 192.168.* 172.16.* 172.17.* 172.18.*"
                                                       " 172.19.* 172.20.* 172.21.* 172.22.* 172.23.* 172.24.*"
                                                       " 172.25.* 172.26.* 172.27.* 172.28.* 172.29.* 172.30.*"
                                                       " 172.31.*"), ((void*)0), VAR_2);
    VAR_17 =
        FUNC_4(VAR_1, "allow netdata.conf by dns", "no", VAR_16);
    VAR_16 =
        FUNC_5(FUNC_0(VAR_1, "allow management from", "localhost"),
                              ((void*)0), VAR_2);
    VAR_15 =
        FUNC_4(VAR_1, "allow management by dns","heuristic",VAR_16);
}
