
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct web_client {int server_host; void* auth_bearer_token; void* user_agent; int origin; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,size_t) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct web_client*) ;
 int FUNC_7 (struct web_client*,int) ;
 int FUNC_8 (struct web_client*) ;
 int FUNC_9 (struct web_client*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline char *FUNC_10(struct web_client *VAR_3, char *VAR_4, int VAR_5) {
    static uint32_t VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;




    if(FUNC_5(!VAR_6)) {
        VAR_6 = FUNC_0("Origin");
        VAR_7 = FUNC_0("Connection");



        VAR_8 = FUNC_0("DNT");
        VAR_9 = FUNC_0("User-Agent");
        VAR_10 = FUNC_0("X-Auth-Token");
        VAR_11 = FUNC_0("Host");
    }

    char *VAR_12 = VAR_4;


    while(*VAR_12 && *VAR_12 != ':') VAR_12++;
    if(!*VAR_12) return VAR_12;


    *VAR_12 = '\0';


    char *VAR_13 = VAR_12 + 1, *VAR_14;


    while(*VAR_13 == ' ') VAR_13++;
    VAR_14 = VAR_13;


    while(*VAR_14 && *VAR_14 != '\r') VAR_14++;
    if(!*VAR_14 || VAR_14[1] != '\n') {
        *VAR_12 = ':';
        return VAR_14;
    }


    *VAR_14 = '\0';

    uint32_t VAR_15 = FUNC_0(VAR_4);

    if(VAR_15 == VAR_6 && !FUNC_1(VAR_4, "Origin"))
        FUNC_4(VAR_3->origin, VAR_13, VAR_0);

    else if(VAR_15 == VAR_7 && !FUNC_1(VAR_4, "Connection")) {
        if(FUNC_2(VAR_13, "keep-alive"))
            FUNC_9(VAR_3);
    }
    else if(VAR_1 && VAR_15 == VAR_8 && !FUNC_1(VAR_4, "DNT")) {
        if(*VAR_13 == '0') FUNC_6(VAR_3);
        else if(*VAR_13 == '1') FUNC_8(VAR_3);
    }
    else if(VAR_5 && VAR_15 == VAR_9 && !FUNC_1(VAR_4, "User-Agent")) {
        VAR_3->user_agent = FUNC_3(VAR_13);
    } else if(VAR_15 == VAR_10&& !FUNC_1(VAR_4, "X-Auth-Token")) {
        VAR_3->auth_bearer_token = FUNC_3(VAR_13);
    }
    else if(VAR_15 == VAR_11 && !FUNC_1(VAR_4, "Host")){
        FUNC_4(VAR_3->server_host, VAR_13, ((size_t)(VAR_14 - VAR_13) < sizeof(VAR_3->server_host)-1 ? (size_t)(VAR_14 - VAR_13) : sizeof(VAR_3->server_host)-1));
    }
    *VAR_12 = ':';
    *VAR_14 = '\r';
    return VAR_14;
}
