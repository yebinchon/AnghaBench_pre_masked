
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int fd_set ;



 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct timespec VAR_2 ;
 struct timeval VAR_3 ;
 int FUNC_3 (struct timespec*,int *) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;
 int VAR_4 ;

void FUNC_5(void)
{
 struct timeval VAR_5;
 struct timespec VAR_6;
 fd_set VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7);
 FUNC_0(0, &VAR_7);

 if (VAR_1) {
  FUNC_3(&VAR_2, ((void*)0));
  return;
 }

 VAR_5 = VAR_3;
 VAR_8 = FUNC_4(1, &VAR_7, ((void*)0), ((void*)0), &VAR_5);

 if (VAR_8 == 1) {
  switch (FUNC_2(VAR_4)) {
  case 'q':
   VAR_0 = 1;
   break;
  case 128:




   VAR_1 = 1;

   VAR_6.tv_sec = (VAR_5.tv_sec + VAR_5.tv_usec / 1000000);
   VAR_6.tv_nsec = (VAR_5.tv_usec % 1000000) * 1000;
   FUNC_3(&VAR_6, ((void*)0));
  }
 }
}
