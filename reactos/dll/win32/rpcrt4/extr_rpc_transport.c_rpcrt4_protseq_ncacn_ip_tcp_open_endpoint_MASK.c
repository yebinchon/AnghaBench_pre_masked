
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; int * ai_canonname; int ai_flags; } ;
typedef int socklen_t ;
typedef int service ;
typedef int sa ;
typedef int host ;
struct TYPE_7__ {TYPE_1__* protseq; int protseq_entry; } ;
struct TYPE_6__ {int sock; TYPE_4__ common; } ;
struct TYPE_5__ {int cs; int listeners; int MaxCalls; int Protseq; } ;
typedef TYPE_1__ RpcServerProtseq ;
typedef TYPE_2__ RpcConnection_tcp ;
typedef int RpcConnection ;
typedef scalar_t__ RPC_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int **,int ,int ,int *,char*,int *,int *,int *,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_17 ;
 int FUNC_7 (char*,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_8 () ;
 int FUNC_9 (int,struct sockaddr*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct addrinfo*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_14 (struct sockaddr*,int,char*,int,char*,int,int) ;
 scalar_t__ FUNC_15 (int,struct sockaddr*,int*) ;
 int FUNC_16 (int,int ,int*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int,int ) ;
 int VAR_19 ;
 int FUNC_19 (scalar_t__,int ,int ) ;

__attribute__((used)) static RPC_STATUS FUNC_20(RpcServerProtseq *VAR_20, const char *VAR_21)
{
    RPC_STATUS VAR_22 = VAR_11;
    int VAR_23;
    int VAR_24;
    struct addrinfo *VAR_25;
    struct addrinfo *VAR_26;
    struct addrinfo VAR_27;

    FUNC_5("(%p, %s)\n", VAR_20, VAR_21);

    VAR_27.ai_flags = VAR_2 ;
    VAR_27.ai_family = VAR_10;
    VAR_27.ai_socktype = VAR_16;
    VAR_27.ai_protocol = VAR_6;
    VAR_27.ai_addrlen = 0;
    VAR_27.ai_addr = ((void*)0);
    VAR_27.ai_canonname = ((void*)0);
    VAR_27.ai_next = ((void*)0);

    VAR_24 = FUNC_13(((void*)0), VAR_21 ? VAR_21 : "0", &VAR_27, &VAR_25);
    if (VAR_24)
    {
        FUNC_0("getaddrinfo for port %s failed: %s\n", VAR_21,
            FUNC_12(VAR_24));
        if ((VAR_24 == VAR_4) || (VAR_24 == VAR_3))
            return VAR_13;
        return VAR_11;
    }

    for (VAR_26 = VAR_25; VAR_26; VAR_26 = VAR_26->ai_next)
    {
        RpcConnection_tcp *VAR_28;
        RPC_STATUS VAR_29;
        struct sockaddr_storage VAR_30;
        socklen_t VAR_31;
        char VAR_32[VAR_7];
        u_long VAR_33;

        if (VAR_26->ai_family != VAR_0 && VAR_26->ai_family != VAR_1)
        {
            FUNC_5("skipping non-IP/IPv6 address family\n");
            continue;
        }

        if (FUNC_6(VAR_19))
        {
            char VAR_34[256];
            FUNC_14(VAR_26->ai_addr, VAR_26->ai_addrlen,
                        VAR_34, sizeof(VAR_34), VAR_32, sizeof(VAR_32),
                        VAR_8 | VAR_9);
            FUNC_5("trying %s:%s\n", VAR_34, VAR_32);
        }

        VAR_23 = FUNC_19(VAR_26->ai_family, VAR_26->ai_socktype, VAR_26->ai_protocol);
        if (VAR_23 == -1)
        {
            FUNC_7("socket() failed: %u\n", FUNC_8());
            VAR_22 = VAR_11;
            continue;
        }

        VAR_24 = FUNC_9(VAR_23, VAR_26->ai_addr, VAR_26->ai_addrlen);
        if (VAR_24 < 0)
        {
            FUNC_7("bind failed: %u\n", FUNC_8());
            FUNC_10(VAR_23);
            if (FUNC_8() == VAR_18)
              VAR_22 = VAR_12;
            else
              VAR_22 = VAR_11;
            continue;
        }

        VAR_31 = sizeof(VAR_30);
        if (FUNC_15(VAR_23, (struct sockaddr *)&VAR_30, &VAR_31))
        {
            FUNC_7("getsockname() failed: %u\n", FUNC_8());
            FUNC_10(VAR_23);
            VAR_22 = VAR_11;
            continue;
        }

        VAR_24 = FUNC_14((struct sockaddr *)&VAR_30, VAR_31,
                          ((void*)0), 0, VAR_32, sizeof(VAR_32),
                          VAR_9);
        if (VAR_24)
        {
            FUNC_7("getnameinfo failed: %s\n", FUNC_12(VAR_24));
            FUNC_10(VAR_23);
            VAR_22 = VAR_11;
            continue;
        }

        VAR_29 = FUNC_3((RpcConnection **)&VAR_28, VAR_17,
                                                VAR_20->Protseq, ((void*)0),
                                                VAR_32, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_29 != VAR_14)
        {
            FUNC_10(VAR_23);
            VAR_22 = VAR_29;
            continue;
        }

        VAR_28->sock = VAR_23;
        VAR_24 = FUNC_18(VAR_23, VAR_20->MaxCalls);
        if (VAR_24 < 0)
        {
            FUNC_7("listen failed: %u\n", FUNC_8());
            FUNC_4(&VAR_28->common);
            VAR_22 = VAR_15;
            continue;
        }




        VAR_33 = 1;
        VAR_24 = FUNC_16(VAR_23, VAR_5, &VAR_33);
        if (VAR_24 < 0)
        {
            FUNC_7("couldn't make socket non-blocking, error %d\n", VAR_24);
            FUNC_4(&VAR_28->common);
            VAR_22 = VAR_15;
            continue;
        }

        FUNC_1(&VAR_20->cs);
        FUNC_17(&VAR_20->listeners, &VAR_28->common.protseq_entry);
        VAR_28->common.protseq = VAR_20;
        FUNC_2(&VAR_20->cs);

        FUNC_11(VAR_25);



        FUNC_5("listening on %s\n", VAR_21);
        return VAR_14;
    }

    FUNC_11(VAR_25);
    FUNC_0("couldn't listen on port %s\n", VAR_21);
    return VAR_22;
}
