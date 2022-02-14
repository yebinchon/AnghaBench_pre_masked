
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* uint16_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,char*,int) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char const*,void*) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,int,int ) ;

int FUNC_13(int VAR_3, const char *VAR_4, uint16_t VAR_5, int VAR_6) {
    int VAR_7;

    FUNC_2(VAR_1, "LISTENER: IPv4 creating new listening socket on ip '%s' port %d, socktype %d", VAR_4, VAR_5, VAR_3);

    VAR_7 = FUNC_12(VAR_0, VAR_3, 0);
    if(VAR_7 < 0) {
        FUNC_3("LISTENER: IPv4 socket() on ip '%s' port %d, socktype %d failed.", VAR_4, VAR_5, VAR_3);
        return -1;
    }

    FUNC_10(VAR_7, 1);
    FUNC_11(VAR_7, 1);
    FUNC_9(VAR_7);
    FUNC_8(VAR_7);

    struct sockaddr_in VAR_8;
    FUNC_7(&VAR_8, 0, sizeof(struct sockaddr_in));
    VAR_8.sin_family = VAR_0;
    VAR_8.sin_port = FUNC_4 (VAR_5);

    int VAR_9 = FUNC_5(VAR_0, VAR_4, (void *)&VAR_8.sin_addr.s_addr);
    if(VAR_9 != 1) {
        FUNC_3("LISTENER: Failed to convert IP '%s' to a valid IPv4 address.", VAR_4);
        FUNC_1(VAR_7);
        return -1;
    }

    if(FUNC_0 (VAR_7, (struct sockaddr *) &VAR_8, sizeof (VAR_8)) < 0) {
        FUNC_1(VAR_7);
        FUNC_3("LISTENER: IPv4 bind() on ip '%s' port %d, socktype %d failed.", VAR_4, VAR_5, VAR_3);
        return -1;
    }

    if(VAR_3 == VAR_2 && FUNC_6(VAR_7, VAR_6) < 0) {
        FUNC_1(VAR_7);
        FUNC_3("LISTENER: IPv4 listen() on ip '%s' port %d, socktype %d failed.", VAR_4, VAR_5, VAR_3);
        return -1;
    }

    FUNC_2(VAR_1, "LISTENER: Listening on IPv4 ip '%s' port %d, socktype %d", VAR_4, VAR_5, VAR_3);
    return VAR_7;
}
