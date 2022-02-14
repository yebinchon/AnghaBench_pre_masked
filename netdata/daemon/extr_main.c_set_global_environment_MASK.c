
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,char*,char*,...) ;
 char* FUNC_5 (int ) ;

void FUNC_6() {
    {
        char VAR_13[16];
        FUNC_4(VAR_13, 15, "%d", VAR_1);
        FUNC_3("NETDATA_UPDATE_EVERY", VAR_13, 1);
    }

    FUNC_3("NETDATA_VERSION" , VAR_12, 1);
    FUNC_3("NETDATA_HOSTNAME" , VAR_5, 1);
    FUNC_3("NETDATA_CONFIG_DIR" , FUNC_5(VAR_9), 1);
    FUNC_3("NETDATA_USER_CONFIG_DIR" , FUNC_5(VAR_9), 1);
    FUNC_3("NETDATA_STOCK_CONFIG_DIR" , FUNC_5(VAR_8), 1);
    FUNC_3("NETDATA_PLUGINS_DIR" , FUNC_5(VAR_7), 1);
    FUNC_3("NETDATA_WEB_DIR" , FUNC_5(VAR_11), 1);
    FUNC_3("NETDATA_CACHE_DIR" , FUNC_5(VAR_2), 1);
    FUNC_3("NETDATA_LIB_DIR" , FUNC_5(VAR_10), 1);
    FUNC_3("NETDATA_LOG_DIR" , FUNC_5(VAR_6), 1);
    FUNC_3("HOME" , FUNC_5(VAR_3), 1);
    FUNC_3("NETDATA_HOST_PREFIX" , VAR_4, 1);

    FUNC_1();


    char VAR_14[1024 + 1], *VAR_15 = FUNC_2("PATH");
    if(!VAR_15) VAR_15 = "/bin:/usr/bin";
    FUNC_4(VAR_14, 1024, "%s:%s", VAR_15, "/sbin:/usr/sbin:/usr/local/bin:/usr/local/sbin");
    FUNC_3("PATH", FUNC_0(VAR_0, "PATH environment variable", VAR_14), 1);


    VAR_15 = FUNC_2("PYTHONPATH");
    if(!VAR_15) VAR_15 = "";
    FUNC_3("PYTHONPATH", FUNC_0(VAR_0, "PYTHONPATH environment variable", VAR_15), 1);


    FUNC_3("PYTHONUNBUFFERED", "1", 1);


    FUNC_3("LC_ALL", "C", 1);
}
