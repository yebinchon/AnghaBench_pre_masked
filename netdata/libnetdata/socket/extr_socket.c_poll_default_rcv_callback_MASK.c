
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ POLLINFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char*,int,int ) ;

int FUNC_3(POLLINFO *VAR_5, short int *VAR_6) {
    *VAR_6 |= VAR_3;

    char VAR_7[1024 + 1];

    ssize_t VAR_8;
    do {
        VAR_8 = FUNC_2(VAR_5->fd, VAR_7, 1024, VAR_2);
        if (VAR_8 < 0) {

            if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
                FUNC_0("POLLFD: poll_default_rcv_callback(): recv() failed with %zd.", VAR_8);
                return -1;
            }
        } else if (VAR_8) {

            FUNC_1("POLLFD: internal error: poll_default_rcv_callback() is discarding %zd bytes received on socket %d", VAR_8, VAR_5->fd);
        }
    } while (VAR_8 != -1);

    return 0;
}
