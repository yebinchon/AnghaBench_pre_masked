
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct timeval {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_flowinfo; int sin6_family; } ;
struct sockaddr_in {int sin_family; } ;
struct addrinfo {int ai_family; int ai_socktype; int ai_protocol; scalar_t__ ai_addrlen; TYPE_1__* ai_addr; scalar_t__ ai_flags; struct addrinfo* ai_next; } ;
typedef int servBfr ;
typedef int hostBfr ;
typedef int hints ;
typedef int fd_set ;
struct TYPE_3__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (char*,char const*,char const*,...) ;
 int FUNC_7 (struct addrinfo*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,char*,int,char*,int,int) ;
 int FUNC_11 (char*,char*,char*) ;
 int FUNC_12 (struct addrinfo*,int ,int) ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_14 (int,int ,int ,char*,int) ;
 int FUNC_15 (int,int,int) ;

__attribute__((used)) static inline int FUNC_16(int VAR_17, int VAR_18, const char *VAR_19, uint32_t VAR_20, const char *VAR_21, struct timeval *VAR_22) {
    struct addrinfo VAR_23;
    struct addrinfo *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);

    FUNC_12(&VAR_23, 0, sizeof(VAR_23));
    VAR_23.ai_family = VAR_11;
    VAR_23.ai_socktype = VAR_18;
    VAR_23.ai_protocol = VAR_17;

    int VAR_26 = FUNC_9(VAR_19, VAR_21, &VAR_23, &VAR_24);
    if (VAR_26 != 0) {
        FUNC_6("Cannot resolve host '%s', port '%s': %s", VAR_19, VAR_21, FUNC_8(VAR_26));
        return -1;
    }

    int VAR_27 = -1;
    for (VAR_25 = VAR_24; VAR_25 != ((void*)0) && VAR_27 == -1; VAR_25 = VAR_25->ai_next) {

        if (VAR_25->ai_family == 128) {
            struct sockaddr_in6 *VAR_28 = (struct sockaddr_in6 *) VAR_25->ai_addr;
            if(VAR_28->sin6_scope_id == 0) {
                VAR_28->sin6_scope_id = VAR_20;
            }
        }

        char VAR_29[VAR_7 + 1];
        char VAR_30[VAR_8 + 1];

        FUNC_10(VAR_25->ai_addr,
                    VAR_25->ai_addrlen,
                    VAR_29,
                    sizeof(VAR_29),
                    VAR_30,
                    sizeof(VAR_30),
                    VAR_9 | VAR_10);

        FUNC_5(VAR_2, "Address info: host = '%s', service = '%s', ai_flags = 0x%02X, ai_family = %d (PF_INET = %d, PF_INET6 = %d), ai_socktype = %d (SOCK_STREAM = %d, SOCK_DGRAM = %d), ai_protocol = %d (IPPROTO_TCP = %d, IPPROTO_UDP = %d), ai_addrlen = %lu (sockaddr_in = %lu, sockaddr_in6 = %lu)",
              VAR_29,
              VAR_30,
              (unsigned int)VAR_25->ai_flags,
              VAR_25->ai_family,
              129,
              128,
              VAR_25->ai_socktype,
              VAR_13,
              VAR_12,
              VAR_25->ai_protocol,
              VAR_5,
              VAR_6,
              (unsigned long)VAR_25->ai_addrlen,
              (unsigned long)sizeof(struct sockaddr_in),
              (unsigned long)sizeof(struct sockaddr_in6));

        switch (VAR_25->ai_addr->sa_family) {
            case 129: {
                struct sockaddr_in *VAR_31 = (struct sockaddr_in *)VAR_25->ai_addr;
                (void)VAR_31;

                FUNC_5(VAR_2, "ai_addr = sin_family: %d (AF_INET = %d, AF_INET6 = %d), sin_addr: '%s', sin_port: '%s'",
                      VAR_31->sin_family,
                      VAR_0,
                      VAR_1,
                      VAR_29,
                      VAR_30);
                break;
            }

            case 128: {
                struct sockaddr_in6 *VAR_32 = (struct sockaddr_in6 *) VAR_25->ai_addr;
                (void)VAR_32;

                FUNC_5(VAR_2,"ai_addr = sin6_family: %d (AF_INET = %d, AF_INET6 = %d), sin6_addr: '%s', sin6_port: '%s', sin6_flowinfo: %u, sin6_scope_id: %u",
                      VAR_32->sin6_family,
                      VAR_0,
                      VAR_1,
                      VAR_29,
                      VAR_30,
                      VAR_32->sin6_flowinfo,
                      VAR_32->sin6_scope_id);
                break;
            }

            default: {
                FUNC_5(VAR_2, "Unknown protocol family %d.", VAR_25->ai_family);
                continue;
            }
        }

        VAR_27 = FUNC_15(VAR_25->ai_family, VAR_25->ai_socktype, VAR_25->ai_protocol);
        if(VAR_27 != -1) {
            if(VAR_22) {
                if(FUNC_14(VAR_27, VAR_14, VAR_15, (char *) VAR_22, sizeof(struct timeval)) < 0)
                    FUNC_6("Failed to set timeout on the socket to ip '%s' port '%s'", VAR_29, VAR_30);
            }

            VAR_16 = 0;
            if(FUNC_4(VAR_27, VAR_25->ai_addr, VAR_25->ai_addrlen) < 0) {
                if(VAR_16 == VAR_3 || VAR_16 == VAR_4) {
                    FUNC_11("Waiting for connection to ip %s port %s to be established", VAR_29, VAR_30);

                    fd_set VAR_33;
                    FUNC_2(&VAR_33);
                    FUNC_1(0, &VAR_33);
                    int VAR_34 = FUNC_13 (1, ((void*)0), &VAR_33, ((void*)0), VAR_22);

                    if(VAR_34 > 0 && FUNC_0(VAR_27, &VAR_33)) {
                        FUNC_11("connect() to ip %s port %s completed successfully", VAR_29, VAR_30);
                    }
                    else if(VAR_34 == -1) {
                        FUNC_6("Failed to connect to '%s', port '%s'. select() returned %d", VAR_29, VAR_30, VAR_34);
                        FUNC_3(VAR_27);
                        VAR_27 = -1;
                    }
                    else {
                        FUNC_6("Timed out while connecting to '%s', port '%s'. select() returned %d", VAR_29, VAR_30, VAR_34);
                        FUNC_3(VAR_27);
                        VAR_27 = -1;
                    }
                }
                else {
                    FUNC_6("Failed to connect to '%s', port '%s'", VAR_29, VAR_30);
                    FUNC_3(VAR_27);
                    VAR_27 = -1;
                }
            }

            if(VAR_27 != -1)
                FUNC_5(VAR_2, "Connected to '%s' on port '%s'.", VAR_29, VAR_30);
        }
    }

    FUNC_7(VAR_24);

    return VAR_27;
}
