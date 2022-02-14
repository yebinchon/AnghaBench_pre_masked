
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int on ;
typedef scalar_t__ evutil_socket_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,char*,int) ;
 int FUNC_8 (struct sockaddr*) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 char const* FUNC_10 (int ) ;

evutil_socket_t
FUNC_11 (const char *VAR_5, int *VAR_6)
{
    evutil_socket_t VAR_7;
    struct sockaddr_in VAR_8;
    int VAR_9 = 1;

    VAR_7 = FUNC_9 (VAR_0, VAR_1, 0);
    if (VAR_7 < 0) {
        FUNC_1("create socket failed: %s\n", FUNC_10(VAR_4));
        FUNC_2(-1);
    }

    FUNC_6 (&VAR_8, 0, sizeof (struct sockaddr_in));
    VAR_8.sin_family = VAR_0;
    if (FUNC_5(VAR_5, &VAR_8.sin_addr) == 0) {
        FUNC_1 ("Bad ip address %s\n", VAR_5);
        return -1;
    }
    VAR_8.sin_port = FUNC_4 (*VAR_6);

    if (FUNC_7(VAR_7, VAR_2, VAR_3, (char *)&VAR_9, sizeof(VAR_9)) < 0)
    {
        FUNC_1 ("setsockopt of SO_REUSEADDR error: %s\n",
                       FUNC_10(VAR_4));
        return -1;
    }

    if ( FUNC_0(VAR_7, (struct sockaddr *)&VAR_8, sizeof(VAR_8)) < 0) {
        FUNC_1 ("Bind error: %s\n", FUNC_10 (VAR_4));
        return -1;
    }


    if (*VAR_6 == 0) {
        struct sockaddr_storage VAR_10;
        socklen_t VAR_11;

        VAR_11 = sizeof(VAR_10);
        if (FUNC_3(VAR_7, (struct sockaddr *)&VAR_10, &VAR_11) < 0) {
            FUNC_1 ("getsockname error: %s\n", FUNC_10(VAR_4));
            return -1;
        }
        *VAR_6 = FUNC_8 ((struct sockaddr *)&VAR_10);
    }

    return VAR_7;
}
