
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxfd; int fds; } ;
typedef TYPE_1__ socket_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(socket_set *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_0)
 {




  FUNC_2(VAR_1, "too many client connections for select()\n");
  FUNC_1(1);
 }
 FUNC_0(VAR_3, &VAR_2->fds);
 if (VAR_3 > VAR_2->maxfd)
  VAR_2->maxfd = VAR_3;
}
