
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Output {int dummy; } ;
typedef scalar_t__ ptrdiff_t ;
typedef int line ;
typedef int SOCKET ;
typedef int FILE ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct Output*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned char*,char*,int) ;
 size_t FUNC_4 (int ,unsigned char*,int) ;
 size_t FUNC_5 (int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_6(struct Output *VAR_0, FILE *VAR_1)
{
    ptrdiff_t VAR_2 = (ptrdiff_t)VAR_1;
    size_t VAR_3;
    unsigned char VAR_4[1024];

    FUNC_1(VAR_0);

    VAR_3 = FUNC_5((SOCKET)VAR_2, "PING\r\n", 6, 0);
    if (VAR_3 != 6) {
        FUNC_0(0, "redis: send(ping) failed\n");
        FUNC_2(1);
    }

    VAR_3 = FUNC_4((SOCKET)VAR_2, VAR_4, sizeof(VAR_4));
    if (VAR_3 != 7 && FUNC_3(VAR_4, "+PONG\r\n", 7) != 0) {
        FUNC_0(0, "redis: unexpected response from redis server: %s\n", VAR_4);
        FUNC_2(1);
    }
}
