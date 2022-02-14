
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct Output {int dummy; } ;
typedef enum ApplicationProtocol { ____Placeholder_ApplicationProtocol } ApplicationProtocol ;
typedef int banner_buffer ;
typedef int FILE ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (unsigned int) ;
 char* FUNC_4 (unsigned char const*,unsigned int,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2,
                 unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
                 enum ApplicationProtocol VAR_6,
                 unsigned VAR_7,
                 const unsigned char *VAR_8, unsigned VAR_9)
{
    char VAR_10[65536];

    FUNC_0(VAR_7);


    FUNC_1(VAR_1, "{");
    FUNC_1(VAR_1, "\"ip\":\"%u.%u.%u.%u\",",
            (VAR_3>>24)&0xFF, (VAR_3>>16)&0xFF, (VAR_3>> 8)&0xFF, (VAR_3>> 0)&0xFF);
    FUNC_1(VAR_1, "\"timestamp\":\"%d\",\"port\":%u,\"proto\":\"%s\",\"rec_type\":\"banner\",\"data\":{\"service_name\":\"%s\",\"banner\":\"%s\"}",
            (int) VAR_2,
            VAR_5,
            FUNC_3(VAR_4),
            FUNC_2(VAR_6),
            FUNC_4(VAR_8, VAR_9, VAR_10, sizeof(VAR_10))
            );







    FUNC_1(VAR_1, "}\n");

    FUNC_0(VAR_0);
}
