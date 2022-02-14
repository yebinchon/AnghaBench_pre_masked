
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct chmHttpSlave {int fd; struct chmHttpServer* server; } ;
struct chmHttpServer {int socket; int * file; } ;
typedef int pthread_t ;
typedef int one ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int FUNC_6 (struct chmHttpSlave*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct sockaddr_in*,int ,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,int *,int ,void*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int,int ,int ,int*,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_17(const char *VAR_8)
{
    struct chmHttpServer VAR_9;
    struct chmHttpSlave *VAR_10;
    struct sockaddr_in VAR_11;
    int VAR_12;
    pthread_t VAR_13;
    int VAR_14 = 1;


    if ((VAR_9.file = FUNC_2(VAR_8)) == ((void*)0))
    {
        FUNC_5(VAR_7, "couldn't open file '%s'\n", VAR_8);
        FUNC_4(2);
    }


    VAR_9.socket = FUNC_16(VAR_0, VAR_1, 0);
    FUNC_11(&VAR_11, 0, sizeof(struct sockaddr_in));
    VAR_11.sin_family = VAR_0;
    VAR_11.sin_port = FUNC_7(VAR_6);
    VAR_11.sin_addr.s_addr = FUNC_8(VAR_5);

    if (FUNC_15 (VAR_9.socket, VAR_2, VAR_3, &VAR_14, sizeof(VAR_14)))
    {
        FUNC_12 ("setsockopt");
        FUNC_4(3);
    }

    if (FUNC_1(VAR_9.socket,
             (struct sockaddr *)&VAR_11,
             sizeof(struct sockaddr_in)) < 0)
    {
        FUNC_3(VAR_9.socket);
        VAR_9.socket = -1;
        FUNC_5(VAR_7, "couldn't bind to ip %s port %d\n", VAR_5, VAR_6);
        FUNC_4(3);
    }


    FUNC_9(VAR_9.socket, 75);
    VAR_12 = sizeof(struct sockaddr);
    while(1)
    {
        VAR_10 = (struct chmHttpSlave *)FUNC_10(sizeof(struct chmHttpSlave));
        VAR_10->server = &VAR_9;
        VAR_10->fd = FUNC_0(VAR_9.socket, (struct sockaddr *)&VAR_11, &VAR_12);
        if (VAR_10->fd == -1)
            break;

        FUNC_13(&VAR_13, ((void*)0), VAR_4, (void *)VAR_10);
        FUNC_14(VAR_13);
    }
    FUNC_6(VAR_10);
}
