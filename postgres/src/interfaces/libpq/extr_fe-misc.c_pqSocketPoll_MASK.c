
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct pollfd {int fd; int events; scalar_t__ revents; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(int VAR_3, int VAR_4, int VAR_5, time_t VAR_6)
{
 fd_set VAR_7;
 fd_set VAR_8;
 fd_set VAR_9;
 struct timeval VAR_10;
 struct timeval *VAR_11;

 if (!VAR_4 && !VAR_5)
  return 0;

 FUNC_1(&VAR_7);
 FUNC_1(&VAR_8);
 FUNC_1(&VAR_9);
 if (VAR_4)
  FUNC_0(VAR_3, &VAR_7);

 if (VAR_5)
  FUNC_0(VAR_3, &VAR_8);
 FUNC_0(VAR_3, &VAR_9);


 if (VAR_6 == ((time_t) -1))
  VAR_11 = ((void*)0);
 else
 {
  time_t VAR_12 = FUNC_4(((void*)0));

  if (VAR_6 > VAR_12)
   VAR_10.tv_sec = VAR_6 - VAR_12;
  else
   VAR_10.tv_sec = 0;
  VAR_10.tv_usec = 0;
  VAR_11 = &VAR_10;
 }

 return FUNC_3(VAR_3 + 1, &VAR_7, &VAR_8,
      &VAR_9, VAR_11);

}
