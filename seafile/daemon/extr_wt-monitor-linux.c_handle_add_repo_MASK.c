
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxfd; int read_fds; } ;
typedef TYPE_1__ SeafWTMonitorPriv ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static int FUNC_3 (SeafWTMonitorPriv *VAR_0,
                            const char *VAR_1,
                            const char *VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_2 (VAR_0, VAR_1, VAR_2);
    if (VAR_3 < 0) {
        return -1;
    }

    FUNC_0 (VAR_3, &VAR_0->read_fds);
    VAR_0->maxfd = FUNC_1 (VAR_3, VAR_0->maxfd);
    return 0;
}
