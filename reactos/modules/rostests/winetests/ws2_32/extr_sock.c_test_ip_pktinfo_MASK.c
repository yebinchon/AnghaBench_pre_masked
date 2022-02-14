
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int yes ;
struct TYPE_22__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_20__ {scalar_t__ s_addr; } ;
struct in_pktinfo {TYPE_1__ ipi_addr; } ;
typedef int socklen_t ;
typedef int s3addr ;
typedef int s2addr ;
typedef int s1addr ;
typedef int recvbuf ;
typedef int pktbuf ;
typedef int pWSARecvMsg ;
typedef int ov ;
typedef int msg ;
typedef int hdr ;
typedef int addresses ;
typedef int WSARecvMsg_GUID ;
struct TYPE_21__ {char* buf; int len; } ;
struct TYPE_23__ {scalar_t__ hEvent; int namelen; int dwBufferCount; int dwFlags; TYPE_2__ Control; TYPE_7__* lpBuffers; struct sockaddr* name; } ;
typedef TYPE_4__ WSAOVERLAPPED ;
typedef TYPE_4__ WSAMSG ;
struct TYPE_24__ {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef TYPE_6__ WSACMSGHDR ;
struct TYPE_25__ {char* buf; int len; } ;
typedef TYPE_7__ WSABUF ;
typedef void* ULONG ;
typedef int UINT32 ;
typedef scalar_t__ SOCKET ;
typedef unsigned int (* LPFN_WSARECVMSG ) (scalar_t__,TYPE_4__*,int*,TYPE_4__*,int *) ;
typedef int GUID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,TYPE_4__*,int*,int,int*) ;
 int VAR_17 ;
 int FUNC_6 (scalar_t__,int ,int *,int,unsigned int (*) (scalar_t__,TYPE_4__*,int*,TYPE_4__*,int *),int,int*,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;
 TYPE_6__* FUNC_8 (TYPE_4__*) ;
 TYPE_6__* FUNC_9 (TYPE_4__*,TYPE_6__*) ;
 int VAR_18 ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 unsigned int FUNC_11 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,struct sockaddr*,int*) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 void* FUNC_16 (char*) ;
 int FUNC_17 (TYPE_4__*,int,int) ;
 int FUNC_18 (int,char*,...) ;
 unsigned int FUNC_19 (scalar_t__,char*,int,int ,struct sockaddr*,int) ;
 unsigned int FUNC_20 (scalar_t__,scalar_t__,scalar_t__,char const*,int) ;
 int FUNC_21 (char*,...) ;
 scalar_t__ FUNC_22 (int ,int ,int ) ;
 scalar_t__ FUNC_23 (char*,char*,int) ;
 int FUNC_24 (char*) ;

