
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BACKEND_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*,char*) ;

BACKEND_TYPE FUNC_1(const char *VAR_8) {
    if(!FUNC_0(VAR_8, "graphite") || !FUNC_0(VAR_8, "graphite:plaintext")) {
        return VAR_0;
    }
    else if(!FUNC_0(VAR_8, "opentsdb") || !FUNC_0(VAR_8, "opentsdb:telnet")) {
        return VAR_5;
    }
    else if(!FUNC_0(VAR_8, "opentsdb:http") || !FUNC_0(VAR_8, "opentsdb:https")) {
        return VAR_4;
    }
    else if (!FUNC_0(VAR_8, "json") || !FUNC_0(VAR_8, "json:plaintext")) {
        return VAR_1;
    }
    else if (!FUNC_0(VAR_8, "prometheus_remote_write")) {
        return VAR_6;
    }
    else if (!FUNC_0(VAR_8, "kinesis") || !FUNC_0(VAR_8, "kinesis:plaintext")) {
        return VAR_2;
    }
    else if (!FUNC_0(VAR_8, "mongodb") || !FUNC_0(VAR_8, "mongodb:plaintext")) {
        return VAR_3;
    }

    return VAR_7;
}
