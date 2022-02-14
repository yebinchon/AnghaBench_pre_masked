
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
struct linger {int member_1; int member_0; } ;
struct addrinfo {scalar_t__ ai_family; TYPE_5__* ai_addr; int ai_addrlen; struct addrinfo* ai_next; int ai_socktype; int ai_flags; } ;
typedef int socklen_t ;
typedef int port_buf ;
typedef int my_sockaddr ;
typedef int ling ;
typedef int flags ;
typedef enum network_transport { ____Placeholder_network_transport } network_transport ;
struct TYPE_6__ {int ssl_enabled; struct TYPE_6__* next; } ;
typedef TYPE_1__ conn ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {int num_threads_per_udp; int backlog; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,TYPE_5__*,int ) ;
 int FUNC_3 (int) ;
 int VAR_23 ;
 TYPE_1__* FUNC_4 (int,int ,int,int,int,int ,int *) ;
 int VAR_24 ;
 int FUNC_5 (int,int ,int,int ,int,int *) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_25 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct addrinfo*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_12 (int,struct sockaddr*,int*) ;
 int FUNC_13 (int,int ) ;
 TYPE_1__* VAR_26 ;
 int VAR_27 ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct addrinfo*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int,int ,int ,void*,int) ;
 TYPE_2__ VAR_28 ;
 int FUNC_19 (char*,int,char*,int) ;
 int VAR_29 ;

__attribute__((used)) static int FUNC_20(const char *VAR_30,
                         int VAR_31,
                         enum network_transport VAR_32,
                         FILE *VAR_33, bool VAR_34) {
    int VAR_35;
    struct linger VAR_36 = {0, 0};
    struct addrinfo *VAR_37;
    struct addrinfo *VAR_38;
    struct addrinfo VAR_39 = { .ai_flags = VAR_3,
                              .ai_family = VAR_2 };
    char VAR_40[VAR_14];
    int VAR_41;
    int VAR_42 = 0;
    int VAR_43 =1;

    VAR_39.ai_socktype = FUNC_0(VAR_32) ? VAR_15 : VAR_16;

    if (VAR_31 == -1) {
        VAR_31 = 0;
    }
    FUNC_19(VAR_40, sizeof(VAR_40), "%d", VAR_31);
    VAR_41= FUNC_11(VAR_30, VAR_40, &VAR_39, &VAR_37);
    if (VAR_41 != 0) {
        if (VAR_41 != VAR_5)
          FUNC_8(VAR_29, "getaddrinfo(): %s\n", FUNC_10(VAR_41));
        else
          FUNC_17("getaddrinfo()");
        return 1;
    }

    for (VAR_38= VAR_37; VAR_38; VAR_38= VAR_38->ai_next) {
        conn *VAR_44;
        if ((VAR_35 = FUNC_15(VAR_38)) == -1) {



            if (VAR_25 == VAR_6) {

                FUNC_17("server_socket");
                FUNC_7(VAR_10);
            }
            continue;
        }
        FUNC_18(VAR_35, VAR_17, VAR_20, (void *)&VAR_43, sizeof(VAR_43));
        if (FUNC_0(VAR_32)) {
            FUNC_14(VAR_35);
        } else {
            VAR_41 = FUNC_18(VAR_35, VAR_17, VAR_18, (void *)&VAR_43, sizeof(VAR_43));
            if (VAR_41 != 0)
                FUNC_17("setsockopt");

            VAR_41 = FUNC_18(VAR_35, VAR_17, VAR_19, (void *)&VAR_36, sizeof(VAR_36));
            if (VAR_41 != 0)
                FUNC_17("setsockopt");

            VAR_41 = FUNC_18(VAR_35, VAR_12, VAR_21, (void *)&VAR_43, sizeof(VAR_43));
            if (VAR_41 != 0)
                FUNC_17("setsockopt");
        }

        if (FUNC_2(VAR_35, VAR_38->ai_addr, VAR_38->ai_addrlen) == -1) {
            if (VAR_25 != VAR_4) {
                FUNC_17("bind()");
                FUNC_3(VAR_35);
                FUNC_9(VAR_37);
                return 1;
            }
            FUNC_3(VAR_35);
            continue;
        } else {
            VAR_42++;
            if (!FUNC_0(VAR_32) && FUNC_13(VAR_35, VAR_28.backlog) == -1) {
                FUNC_17("listen()");
                FUNC_3(VAR_35);
                FUNC_9(VAR_37);
                return 1;
            }
            if (VAR_33 != ((void*)0) &&
                (VAR_38->ai_addr->sa_family == VAR_0 ||
                 VAR_38->ai_addr->sa_family == VAR_1)) {
                union {
                    struct sockaddr_in in;
                    struct sockaddr_in6 in6;
                } VAR_45;
                socklen_t VAR_46 = sizeof(VAR_45);
                if (FUNC_12(VAR_35, (struct sockaddr*)&VAR_45, &VAR_46)==0) {
                    if (VAR_38->ai_addr->sa_family == VAR_0) {
                        FUNC_8(*VAR_33, "%s INET: %u\n",
                                FUNC_0(VAR_32) ? "UDP" : "TCP",
                                FUNC_16(VAR_45.in.sin_port));
                    } else {
                        FUNC_8(*VAR_33, "%s INET6: %u\n",
                                FUNC_0(VAR_32) ? "UDP" : "TCP",
                                FUNC_16(VAR_45.in6.sin6_port));
                    }
                }
            }
        }

        if (FUNC_0(VAR_32)) {
            int VAR_47;

            for (VAR_47 = 0; VAR_47 < VAR_28.num_threads_per_udp; VAR_47++) {
                int VAR_48;
                if (VAR_47 == 0) {
                    VAR_48 = VAR_35;
                } else {
                    VAR_48 = FUNC_6(VAR_35);
                    if (VAR_48 < 0) {
                        FUNC_17("Failed to duplicate file descriptor");
                        FUNC_7(VAR_9);
                    }
                }
                FUNC_5(VAR_48, VAR_24,
                                  VAR_8 | VAR_7,
                                  VAR_22, VAR_32, ((void*)0));
            }
        } else {
            if (!(VAR_44 = FUNC_4(VAR_35, VAR_23,
                                             VAR_8 | VAR_7, 1,
                                             VAR_32, VAR_27, ((void*)0)))) {
                FUNC_8(VAR_29, "failed to create listening connection\n");
                FUNC_7(VAR_9);
            }



            FUNC_1(VAR_34 == 0);

            VAR_44->next = VAR_26;
            VAR_26 = VAR_44;
        }
    }

    FUNC_9(VAR_37);


    return VAR_42 == 0;
}
