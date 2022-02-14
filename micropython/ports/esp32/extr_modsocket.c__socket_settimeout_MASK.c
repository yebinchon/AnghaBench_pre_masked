
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int timeout ;
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_3__ {int retries; int fd; } ;
typedef TYPE_1__ socket_obj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,void const*,int) ;

void FUNC_2(socket_obj_t *VAR_8, uint64_t VAR_9) {




    VAR_8->retries = (VAR_9 == VAR_6) ? VAR_7 : VAR_9 * 1000 / VAR_2;

    struct timeval VAR_10 = {
        .tv_sec = 0,
        .tv_usec = VAR_9 ? VAR_2 : 0
    };
    FUNC_1(VAR_8->fd, VAR_3, VAR_5, (const void *)&VAR_10, sizeof(VAR_10));
    FUNC_1(VAR_8->fd, VAR_3, VAR_4, (const void *)&VAR_10, sizeof(VAR_10));
    FUNC_0(VAR_8->fd, VAR_0, VAR_9 ? 0 : VAR_1);
}
