
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tv ;
typedef int timeout_msec ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ redisContext ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int ,int ,int ,void const*,size_t) ;

int FUNC_2(redisContext *VAR_6, const struct timeval VAR_7) {
    const void *VAR_8 = &VAR_7;
    size_t VAR_9 = sizeof(VAR_7);





    if (FUNC_1(VAR_6->fd,VAR_3,VAR_4,VAR_8,VAR_9) == -1) {
        FUNC_0(VAR_6,VAR_1,"setsockopt(SO_RCVTIMEO)");
        return VAR_0;
    }
    if (FUNC_1(VAR_6->fd,VAR_3,VAR_5,VAR_8,VAR_9) == -1) {
        FUNC_0(VAR_6,VAR_1,"setsockopt(SO_SNDTIMEO)");
        return VAR_0;
    }
    return VAR_2;
}
