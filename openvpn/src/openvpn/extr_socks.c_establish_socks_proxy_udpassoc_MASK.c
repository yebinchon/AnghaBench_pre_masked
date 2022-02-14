
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socks_proxy_info {int dummy; } ;
struct openvpn_sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socket_descriptor_t ;


 int FUNC_0 (struct openvpn_sockaddr) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,struct openvpn_sockaddr*,int volatile*) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (struct socks_proxy_info*,int ,int volatile*) ;

void
FUNC_5(struct socks_proxy_info *VAR_4,
                               socket_descriptor_t VAR_5,
                               socket_descriptor_t VAR_6,
                               struct openvpn_sockaddr *VAR_7,
                               volatile int *VAR_8)
{
    if (!FUNC_4(VAR_4, VAR_5, VAR_8))
    {
        goto error;
    }

    {



        const ssize_t VAR_9 = FUNC_3(VAR_5,
                                  "\x05\x03\x00\x01\x00\x00\x00\x00\x00\x00",
                                  10, VAR_1);
        if (VAR_9 != 10)
        {
            FUNC_1(VAR_0 | VAR_2, "establish_socks_proxy_passthru: TCP port write failed on send()");
            goto error;
        }
    }


    FUNC_0(*VAR_7);
    if (!FUNC_2(VAR_5, VAR_7, VAR_8))
    {
        goto error;
    }

    return;

error:
    if (!*VAR_8)
    {
        *VAR_8 = VAR_3;
    }
    return;
}
