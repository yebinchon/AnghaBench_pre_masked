
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_8__ {char const* path; } ;
struct TYPE_9__ {int flags; int addrlen; int fd; void* saddr; struct timeval const* timeout; TYPE_1__ unix_sock; int connection_type; } ;
typedef TYPE_2__ redisContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct timeval const*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct timeval const*,struct timeval const*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,long*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,long) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;
 char const* FUNC_8 (char const*) ;
 int FUNC_9 (int ,char const*,int) ;

int FUNC_10(redisContext *VAR_9, const char *VAR_10, const struct timeval *VAR_11) {

    int VAR_12 = (VAR_9->flags & VAR_3);
    struct sockaddr_un *VAR_13;
    long VAR_14 = -1;

    if (FUNC_6(VAR_9,VAR_0) < 0)
        return VAR_6;
    if (FUNC_7(VAR_9,0) != VAR_7)
        return VAR_6;

    VAR_9->connection_type = VAR_5;
    if (VAR_9->unix_sock.path != VAR_10)
        VAR_9->unix_sock.path = FUNC_8(VAR_10);

    if (VAR_11) {
        if (VAR_9->timeout != VAR_11) {
            if (VAR_9->timeout == ((void*)0))
                VAR_9->timeout = FUNC_2(sizeof(struct timeval));

            FUNC_3(VAR_9->timeout, VAR_11, sizeof(struct timeval));
        }
    } else {
        FUNC_1(VAR_9->timeout);
        VAR_9->timeout = ((void*)0);
    }

    if (FUNC_4(VAR_9,&VAR_14) != VAR_7)
        return VAR_6;

    VAR_13 = (struct sockaddr_un*)(VAR_9->saddr = FUNC_2(sizeof(struct sockaddr_un)));
    VAR_9->addrlen = sizeof(struct sockaddr_un);
    VAR_13->sun_family = VAR_0;
    FUNC_9(VAR_13->sun_path, VAR_10, sizeof(VAR_13->sun_path) - 1);
    if (FUNC_0(VAR_9->fd, (struct sockaddr*)VAR_13, sizeof(*VAR_13)) == -1) {
        if (VAR_8 == VAR_1 && !VAR_12) {

        } else {
            if (FUNC_5(VAR_9,VAR_14) != VAR_7)
                return VAR_6;
        }
    }


    if (VAR_12 && FUNC_7(VAR_9,1) != VAR_7)
        return VAR_6;

    VAR_9->flags |= VAR_4;
    return VAR_7;






}
