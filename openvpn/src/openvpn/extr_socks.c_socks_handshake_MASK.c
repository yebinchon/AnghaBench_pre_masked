
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct socks_proxy_info {scalar_t__* authfile; } ;
typedef int ssize_t ;
typedef scalar_t__ socket_descriptor_t ;
typedef int method_sel ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int volatile*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (scalar_t__,char*,int,int ) ;
 int FUNC_5 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_6 (scalar_t__,char*,int,int ) ;
 int FUNC_7 (struct socks_proxy_info*,scalar_t__,int volatile*) ;

__attribute__((used)) static bool
FUNC_8(struct socks_proxy_info *VAR_3,
                socket_descriptor_t VAR_4,
                volatile int *VAR_5)
{
    char VAR_6[2];
    int VAR_7 = 0;
    const int VAR_8 = 5;
    ssize_t VAR_9;


    char VAR_10[3] = { 0x05, 0x01, 0x00 };
    if (VAR_3->authfile[0])
    {
        VAR_10[2] = 0x02;

    }
    VAR_9 = FUNC_6(VAR_4, VAR_10, sizeof(VAR_10), VAR_1);
    if (VAR_9 != sizeof(VAR_10))
    {
        FUNC_2(VAR_0 | VAR_2, "socks_handshake: TCP port write failed on send()");
        return 0;
    }

    while (VAR_7 < 2)
    {
        int VAR_11;
        ssize_t VAR_12;
        fd_set VAR_13;
        struct timeval VAR_14;
        char VAR_15;

        FUNC_0(&VAR_13);
        FUNC_3(VAR_4, &VAR_13);
        VAR_14.tv_sec = VAR_8;
        VAR_14.tv_usec = 0;

        VAR_11 = FUNC_5(VAR_4 + 1, &VAR_13, ((void*)0), ((void*)0), &VAR_14);

        FUNC_1(VAR_5);
        if (*VAR_5)
        {
            return 0;
        }


        if (VAR_11 == 0)
        {
            FUNC_2(VAR_0 | VAR_2, "socks_handshake: TCP port read timeout expired");
            return 0;
        }


        if (VAR_11 < 0)
        {
            FUNC_2(VAR_0 | VAR_2, "socks_handshake: TCP port read failed on select()");
            return 0;
        }


        VAR_12 = FUNC_4(VAR_4, &VAR_15, 1, VAR_1);


        if (VAR_12 != 1)
        {
            FUNC_2(VAR_0 | VAR_2, "socks_handshake: TCP port read failed on recv()");
            return 0;
        }


        VAR_6[VAR_7++] = VAR_15;
    }


    if (VAR_6[0] != '\x05')
    {
        FUNC_2(VAR_0, "socks_handshake: Socks proxy returned bad status");
        return 0;
    }


    if (VAR_6[1] != VAR_10[2])
    {
        FUNC_2(VAR_0, "socks_handshake: Socks proxy returned unexpected auth");
        return 0;
    }


    switch (VAR_6[1])
    {
        case 0:
            break;

        case 2:
            if (!VAR_3->authfile[0])
            {
                FUNC_2(VAR_0, "socks_handshake: server asked for username/login auth but we were "
                    "not provided any credentials");
                return 0;
            }

            if (!FUNC_7(VAR_3, VAR_4, VAR_5))
            {
                return 0;
            }

            break;

        default:
            FUNC_2(VAR_0, "socks_handshake: unknown SOCKS auth method");
            return 0;
    }

    return 1;
}
