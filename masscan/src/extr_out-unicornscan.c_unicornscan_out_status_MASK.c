
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Output* time_t ;
struct Output {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (unsigned int) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (unsigned int) ;

__attribute__((used)) static void
FUNC_5(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2,
    int VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
    FUNC_0(VAR_7);
    FUNC_0(VAR_0);
    FUNC_0(VAR_2);

    if (VAR_5 == 6) {
      FUNC_1(VAR_1,"TCP %s\t%16s[%5d]\t\tfrom %u.%u.%u.%u  ttl %-3d\n",
              FUNC_3(VAR_3),
              FUNC_4(VAR_6),
              VAR_6,
              (VAR_4>>24)&0xFF,
              (VAR_4>>16)&0xFF,
              (VAR_4>> 8)&0xFF,
              (VAR_4>> 0)&0xFF,
              VAR_8);
    } else {

        FUNC_1(VAR_1, "Host: %u.%u.%u.%u ()",
                (unsigned char)(VAR_4>>24),
                (unsigned char)(VAR_4>>16),
                (unsigned char)(VAR_4>> 8),
                (unsigned char)(VAR_4>> 0)
                );
        FUNC_1(VAR_1, "\tPorts: %u/%s/%s/%s/%s/%s/%s\n",
                VAR_6,
                FUNC_3(VAR_3),
                FUNC_2(VAR_5),
                "",
                "",
                "",
                ""
                );
    }
}
