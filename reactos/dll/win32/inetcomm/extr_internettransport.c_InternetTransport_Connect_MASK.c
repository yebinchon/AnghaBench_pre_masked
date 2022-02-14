
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int szPort ;
struct addrinfo {scalar_t__ ai_addrlen; int * ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int * ai_canonname; scalar_t__ ai_flags; } ;
typedef int service ;
typedef int host ;
typedef int boolean ;
struct TYPE_6__ {int szServerName; scalar_t__ dwPort; } ;
struct TYPE_7__ {scalar_t__ Status; int Socket; int hwnd; int fCommandLogging; TYPE_1__ ServerInfo; } ;
typedef TYPE_1__* LPINETSERVER ;
typedef int LONG_PTR ;
typedef TYPE_2__ InternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int *,int *,int *,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int *,scalar_t__) ;
 int FUNC_11 (struct addrinfo*) ;
 int FUNC_12 (int ,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_13 (int *,scalar_t__,char*,int,char*,int,int) ;
 int VAR_13 ;
 int FUNC_14 (char*,int,char*,unsigned short) ;
 int FUNC_15 (int ,int ,int ) ;
 int VAR_14 ;

HRESULT FUNC_16(InternetTransport *VAR_15,
    LPINETSERVER VAR_16, boolean VAR_17, boolean VAR_18)
{
    struct addrinfo *VAR_19;
    struct addrinfo *VAR_20;
    struct addrinfo VAR_21;
    int VAR_22;
    char VAR_23[10];

    if (VAR_15->Status != VAR_4)
        return VAR_5;

    VAR_15->ServerInfo = *VAR_16;
    VAR_15->fCommandLogging = VAR_18;

    VAR_15->hwnd = FUNC_0(VAR_14, VAR_14, 0, 0, 0, 0, 0, ((void*)0), ((void*)0), ((void*)0), 0);
    if (!VAR_15->hwnd)
        return FUNC_3(FUNC_2());
    FUNC_5(VAR_15->hwnd, VAR_0, (LONG_PTR)VAR_15);

    VAR_21.ai_flags = 0;
    VAR_21.ai_family = VAR_10;
    VAR_21.ai_socktype = VAR_11;
    VAR_21.ai_protocol = VAR_1;
    VAR_21.ai_addrlen = 0;
    VAR_21.ai_addr = ((void*)0);
    VAR_21.ai_canonname = ((void*)0);
    VAR_21.ai_next = ((void*)0);

    FUNC_14(VAR_23, sizeof(VAR_23), "%d", (unsigned short)VAR_16->dwPort);

    FUNC_4(VAR_15, VAR_7);

    VAR_22 = FUNC_12(VAR_16->szServerName, VAR_23, &VAR_21, &VAR_19);
    if (VAR_22)
    {
        FUNC_1("getaddrinfo failed: %d\n", VAR_22);
        return VAR_6;
    }

    for (VAR_20 = VAR_19; VAR_20; VAR_20 = VAR_19->ai_next)
    {
        int VAR_24;

        if (FUNC_7(VAR_13))
        {
            char VAR_25[256];
            char VAR_26[256];
            FUNC_13(VAR_20->ai_addr, VAR_20->ai_addrlen,
                VAR_25, sizeof(VAR_25), VAR_26, sizeof(VAR_26),
                VAR_8 | VAR_9);
            FUNC_6("trying %s:%s\n", VAR_25, VAR_26);
        }

        FUNC_4(VAR_15, VAR_3);

        VAR_24 = FUNC_15(VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol);
        if (VAR_24 == -1)
        {
            FUNC_8("socket() failed\n");
            continue;
        }
        VAR_15->Socket = VAR_24;



        if (0 > FUNC_10(VAR_15->Socket, VAR_20->ai_addr, VAR_20->ai_addrlen))
        {
            FUNC_8("connect() failed\n");
            FUNC_9(VAR_15->Socket);
            continue;
        }
        FUNC_4(VAR_15, VAR_2);



        FUNC_11(VAR_19);
        FUNC_6("connected\n");
        return VAR_12;
    }

    FUNC_11(VAR_19);

    return VAR_6;
}
