
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int socklen_t ;
typedef int sockerr ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*,int*) ;

int FUNC_1(connection *VAR_3) {
    int VAR_4 = 0;
    socklen_t VAR_5 = sizeof(VAR_4);

    if (FUNC_0(VAR_3->fd, VAR_0, VAR_1, &VAR_4, &VAR_5) == -1)
        VAR_4 = VAR_2;
    return VAR_4;
}
