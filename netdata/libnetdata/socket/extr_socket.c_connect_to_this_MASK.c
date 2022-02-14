
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timeval {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,char*,scalar_t__,char*,struct timeval*) ;
 int FUNC_1 (char*,struct timeval*) ;
 int FUNC_2 (int ,char*,char*,char*,char*,int,int,int) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

int FUNC_9(const char *VAR_5, int VAR_6, struct timeval *VAR_7) {
    char VAR_8[FUNC_7(VAR_5) + 1];
    FUNC_6(VAR_8, VAR_5);

    char VAR_9[10 + 1];
    FUNC_5(VAR_9, 10, "%d", VAR_6);

    char *VAR_10 = VAR_8, *VAR_11 = VAR_9, *VAR_12 = "";
    int VAR_13 = VAR_1, VAR_14 = VAR_4;
    uint32_t VAR_15 = 0;

    if(FUNC_8(VAR_10, "tcp:", 4) == 0) {
        VAR_10 += 4;
        VAR_13 = VAR_1;
        VAR_14 = VAR_4;
    }
    else if(FUNC_8(VAR_10, "udp:", 4) == 0) {
        VAR_10 += 4;
        VAR_13 = VAR_2;
        VAR_14 = VAR_3;
    }
    else if(FUNC_8(VAR_10, "unix:", 5) == 0) {
        char *VAR_16 = VAR_10 + 5;
        return FUNC_1(VAR_16, VAR_7);
    }

    char *VAR_17 = VAR_10;
    if(*VAR_17 == '[') {
        VAR_17 = ++VAR_10;
        while(*VAR_17 && *VAR_17 != ']') VAR_17++;
        if(*VAR_17 == ']') {
            *VAR_17 = '\0';
            VAR_17++;
        }
    }
    else {
        while(*VAR_17 && *VAR_17 != ':' && *VAR_17 != '%') VAR_17++;
    }

    if(*VAR_17 == '%') {
        *VAR_17 = '\0';
        VAR_17++;
        VAR_12 = VAR_17;
        while(*VAR_17 && *VAR_17 != ':') VAR_17++;
    }

    if(*VAR_17 == ':') {
        *VAR_17 = '\0';
        VAR_17++;
        VAR_11 = VAR_17;
    }

    FUNC_2(VAR_0, "Attempting connection to host = '%s', service = '%s', interface = '%s', protocol = %d (tcp = %d, udp = %d)", VAR_10, VAR_11, VAR_12, VAR_13, VAR_1, VAR_2);

    if(!*VAR_10) {
        FUNC_3("Definition '%s' does not specify a host.", VAR_5);
        return -1;
    }

    if(*VAR_12) {
        VAR_15 = FUNC_4(VAR_12);
        if(!VAR_15)
            FUNC_3("Cannot find a network interface named '%s'. Continuing with limiting the network interface", VAR_12);
    }

    if(!*VAR_11)
        VAR_11 = VAR_9;


    return FUNC_0(VAR_13, VAR_14, VAR_10, VAR_15, VAR_11, VAR_7);
}
