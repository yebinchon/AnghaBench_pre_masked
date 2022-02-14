
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_2(int VAR_5, fd_set *VAR_6, bool *VAR_7)
{
 int VAR_8;
 fd_set VAR_9 = *VAR_6;

 if (VAR_0)
 {
  *VAR_7 = 1;
  return -1;
 }
 else
  *VAR_7 = 0;

 for (;;)
 {




  struct timeval *VAR_10;





  VAR_10 = ((void*)0);


  *VAR_6 = VAR_9;
  VAR_8 = FUNC_1(VAR_5 + 1, VAR_6, ((void*)0), ((void*)0), VAR_10);
  if (VAR_8 < 0 && VAR_4 == VAR_1)
   continue;
  if (VAR_8 < 0 || VAR_0)
   *VAR_7 = 1;
  if (VAR_8 == 0)
   continue;
  break;
 }

 return VAR_8;
}
