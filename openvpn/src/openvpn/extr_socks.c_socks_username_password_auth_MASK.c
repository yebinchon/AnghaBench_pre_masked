
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int to_send ;
struct user_pass {char* username; char* password; scalar_t__ defined; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct socks_proxy_info {int authfile; } ;
typedef int ssize_t ;
typedef scalar_t__ socket_descriptor_t ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int volatile*) ;
 int FUNC_2 (struct user_pass*,int ,int ,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (char*,int,char*,int,char*,int,char*) ;
 int FUNC_6 (scalar_t__,char*,int,int ) ;
 int FUNC_7 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_8 (scalar_t__,char*,int,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static bool
FUNC_10(struct socks_proxy_info *VAR_6,
                             socket_descriptor_t VAR_7,
                             volatile int *VAR_8)
{
    char VAR_9[516];
    char VAR_10[2];
    int VAR_11 = 0;
    const int VAR_12 = 5;
    struct user_pass VAR_13;
    ssize_t VAR_14;

    VAR_13.defined = 0;
    if (!FUNC_2(&VAR_13, VAR_6->authfile, VAR_5, VAR_1))
    {
        FUNC_3(VAR_4, "SOCKS failed to get username/password.");
        return 0;
    }

    if ( (FUNC_9(VAR_13.username) > 255) || (FUNC_9(VAR_13.password) > 255) )
    {
        FUNC_3(VAR_4,
            "SOCKS username and/or password exceeds 255 characters.  "
            "Authentication not possible.");
        return 0;
    }
    FUNC_5(VAR_9, sizeof(VAR_9), "\x01%c%s%c%s", (int) FUNC_9(VAR_13.username),
                     VAR_13.username, (int) FUNC_9(VAR_13.password), VAR_13.password);
    VAR_14 = FUNC_8(VAR_7, VAR_9, FUNC_9(VAR_9), VAR_2);

    if (VAR_14 != FUNC_9(VAR_9))
    {
        FUNC_3(VAR_0 | VAR_3, "socks_username_password_auth: TCP port write failed on send()");
        return 0;
    }

    while (VAR_11 < 2)
    {
        int VAR_15;
        ssize_t VAR_16;
        fd_set VAR_17;
        struct timeval VAR_18;
        char VAR_19;

        FUNC_0(&VAR_17);
        FUNC_4(VAR_7, &VAR_17);
        VAR_18.tv_sec = VAR_12;
        VAR_18.tv_usec = 0;

        VAR_15 = FUNC_7(VAR_7 + 1, &VAR_17, ((void*)0), ((void*)0), &VAR_18);

        FUNC_1(VAR_8);
        if (*VAR_8)
        {
            return 0;
        }


        if (VAR_15 == 0)
        {
            FUNC_3(VAR_0 | VAR_3, "socks_username_password_auth: TCP port read timeout expired");
            return 0;
        }


        if (VAR_15 < 0)
        {
            FUNC_3(VAR_0 | VAR_3, "socks_username_password_auth: TCP port read failed on select()");
            return 0;
        }


        VAR_16 = FUNC_6(VAR_7, &VAR_19, 1, VAR_2);


        if (VAR_16 != 1)
        {
            FUNC_3(VAR_0 | VAR_3, "socks_username_password_auth: TCP port read failed on recv()");
            return 0;
        }


        VAR_10[VAR_11++] = VAR_19;
    }


    if (VAR_10[0] != 5 && VAR_10[1] != 0)
    {
        FUNC_3(VAR_0, "socks_username_password_auth: server refused the authentication");
        return 0;
    }

    return 1;
}
