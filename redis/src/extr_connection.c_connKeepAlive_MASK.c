
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

int FUNC_1(connection *VAR_1, int VAR_2) {
    if (VAR_1->fd == -1) return VAR_0;
    return FUNC_0(((void*)0), VAR_1->fd, VAR_2);
}
