
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int ,int ,char const*,int,unsigned char const*) ;

void FUNC_1(RedisModuleCtx *VAR_1, const char *VAR_2, uint8_t VAR_3, const unsigned char *VAR_4, uint32_t VAR_5) {
    FUNC_0(VAR_1,"notice","PONG (type %d) RECEIVED from %.*s: '%.*s'",
        VAR_3,VAR_0,VAR_2,(int)VAR_5, VAR_4);
}
