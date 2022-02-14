
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {int addrlen; scalar_t__ saddr; int fd; } ;
typedef TYPE_1__ redisContext ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sockaddr const*,int ) ;
 int VAR_2 ;

int FUNC_1(redisContext *VAR_3, int *VAR_4) {
    int VAR_5 = FUNC_0(VAR_3->fd, (const struct sockaddr *)VAR_3->saddr, VAR_3->addrlen);
    if (VAR_5 == 0) {
        *VAR_4 = 1;
        return VAR_1;
    }
    switch (VAR_2) {
    case 129:
        *VAR_4 = 1;
        return VAR_1;
    case 131:
    case 130:
    case 128:
        *VAR_4 = 0;
        return VAR_1;
    default:
        return VAR_0;
    }
}
