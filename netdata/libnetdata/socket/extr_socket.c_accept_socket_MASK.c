
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int sadr ;
typedef int SIMPLE_PATTERN ;




 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct sockaddr*,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char*,size_t,int *,char*,int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct sockaddr*,int,char*,int,char*,int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (char*,char*,size_t) ;

int FUNC_13(int VAR_7, int VAR_8, char *VAR_9, size_t VAR_10, char *VAR_11, size_t VAR_12,
                  char *VAR_13, size_t VAR_14, SIMPLE_PATTERN *VAR_15, int VAR_16) {
    struct sockaddr_storage VAR_17;
    socklen_t VAR_18 = sizeof(VAR_17);

    int VAR_19 = FUNC_0(VAR_7, (struct sockaddr *)&VAR_17, &VAR_18, VAR_8);
    if (FUNC_6(VAR_19 >= 0)) {
        if (FUNC_5((struct sockaddr *)&VAR_17, VAR_18, VAR_9, (socklen_t)VAR_10,
                        VAR_11, (socklen_t)VAR_12, VAR_4 | VAR_5) != 0) {
            FUNC_4("LISTENER: cannot getnameinfo() on received client connection.");
            FUNC_12(VAR_9, "UNKNOWN", VAR_10 - 1);
            FUNC_12(VAR_11, "UNKNOWN", VAR_12 - 1);
        }
        if (!FUNC_8(VAR_9, "127.0.0.1") || !FUNC_8(VAR_9, "::1")) {
            FUNC_11(VAR_9, "localhost", VAR_10);
            VAR_9[VAR_10 - 1] = '\0';
        }






        VAR_9[VAR_10 - 1] = '\0';
        VAR_11[VAR_12 - 1] = '\0';

        switch (((struct sockaddr *)&VAR_17)->sa_family) {
            case 128:
                FUNC_3(VAR_1, "New UNIX domain web client from %s on socket %d.", VAR_9, VAR_7);

                FUNC_11(VAR_11, "UNIX", VAR_12);
                VAR_11[VAR_12 - 1] = '\0';
                break;

            case 130:
                FUNC_3(VAR_1, "New IPv4 web client from %s port %s on socket %d.", VAR_9, VAR_11, VAR_7);
                break;

            case 129:
                if (FUNC_10(VAR_9, "::ffff:", 7) == 0) {
                    FUNC_7(VAR_9, &VAR_9[7], FUNC_9(&VAR_9[7]) + 1);
                    FUNC_3(VAR_1, "New IPv4 web client from %s port %s on socket %d.", VAR_9, VAR_11, VAR_7);
                }
                else
                    FUNC_3(VAR_1, "New IPv6 web client from %s port %s on socket %d.", VAR_9, VAR_11, VAR_7);
                break;

            default:
                FUNC_3(VAR_1, "New UNKNOWN web client from %s port %s on socket %d.", VAR_9, VAR_11, VAR_7);
                break;
        }
        if (!FUNC_2(VAR_19, VAR_9, VAR_13, VAR_14, VAR_15, "connection", VAR_16)) {
            VAR_6 = 0;
            FUNC_4("Permission denied for client '%s', port '%s'", VAR_9, VAR_11);
            FUNC_1(VAR_19);
            VAR_19 = -1;
            VAR_6 = VAR_3;
        }
    }





    return VAR_19;
}
