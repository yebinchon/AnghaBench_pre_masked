
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*,char*,char*) ;
 int VAR_5 ;
 int * FUNC_1 (int *,char*,int *,int,int,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (char*,char*,int *,char*,int *,char*,char*,int ,char*,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,char*,int ,char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_6, usec_t VAR_7) {
    (void)VAR_7;

    static char *VAR_8 = ((void*)0);
    if(!VAR_8) {
        char VAR_9[VAR_0 + 1];
        FUNC_6(VAR_9, VAR_0, "%s%s", VAR_5, "/proc/uptime");

        VAR_8 = FUNC_0("plugin:proc:/proc/uptime", "filename to monitor", VAR_9);
    }

    static RRDSET *VAR_10 = ((void*)0);
    static RRDDIM *VAR_11 = ((void*)0);

    if(FUNC_7(!VAR_10)) {

        VAR_10 = FUNC_3(
                "system"
                , "uptime"
                , ((void*)0)
                , "uptime"
                , ((void*)0)
                , "System Uptime"
                , "seconds"
                , VAR_2
                , "/proc/uptime"
                , VAR_1
                , VAR_6
                , VAR_3
        );

        VAR_11 = FUNC_1(VAR_10, "uptime", ((void*)0), 1, 1000, VAR_4);
    }
    else
        FUNC_5(VAR_10);

    FUNC_2(VAR_10, VAR_11, FUNC_8(VAR_8));

    FUNC_4(VAR_10);

    return 0;
}
