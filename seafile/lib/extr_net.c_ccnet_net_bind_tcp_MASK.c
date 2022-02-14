
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int ai_addrlen; int sin_port; TYPE_1__ sin_addr; void* sin_family; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct sockaddr_in* ai_next; int ai_flags; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; int sin_port; TYPE_1__ sin_addr; void* sin_family; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int ai_flags; } ;
typedef int sock ;
typedef int optval ;
typedef int on ;
typedef int evutil_socket_t ;
typedef int buf ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const,int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sockaddr_in*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*,struct sockaddr_in*,struct sockaddr_in**) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_11 (int,int ,int ,...) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ) ;

evutil_socket_t
FUNC_15 (int VAR_8, int VAR_9)
{

    int VAR_10, VAR_11;
    struct addrinfo VAR_12, *VAR_13, *VAR_14;
    char VAR_15[10];

    FUNC_10 (&VAR_12, 0,sizeof (struct addrinfo));
    VAR_12.ai_flags = VAR_2;
    VAR_12.ai_family = VAR_1;
    VAR_12.ai_socktype = VAR_4;

    FUNC_12 (VAR_15, sizeof(VAR_15), "%d", VAR_8);

    if ( (VAR_11 = FUNC_7(((void*)0), VAR_15, &VAR_12, &VAR_13) ) != 0) {
        FUNC_1 ("getaddrinfo fails: %s\n", FUNC_6(VAR_11));
        return -1;
    }

    VAR_14 = VAR_13;

    do {
        int VAR_16 = 1;

        VAR_10 = FUNC_13(VAR_13->ai_family, VAR_13->ai_socktype, VAR_13->ai_protocol);
        if (VAR_10 < 0)
            continue;

  if (FUNC_11(VAR_10, VAR_5, VAR_6, &VAR_16, sizeof(VAR_16)) < 0) {
   FUNC_1 ("setsockopt of SO_REUSEADDR error\n");
            continue;
        }

        if (VAR_9)
            VAR_10 = FUNC_9 (VAR_10);
        if (VAR_10 < 0)
            continue;

        if (FUNC_0(VAR_10, VAR_13->ai_addr, VAR_13->ai_addrlen) == 0)
            break;

        FUNC_2(VAR_10);
    } while ( (VAR_13 = VAR_13->ai_next) != ((void*)0));

    FUNC_5 (VAR_14);

    if (VAR_13 == ((void*)0)) {
        FUNC_1 ("bind fails: %s\n", FUNC_14(VAR_7));
        return -1;
    }

    return VAR_10;
}
