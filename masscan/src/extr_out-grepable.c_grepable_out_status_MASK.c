
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time_t ;
struct Output {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,...) ;
 char* FUNC_2 (unsigned int) ;
 char* FUNC_3 (unsigned int) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (unsigned int) ;
 char* FUNC_6 (unsigned int) ;

__attribute__((used)) static void
FUNC_7(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2,
    int VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
    const char *VAR_9;
    FUNC_0(VAR_2);
    FUNC_0(VAR_0);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);

    if (VAR_5 == 6)
        VAR_9 = FUNC_5(VAR_6);
    else if (VAR_5 == 17)
        VAR_9 = FUNC_6(VAR_6);
    else
        VAR_9 = FUNC_3(VAR_5);

    FUNC_1(VAR_1, "Timestamp: %lu", VAR_2);

    FUNC_1(VAR_1, "\tHost: %u.%u.%u.%u ()",
                    (unsigned char)(VAR_4>>24),
                    (unsigned char)(VAR_4>>16),
                    (unsigned char)(VAR_4>> 8),
                    (unsigned char)(VAR_4>> 0)
                    );
    FUNC_1(VAR_1, "\tPorts: %u/%s/%s/%s/%s/%s/%s\n",
                VAR_6,
                FUNC_4(VAR_3),
                FUNC_2(VAR_5),
                "",
                VAR_9,
                "",
                ""
                );
}
