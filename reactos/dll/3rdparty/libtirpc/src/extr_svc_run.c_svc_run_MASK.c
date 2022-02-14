
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int rwlock_t ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;

void
FUNC_7()
{
 fd_set VAR_4, VAR_5;
 struct timeval VAR_6;
 extern rwlock_t VAR_7;


 for (;;) {
  FUNC_3(&VAR_7);
  VAR_4 = VAR_2;
  VAR_5 = VAR_2;
  FUNC_4(&VAR_7);
  VAR_6.tv_sec = 30;
  VAR_6.tv_usec = 0;
  switch (FUNC_5(VAR_3+1, &VAR_4, ((void*)0), ((void*)0), &VAR_6)) {
  case 128:
   FUNC_0(&VAR_4);
   if (FUNC_1() == VAR_1) {
    continue;
   }

   return;
  case 0:
   FUNC_2(&VAR_5, 30, VAR_0);
   continue;
  default:
   FUNC_6(&VAR_4);
  }
 }
}
