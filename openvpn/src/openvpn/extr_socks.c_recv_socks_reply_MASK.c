
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_5__ {TYPE_3__ sin_port; TYPE_3__ sin_addr; int sin_family; } ;
struct TYPE_6__ {TYPE_1__ in4; } ;
struct openvpn_sockaddr {TYPE_2__ addr; } ;
struct gc_arena {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ socket_descriptor_t ;
typedef int fd_set ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 int FUNC_3 (int volatile*) ;
 int FUNC_4 (int ) ;
 TYPE_3__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (struct openvpn_sockaddr*,struct gc_arena*) ;
 int FUNC_10 (scalar_t__,char*,int,int ) ;
 int FUNC_11 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static bool
FUNC_12(socket_descriptor_t VAR_6,
                 struct openvpn_sockaddr *VAR_7,
                 volatile int *VAR_8)
{
    char VAR_9 = '\0';
    int VAR_10 = 0;
    int VAR_11 = 0;
    char VAR_12[22];
    const int VAR_13 = 5;

    if (VAR_7 != ((void*)0))
    {
        VAR_7->addr.in4.sin_family = VAR_0;
        VAR_7->addr.in4.sin_addr.s_addr = FUNC_4(VAR_2);
        VAR_7->addr.in4.sin_port = FUNC_5(0);
    }

    while (VAR_11 < 4 + VAR_10 + 2)
    {
        int VAR_14;
        ssize_t VAR_15;
        fd_set VAR_16;
        struct timeval VAR_17;
        char VAR_18;

        FUNC_0(&VAR_16);
        FUNC_8(VAR_6, &VAR_16);
        VAR_17.tv_sec = VAR_13;
        VAR_17.tv_usec = 0;

        VAR_14 = FUNC_11(VAR_6 + 1, &VAR_16, ((void*)0), ((void*)0), &VAR_17);

        FUNC_3(VAR_8);
        if (*VAR_8)
        {
            return 0;
        }


        if (VAR_14 == 0)
        {
            FUNC_7(VAR_1 | VAR_4, "recv_socks_reply: TCP port read timeout expired");
            return 0;
        }


        if (VAR_14 < 0)
        {
            FUNC_7(VAR_1 | VAR_4, "recv_socks_reply: TCP port read failed on select()");
            return 0;
        }


        VAR_15 = FUNC_10(VAR_6, &VAR_18, 1, VAR_3);


        if (VAR_15 != 1)
        {
            FUNC_7(VAR_1 | VAR_4, "recv_socks_reply: TCP port read failed on recv()");
            return 0;
        }

        if (VAR_11 == 3)
        {
            VAR_9 = VAR_18;
        }

        if (VAR_11 == 4)
        {
            switch (VAR_9)
            {
                case '\x01':
                    VAR_10 = 4;
                    break;

                case '\x03':
                    VAR_10 = (unsigned char) VAR_18;
                    break;

                case '\x04':
                    VAR_10 = 16;
                    break;

                default:
                    FUNC_7(VAR_1, "recv_socks_reply: Socks proxy returned bad address type");
                    return 0;
            }
        }


        if (VAR_11 < (int)sizeof(VAR_12))
        {
            VAR_12[VAR_11] = VAR_18;
        }
        ++VAR_11;
    }


    if (VAR_12[0] != '\x05' || VAR_12[1] != '\x00')
    {
        FUNC_7(VAR_1, "recv_socks_reply: Socks proxy returned bad reply");
        return 0;
    }


    if (VAR_9 == '\x01' && VAR_7 != ((void*)0))
    {
        FUNC_6(&VAR_7->addr.in4.sin_addr, VAR_12 + 4, sizeof(VAR_7->addr.in4.sin_addr));
        FUNC_6(&VAR_7->addr.in4.sin_port, VAR_12 + 8, sizeof(VAR_7->addr.in4.sin_port));
        struct gc_arena VAR_19 = FUNC_2();
        FUNC_7(VAR_5, "SOCKS proxy wants us to send UDP to %s",
            FUNC_9(VAR_7, &VAR_19));
        FUNC_1(&VAR_19);
    }


    return 1;
}
