
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int values ;
typedef scalar_t__ time_t ;
struct TYPE_2__ {int outstanding; } ;
struct Output {TYPE_1__ redis; } ;
typedef scalar_t__ ptrdiff_t ;
typedef int port_string ;
typedef int line ;
typedef int ip_string ;
typedef int SOCKET ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct Output*,int ) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (unsigned int) ;
 size_t FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (char*,int,char*,int,...) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2,
    int VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
    ptrdiff_t VAR_9 = (ptrdiff_t)VAR_1;
    char VAR_10[1024];
    int VAR_11;
    char VAR_12[16];
    char VAR_13[10];
    int VAR_14;
    int VAR_15;
    size_t VAR_16;
    char VAR_17[64];
    int VAR_18;

    VAR_14 = FUNC_5(VAR_12, sizeof(VAR_12), "%u.%u.%u.%u",
        (unsigned char)(VAR_4>>24),
        (unsigned char)(VAR_4>>16),
        (unsigned char)(VAR_4>> 8),
        (unsigned char)(VAR_4>> 0));
    VAR_15 = FUNC_5(VAR_13, sizeof(VAR_13), "%u/%s", VAR_6, FUNC_3(VAR_5));
    FUNC_5(VAR_10, sizeof(VAR_10),
            "*3\r\n"
            "$4\r\nSADD\r\n"
            "$%d\r\n%s\r\n"
            "$%d\r\n%s\r\n"
            ,
            4, "host",
            VAR_14, VAR_12
            );

    VAR_16 = FUNC_4((SOCKET)VAR_9, VAR_10, (int)FUNC_6(VAR_10), 0);
    if (VAR_16 != FUNC_6(VAR_10)) {
        FUNC_0(0, "redis: error sending data\n");
        FUNC_2(1);
    }
    VAR_0->redis.outstanding++;





    FUNC_5(VAR_10, sizeof(VAR_10),
            "*3\r\n"
            "$4\r\nSADD\r\n"
            "$%d\r\n%s\r\n"
            "$%d\r\n%s\r\n"
            ,
            VAR_14, VAR_12,
            VAR_15, VAR_13);

    VAR_16 = FUNC_4((SOCKET)VAR_9, VAR_10, (int)FUNC_6(VAR_10), 0);
    if (VAR_16 != FUNC_6(VAR_10)) {
        FUNC_0(0, "redis: error sending data\n");
        FUNC_2(1);
    }
    VAR_0->redis.outstanding++;






    VAR_18 = FUNC_5(VAR_17, sizeof(VAR_17), "%u:%u:%u:%u",
        (unsigned)VAR_2, VAR_3, VAR_7, VAR_8);
    VAR_11 = FUNC_5(VAR_10, sizeof(VAR_10),
            "*3\r\n"
            "$4\r\nSADD\r\n"
            "$%d\r\n%s:%s\r\n"
            "$%d\r\n%s\r\n"
            ,
            VAR_14 + 1 + VAR_15,
            VAR_12, VAR_13,
            VAR_18, VAR_17
            );

    VAR_16 = FUNC_4((SOCKET)VAR_9, VAR_10, (int)VAR_11, 0);
    if (VAR_16 != (size_t)VAR_11) {
        FUNC_0(0, "redis: error sending data\n");
        FUNC_2(1);
    }
    VAR_0->redis.outstanding++;

    FUNC_1(VAR_0, (SOCKET)VAR_9);

}
