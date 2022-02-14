
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxfd; int fds; } ;
typedef TYPE_1__ socket_set ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(socket_set *VAR_0)
{
 FUNC_0(&VAR_0->fds);
 VAR_0->maxfd = -1;
}
