
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int fds; scalar_t__ maxfd; } ;
typedef TYPE_1__ socket_set ;
typedef int int64 ;


 int FUNC_0 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_1(socket_set *VAR_0, int64 VAR_1)
{
 if (VAR_1 > 0)
 {
  struct timeval VAR_2;

  VAR_2.tv_sec = VAR_1 / 1000000;
  VAR_2.tv_usec = VAR_1 % 1000000;
  return FUNC_0(VAR_0->maxfd + 1, &VAR_0->fds, ((void*)0), ((void*)0), &VAR_2);
 }
 else
 {
  return FUNC_0(VAR_0->maxfd + 1, &VAR_0->fds, ((void*)0), ((void*)0), ((void*)0));
 }
}
