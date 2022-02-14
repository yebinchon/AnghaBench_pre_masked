
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* path; } ;
struct TYPE_5__ {int port; char* host; char* ca_cert; char* cert; char* key; } ;
struct TYPE_4__ {char* host; int port; } ;
struct config {int type; TYPE_3__ unix_sock; TYPE_2__ ssl; TYPE_1__ tcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct config) ;
 int FUNC_7 (struct config) ;
 int FUNC_8 () ;
 int FUNC_9 (struct config) ;
 int FUNC_10 (struct config) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct config) ;
 int FUNC_14 () ;
 int FUNC_15 (struct config) ;

int FUNC_16(int VAR_8, char **VAR_9) {
    struct config VAR_10 = {
        .tcp = {
            .host = "127.0.0.1",
            .port = 6379
        },
        .unix_sock = {
            .path = "/tmp/redis.sock"
        }
    };
    int VAR_11 = 1;
    int VAR_12 = 1;


    FUNC_4(VAR_4, VAR_5);


    VAR_9++; VAR_8--;
    while (VAR_8) {
        if (VAR_8 >= 2 && !FUNC_5(VAR_9[0],"-h")) {
            VAR_9++; VAR_8--;
            VAR_10.tcp.host = VAR_9[0];
        } else if (VAR_8 >= 2 && !FUNC_5(VAR_9[0],"-p")) {
            VAR_9++; VAR_8--;
            VAR_10.tcp.port = FUNC_0(VAR_9[0]);
        } else if (VAR_8 >= 2 && !FUNC_5(VAR_9[0],"-s")) {
            VAR_9++; VAR_8--;
            VAR_10.unix_sock.path = VAR_9[0];
        } else if (VAR_8 >= 1 && !FUNC_5(VAR_9[0],"--skip-throughput")) {
            VAR_11 = 0;
        } else if (VAR_8 >= 1 && !FUNC_5(VAR_9[0],"--skip-inherit-fd")) {
            VAR_12 = 0;
        } else {
            FUNC_2(VAR_7, "Invalid argument: %s\n", VAR_9[0]);
            FUNC_1(1);
        }
        VAR_9++; VAR_8--;
    }

    FUNC_11();
    FUNC_14();
    FUNC_8();
    FUNC_12();

    FUNC_3("\nTesting against TCP connection (%s:%d):\n", VAR_10.tcp.host, VAR_10.tcp.port);
    VAR_10.type = VAR_2;
    FUNC_7(VAR_10);
    FUNC_9(VAR_10);
    FUNC_10(VAR_10);
    FUNC_13(VAR_10);
    FUNC_6(VAR_10);
    if (VAR_11) FUNC_15(VAR_10);

    FUNC_3("\nTesting against Unix socket connection (%s):\n", VAR_10.unix_sock.path);
    VAR_10.type = VAR_3;
    FUNC_7(VAR_10);
    FUNC_9(VAR_10);
    FUNC_10(VAR_10);
    if (VAR_11) FUNC_15(VAR_10);
    if (VAR_12) {
        FUNC_3("\nTesting against inherited fd (%s):\n", VAR_10.unix_sock.path);
        VAR_10.type = VAR_0;
        FUNC_7(VAR_10);
    }


    if (VAR_6) {
        FUNC_3("*** %d TESTS FAILED ***\n", VAR_6);
        return 1;
    }

    FUNC_3("ALL TESTS PASSED\n");
    return 0;
}
