
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socks_proxy_info {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int socket_descriptor_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,int *,int volatile*) ;
 scalar_t__ FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (struct socks_proxy_info*,int ,int volatile*) ;
 size_t FUNC_6 (char const*) ;

void
FUNC_7(struct socks_proxy_info *VAR_4,
                               socket_descriptor_t VAR_5,
                               const char *VAR_6,
                               const char *VAR_7,
                               volatile int *VAR_8)
{
    char VAR_9[128];
    size_t VAR_10;

    if (!FUNC_5(VAR_4, VAR_5, VAR_8))
    {
        goto error;
    }


    VAR_9[0] = '\x05';
    VAR_9[1] = '\x01';
    VAR_9[2] = '\x00';
    VAR_9[3] = '\x03';

    VAR_10 = FUNC_6(VAR_6);
    VAR_10 = (5 + VAR_10 + 2 > sizeof(VAR_9)) ? (sizeof(VAR_9) - 5 - 2) : VAR_10;

    VAR_9[4] = (char) VAR_10;
    FUNC_0(VAR_9 + 5, VAR_6, VAR_10);

    int VAR_11 = FUNC_2(VAR_7);
    if (VAR_11 ==0)
    {
        FUNC_1(VAR_0, "establish_socks_proxy_passthrough: Cannot convert %s to port number", VAR_7);
        goto error;
    }

    VAR_9[5 + VAR_10] = (char) (VAR_11 >> 8);
    VAR_9[5 + VAR_10 + 1] = (char) (VAR_11 & 0xff);

    {
        const ssize_t VAR_12 = FUNC_4(VAR_5, VAR_9, 5 + VAR_10 + 2, VAR_1);
        if ((int)VAR_12 != 5 + (int)VAR_10 + 2)
        {
            FUNC_1(VAR_0 | VAR_2, "establish_socks_proxy_passthru: TCP port write failed on send()");
            goto error;
        }
    }



    if (!FUNC_3(VAR_5, ((void*)0), VAR_8))
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
