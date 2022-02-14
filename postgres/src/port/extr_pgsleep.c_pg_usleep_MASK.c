
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *,int *,int *,struct timeval*) ;

void
FUNC_2(long VAR_1)
{
 if (VAR_1 > 0)
 {

  struct timeval VAR_2;

  VAR_2.tv_sec = VAR_1 / 1000000L;
  VAR_2.tv_usec = VAR_1 % 1000000L;
  (void) FUNC_1(0, ((void*)0), ((void*)0), ((void*)0), &VAR_2);



 }
}
