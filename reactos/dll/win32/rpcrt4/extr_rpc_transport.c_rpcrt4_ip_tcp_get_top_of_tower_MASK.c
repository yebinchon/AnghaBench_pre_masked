
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count_lhs; unsigned char protid; int count_rhs; int port; } ;
typedef TYPE_2__ twr_tcp_floor_t ;
struct TYPE_6__ {int count_lhs; int count_rhs; int ipv4addr; int protid; } ;
typedef TYPE_3__ twr_ipv4_floor_t ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;
struct addrinfo {scalar_t__ ai_family; int * ai_addr; int * ai_next; int * ai_canonname; scalar_t__ ai_addrlen; int ai_protocol; int ai_socktype; int ai_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,unsigned char*,char const*,char const*) ;
 int FUNC_2 (struct addrinfo*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;

__attribute__((used)) static size_t FUNC_5(unsigned char *VAR_5,
                                             const char *VAR_6,
                                             unsigned char VAR_7,
                                             const char *VAR_8)
{
    twr_tcp_floor_t *VAR_9;
    twr_ipv4_floor_t *VAR_10;
    struct addrinfo *VAR_11;
    struct addrinfo VAR_12;
    int VAR_13;
    size_t VAR_14 = sizeof(*VAR_9) + sizeof(*VAR_10);

    FUNC_1("(%p, %s, %s)\n", VAR_5, VAR_6, VAR_8);

    if (!VAR_5)
        return VAR_14;

    VAR_9 = (twr_tcp_floor_t *)VAR_5;
    VAR_5 += sizeof(*VAR_9);

    VAR_10 = (twr_ipv4_floor_t *)VAR_5;

    VAR_9->count_lhs = sizeof(VAR_9->protid);
    VAR_9->protid = VAR_7;
    VAR_9->count_rhs = sizeof(VAR_9->port);

    VAR_10->count_lhs = sizeof(VAR_10->protid);
    VAR_10->protid = VAR_1;
    VAR_10->count_rhs = sizeof(VAR_10->ipv4addr);

    VAR_12.ai_flags = VAR_0;

    VAR_12.ai_family = VAR_3;
    VAR_12.ai_socktype = VAR_4;
    VAR_12.ai_protocol = VAR_2;
    VAR_12.ai_addrlen = 0;
    VAR_12.ai_addr = ((void*)0);
    VAR_12.ai_canonname = ((void*)0);
    VAR_12.ai_next = ((void*)0);

    VAR_13 = FUNC_4(VAR_6, VAR_8, &VAR_12, &VAR_11);
    if (VAR_13)
    {
        VAR_13 = FUNC_4("0.0.0.0", VAR_8, &VAR_12, &VAR_11);
        if (VAR_13)
        {
            FUNC_0("getaddrinfo failed: %s\n", FUNC_3(VAR_13));
            return 0;
        }
    }

    if (VAR_11->ai_family == VAR_3)
    {
        const struct sockaddr_in *VAR_15 = (const struct sockaddr_in *)VAR_11->ai_addr;
        VAR_9->port = VAR_15->sin_port;
        VAR_10->ipv4addr = VAR_15->sin_addr.s_addr;
    }
    else
    {
        FUNC_0("unexpected protocol family %d\n", VAR_11->ai_family);
        FUNC_2(VAR_11);
        return 0;
    }

    FUNC_2(VAR_11);

    return VAR_14;
}
