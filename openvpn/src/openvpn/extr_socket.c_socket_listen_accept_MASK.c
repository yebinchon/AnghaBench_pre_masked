
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int sa_family; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;
struct openvpn_sockaddr {TYPE_2__ addr; } ;
struct link_socket_actual {struct openvpn_sockaddr dest; } ;
struct gc_arena {int dummy; } ;
struct addrinfo {int dummy; } ;
typedef scalar_t__ socket_descriptor_t ;
typedef int fd_set ;


 int FUNC_0 (struct link_socket_actual) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct openvpn_sockaddr*,struct addrinfo*) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (struct gc_arena*) ;
 struct gc_arena FUNC_5 () ;
 int FUNC_6 (int volatile*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (int ,char const*,int *,int,int *,int ,struct addrinfo**) ;
 int FUNC_12 (struct link_socket_actual*,struct gc_arena*) ;
 int FUNC_13 (scalar_t__,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,struct link_socket_actual*,int) ;
 int FUNC_16 (scalar_t__,struct addrinfo const*,int,int) ;
 int FUNC_17 (struct link_socket_actual*) ;

__attribute__((used)) static socket_descriptor_t
FUNC_18(socket_descriptor_t VAR_5,
                     struct link_socket_actual *VAR_6,
                     const char *VAR_7,
                     const struct addrinfo *VAR_8,
                     bool VAR_9,
                     bool VAR_10,
                     volatile int *VAR_11)
{
    struct gc_arena VAR_12 = FUNC_5();

    struct openvpn_sockaddr VAR_13 = VAR_6->dest;
    socket_descriptor_t VAR_14 = VAR_4;

    FUNC_0(*VAR_6);
    FUNC_16(VAR_5, VAR_8, VAR_9, 1);

    while (1)
    {
        int VAR_15;
        fd_set VAR_16;
        struct timeval VAR_17;

        FUNC_1(&VAR_16);
        FUNC_10(VAR_5, &VAR_16);
        VAR_17.tv_sec = 0;
        VAR_17.tv_usec = 0;

        VAR_15 = FUNC_13(VAR_5 + 1, &VAR_16, ((void*)0), ((void*)0), &VAR_17);

        FUNC_6(VAR_11);
        if (*VAR_11)
        {
            FUNC_4(&VAR_12);
            return VAR_5;
        }

        if (VAR_15 < 0)
        {
            FUNC_8(VAR_0 | VAR_2, "TCP: select() failed");
        }

        if (VAR_15 <= 0)
        {
            FUNC_7(1);
            continue;
        }

        VAR_14 = FUNC_15(VAR_5, VAR_6, VAR_10);

        if (FUNC_14(VAR_14))
        {
            struct addrinfo *VAR_18 = ((void*)0);
            if (VAR_7)
            {
                FUNC_11(0, VAR_7, ((void*)0), 1, ((void*)0),
                                    VAR_13.addr.sa.sa_family, &VAR_18);
            }

            if (VAR_18 && !FUNC_2(&VAR_13, VAR_18))
            {
                FUNC_8(VAR_3,
                    "TCP NOTE: Rejected connection attempt from %s due to --remote setting",
                    FUNC_12(VAR_6, &VAR_12));
                if (FUNC_9(VAR_14))
                {
                    FUNC_8(VAR_1, "TCP: close socket failed (new_sd)");
                }
                FUNC_3(VAR_18);
            }
            else
            {
                if (VAR_18)
                {
                    FUNC_3(VAR_18);
                }
                break;
            }
        }
        FUNC_7(1);
    }

    if (!VAR_10 && FUNC_9(VAR_5))
    {
        FUNC_8(VAR_1, "TCP: close socket failed (sd)");
    }

    FUNC_17(VAR_6);

    FUNC_4(&VAR_12);
    return VAR_14;
}
