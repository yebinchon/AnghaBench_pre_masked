
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time_t ;
struct Output {int dummy; } ;
typedef enum ApplicationProtocol { ____Placeholder_ApplicationProtocol } ApplicationProtocol ;
typedef int banner_buffer ;
typedef int FILE ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (unsigned char const*,unsigned int,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2,
        unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
        enum ApplicationProtocol VAR_6, unsigned VAR_7,
        const unsigned char *VAR_8, unsigned VAR_9)
{
    char VAR_10[4096];

    FUNC_0(VAR_7);
    FUNC_0(VAR_2);
    FUNC_0(VAR_0);
    FUNC_0(VAR_4);

    FUNC_1(VAR_1, "Host: %u.%u.%u.%u ()",
                    (unsigned char)(VAR_3>>24),
                    (unsigned char)(VAR_3>>16),
                    (unsigned char)(VAR_3>> 8),
                    (unsigned char)(VAR_3>> 0)
                    );
    FUNC_1(VAR_1, "\tPort: %u", VAR_5);

    FUNC_1(VAR_1, "\tService: %s", FUNC_2(VAR_6));

    FUNC_3(VAR_8, VAR_9, VAR_10, sizeof(VAR_10));

    FUNC_1(VAR_1, "\tBanner: %s\n", VAR_10);

}
