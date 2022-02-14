
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;
struct TYPE_3__ {int maxFd; int clientHead; int allFds; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;
 TYPE_1__* VAR_1 ;

int
FUNC_5(int VAR_2)
{
 fd_set VAR_3;
 struct timeval VAR_4;
 int VAR_5, VAR_6 = VAR_1->maxFd;

 if (VAR_2 > VAR_6)
  VAR_6 = VAR_2;
 while (1)
 {
  VAR_3 = VAR_1->allFds;
  FUNC_1(VAR_2, &VAR_3);
  VAR_4.tv_sec = VAR_0 / 1000;
  VAR_4.tv_usec = (VAR_0 % 1000) * 1000;
  VAR_5 = FUNC_4(VAR_6 + 1, &VAR_3, ((void*)0), ((void*)0), &VAR_4);
  FUNC_3(VAR_1, 0);

  if (!VAR_1->clientHead)
   FUNC_2(VAR_2);
  if (FUNC_0(VAR_2, &VAR_3))
   return 1;
 }
 return 0;
}
