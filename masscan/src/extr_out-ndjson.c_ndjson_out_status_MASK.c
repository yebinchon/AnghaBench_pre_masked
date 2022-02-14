
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct Output {int dummy; } ;
typedef int reason_buffer ;
typedef int FILE ;


 int FUNC_0 (struct Output*) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (unsigned int) ;
 char* FUNC_3 (unsigned int,char*,int) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2, int VAR_3,
                 unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
    char VAR_9[128];
    FUNC_0(VAR_0);


    FUNC_1(VAR_1, "{");
    FUNC_1(VAR_1, "\"ip\":\"%u.%u.%u.%u\",",
            (VAR_4>>24)&0xFF, (VAR_4>>16)&0xFF, (VAR_4>> 8)&0xFF, (VAR_4>> 0)&0xFF);
    FUNC_1(VAR_1, "\"timestamp\":\"%d\",\"port\":%u,\"proto\":\"%s\",\"rec_type\":\"status\",\"data\":{\"status\":\"%s\","
                "\"reason\":\"%s\",\"ttl\":%u}",
                (int) VAR_2,
                VAR_6,
                FUNC_2(VAR_5),
                FUNC_4(VAR_3),
                FUNC_3(VAR_7, VAR_9, sizeof(VAR_9)),
                VAR_8
            );
    FUNC_1(VAR_1, "}\n");


}
