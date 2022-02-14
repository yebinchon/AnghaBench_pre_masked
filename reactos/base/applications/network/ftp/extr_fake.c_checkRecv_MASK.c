
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
typedef int fd_set ;
typedef int SOCKET ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int *,int *,struct timeval*) ;
 int VAR_1 ;

int FUNC_4(SOCKET VAR_2)
{
   int VAR_3;
   fd_set VAR_4;
   struct timeval VAR_5;
   VAR_5.tv_sec = 60;

   FUNC_1(&VAR_4);

   FUNC_0(VAR_2, &VAR_4);

   VAR_3 = FUNC_3(0, &VAR_4, ((void*)0), ((void*)0), &VAR_5);

   if (VAR_3 == VAR_0)
      FUNC_2(VAR_1, "Socket Error");

   return VAR_3;
}
