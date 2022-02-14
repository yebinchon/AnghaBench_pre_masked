
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static int FUNC_1(void)
{
 static struct timeval VAR_0;
 static int VAR_1 = 1;
 struct timeval VAR_2;
 if (VAR_1)
 {
  FUNC_0(&VAR_0, ((void*)0));
  VAR_1 = 0;
 }
 FUNC_0(&VAR_2, ((void*)0));
 return (VAR_2.tv_sec - VAR_0.tv_sec) * 1000 + (VAR_2.tv_usec - VAR_0.tv_usec) / 1000;
}
