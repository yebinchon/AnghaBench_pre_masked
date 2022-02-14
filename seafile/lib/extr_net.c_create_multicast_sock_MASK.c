
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int on ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int FUNC_2 (struct sockaddr*) ;
 struct sockaddr* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int ,int *,int ) ;
 int FUNC_5 (struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_6 (int,int ,int ,char*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;

evutil_socket_t
FUNC_9 (struct sockaddr *VAR_4, socklen_t VAR_5)
{
    int VAR_6;
    const int VAR_7 = 1;
    evutil_socket_t VAR_8;
    struct sockaddr *VAR_9;

    if ( (VAR_8 = FUNC_7 (VAR_4->sa_family, VAR_0, 0)) < 0) {
        FUNC_1 ("Create multicast listen socket fails: %s\n",
                     FUNC_8(VAR_3));
        return -1;
    }
    VAR_6 = FUNC_6(VAR_8, VAR_1, VAR_2, (char *)&VAR_7, sizeof(VAR_7));
    if (VAR_6 < 0)
        FUNC_1("Failed to setsockopt SO_REUSEADDR\n");
    VAR_9 = FUNC_3(VAR_5);
    FUNC_5(VAR_9, VAR_4, VAR_5);

    if (FUNC_0(VAR_8, VAR_9, VAR_5) < 0) {
        FUNC_1 ("Bind multicast listen socket fails: %s\n",
                       FUNC_8(VAR_3));
        FUNC_2 (VAR_9);
        return -1;
    }
    FUNC_2 (VAR_9);

    if (FUNC_4(VAR_8, VAR_4, VAR_5, ((void*)0), 0) < 0) {
        FUNC_1 ("mcast_join error: %s\n", FUNC_8(VAR_3));
        return -1;
    }

    return VAR_8;
}
