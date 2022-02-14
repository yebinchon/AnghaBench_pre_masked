
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 int FUNC_1 (int *,char*,char*,int ,int ,char const*,int,unsigned char const*) ;
 int FUNC_2 (int *,int *,int ,unsigned char*,int) ;

void FUNC_3(RedisModuleCtx *VAR_2, const char *VAR_3, uint8_t VAR_4, const unsigned char *VAR_5, uint32_t VAR_6) {
    FUNC_1(VAR_2,"notice","PING (type %d) RECEIVED from %.*s: '%.*s'",
        VAR_4,VAR_1,VAR_3,(int)VAR_6, VAR_5);
    FUNC_2(VAR_2,((void*)0),VAR_0,(unsigned char*)"Ohi!",4);
    FUNC_0(VAR_2, "INCR", "c", "pings_received");
}