__attribute__((used)) static void FUNC_25(void)
{
    ULONG VAR_19[2] = {FUNC_16("127.0.0.1"), FUNC_14(VAR_3)};
    char VAR_20[10], VAR_21[512], VAR_22[] = "HELLO";
    struct sockaddr_in VAR_23, VAR_24, VAR_25;
    GUID VAR_26 = VAR_17;
    LPFN_WSARECVMSG VAR_27 = ((void*)0);
    unsigned int VAR_28, VAR_29 = 1;
    BOOL VAR_30;
    DWORD VAR_31, VAR_32, VAR_33;
    socklen_t VAR_34;
    WSACMSGHDR *VAR_35;
    WSAOVERLAPPED VAR_36;
    WSABUF VAR_37[1];
    SOCKET VAR_38, VAR_39;
    WSAMSG VAR_40;
    int VAR_41, VAR_42;

    FUNC_17(&VAR_36, 0, sizeof(VAR_36));
    VAR_36.hEvent = FUNC_1(((void*)0), VAR_2, VAR_2, ((void*)0));
    if (VAR_36.hEvent == VAR_4)
    {
        FUNC_21("Could not create event object, some tests will be skipped. errno = %d\n", FUNC_2());
        return;
    }

    FUNC_17(&VAR_40, 0x00, sizeof(VAR_40));
    VAR_23.sin_family = VAR_0;
    VAR_23.sin_port = FUNC_15(0);

    VAR_37[0].buf = VAR_20;
    VAR_37[0].len = sizeof(VAR_20);
    VAR_40.name = (struct sockaddr*)&VAR_25;
    VAR_40.namelen = sizeof(VAR_25);
    VAR_40.lpBuffers = &VAR_37[0];
    VAR_40.dwBufferCount = 1;
    VAR_40.Control.buf = VAR_21;

    VAR_40.dwFlags = 0;

    for (VAR_41=0;VAR_41<sizeof(VAR_19)/sizeof(UINT32);VAR_41++)
    {
        VAR_23.sin_addr.s_addr = VAR_19[VAR_41];


        VAR_38=FUNC_22(VAR_0, VAR_12, 0);
        if (VAR_38 == VAR_5)
        {
            FUNC_21("socket() failed error, some tests skipped: %d\n", FUNC_4());
            goto cleanup;
        }


        FUNC_6(VAR_38, VAR_10, &VAR_26, sizeof(VAR_26),
                 VAR_27, sizeof(VAR_27), &VAR_31, ((void*)0), ((void*)0));
        if (!VAR_27)
        {
            FUNC_24("WSARecvMsg is unsupported, some tests will be skipped.\n");
            FUNC_12(VAR_38);
            goto cleanup;
        }


        VAR_28=FUNC_11(VAR_38, (struct sockaddr*)&VAR_23, sizeof(VAR_23));
        FUNC_18(VAR_28 != VAR_11, "bind() failed error: %d\n", FUNC_4());
        VAR_28=FUNC_20(VAR_38, VAR_6, VAR_7, (const char*)&VAR_29, sizeof(VAR_29));
        FUNC_18(VAR_28 == 0, "failed to set IPPROTO_IP flag IP_PKTINFO!\n");


        VAR_34 = sizeof(VAR_24);
        if (FUNC_13(VAR_38, (struct sockaddr *) &VAR_24, &VAR_34) != 0)
        {
            FUNC_21("Failed to call getsockname, some tests skipped: %d\n", FUNC_4());
            FUNC_12(VAR_38);
            goto cleanup;
        }
        VAR_24.sin_addr.s_addr = VAR_19[0];
        VAR_39=FUNC_22(VAR_0, VAR_12, 0);
        if (VAR_39 == VAR_5)
        {
            FUNC_21("socket() failed error, some tests skipped: %d\n", FUNC_4());
            FUNC_12(VAR_38);
            goto cleanup;
        }


        VAR_28=VAR_27(VAR_38, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        VAR_42=FUNC_4();
        FUNC_18(VAR_28 == VAR_11 && VAR_42 == VAR_15, "WSARecvMsg() failed error: %d (ret = %d)\n", VAR_42, VAR_28);





        FUNC_3(0xdeadbeef);
        VAR_28=FUNC_19(VAR_39, VAR_22, sizeof(VAR_22), 0, (struct sockaddr*)&VAR_24, sizeof(VAR_24));
        FUNC_18(VAR_28 == sizeof(VAR_22), "sendto() failed error: %d\n", FUNC_4());
        FUNC_18(FUNC_2() == VAR_1, "Expected 0, got %d\n", FUNC_2());
        VAR_40.Control.len = 1;
        VAR_28=VAR_27(VAR_38, &VAR_40, &VAR_32, ((void*)0), ((void*)0));
        VAR_42=FUNC_4();
        FUNC_18(VAR_28 == VAR_11 && VAR_42 == VAR_16 && (VAR_40.dwFlags & VAR_9),
           "WSARecvMsg() failed error: %d (ret: %d, flags: %d)\n", VAR_42, VAR_28, VAR_40.dwFlags);
        VAR_40.dwFlags = 0;


        VAR_40.Control.len = 1;
        VAR_28=VAR_27(VAR_38, &VAR_40, ((void*)0), &VAR_36, ((void*)0));
        VAR_42=FUNC_4();
        FUNC_18(VAR_28 != 0 && VAR_42 == VAR_18, "WSARecvMsg() failed error: %d\n", VAR_42);
        FUNC_3(0xdeadbeef);
        VAR_28=FUNC_19(VAR_39, VAR_22, sizeof(VAR_22), 0, (struct sockaddr*)&VAR_24, sizeof(VAR_24));
        FUNC_18(VAR_28 == sizeof(VAR_22), "sendto() failed error: %d\n", FUNC_4());
        FUNC_18(FUNC_2() == VAR_1, "Expected 0, got %d\n", FUNC_2());
        if (FUNC_10(VAR_36.hEvent, 100) != VAR_14)
        {
            FUNC_21("Server side did not receive packet, some tests skipped.\n");
            FUNC_12(VAR_39);
            FUNC_12(VAR_38);
            continue;
        }
        VAR_33 = 0;
        FUNC_5(VAR_38, &VAR_36, ((void*)0), VAR_2, &VAR_33);
        FUNC_18(VAR_33 == 0,
           "WSAGetOverlappedResult() returned unexpected flags %d!\n", VAR_33);
        FUNC_18(VAR_40.dwFlags == VAR_9,
           "WSARecvMsg() overlapped operation set unexpected flags %d.\n", VAR_40.dwFlags);
        VAR_40.dwFlags = 0;





        VAR_40.Control.len = sizeof(VAR_21);
        VAR_28=VAR_27(VAR_38, &VAR_40, ((void*)0), &VAR_36, ((void*)0));
        VAR_42=FUNC_4();
        FUNC_18(VAR_28 != 0 && VAR_42 == VAR_18, "WSARecvMsg() failed error: %d\n", VAR_42);
        FUNC_18(VAR_40.Control.len == sizeof(VAR_21),
           "WSARecvMsg() control length mismatch (%d != sizeof pktbuf).\n", VAR_40.Control.len);
        VAR_28=FUNC_19(VAR_39, VAR_22, sizeof(VAR_22), 0, (struct sockaddr*)&VAR_24, sizeof(VAR_24));
        FUNC_18(VAR_28 == sizeof(VAR_22), "sendto() failed error: %d\n", FUNC_4());
        if (FUNC_10(VAR_36.hEvent, 100) != VAR_14)
        {
            FUNC_21("Server side did not receive packet, some tests skipped.\n");
            FUNC_12(VAR_39);
            FUNC_12(VAR_38);
            continue;
        }
        VAR_32 = 0;
        FUNC_5(VAR_38, &VAR_36, &VAR_32, VAR_2, ((void*)0));
        FUNC_18(VAR_32 == sizeof(VAR_22),
           "WSARecvMsg() buffer length does not match transmitted data!\n");
        FUNC_18(FUNC_23(VAR_37[0].buf, VAR_22, sizeof(VAR_22)) == 0,
           "WSARecvMsg() buffer does not match transmitted data!\n");
        FUNC_18(VAR_40.Control.len == VAR_8,
           "WSARecvMsg() control length mismatch (%d).\n", VAR_40.Control.len);


        VAR_30 = VAR_2;
        for (VAR_35 = FUNC_8(&VAR_40); VAR_35 != ((void*)0); VAR_35 = FUNC_9(&VAR_40, VAR_35))
        {
            if (VAR_35->cmsg_level == VAR_6 && VAR_35->cmsg_type == VAR_7)
            {
                struct in_pktinfo *VAR_43 = (struct in_pktinfo *)FUNC_7(VAR_35);

                FUNC_18(VAR_43->ipi_addr.s_addr == VAR_24.sin_addr.s_addr, "destination ip mismatch!\n");
                VAR_30 = VAR_13;
            }
        }
        FUNC_18(VAR_30, "IP_PKTINFO header information was not returned!\n");

        FUNC_12(VAR_39);
        FUNC_12(VAR_38);
    }

cleanup:
    FUNC_0(VAR_36.hEvent);
}
