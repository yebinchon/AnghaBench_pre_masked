
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itimerspec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int,int ,struct itimerspec*,int *) ;

int FUNC_2(void)
{
 struct itimerspec VAR_2;

 int VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return 1;

 if (FUNC_1(VAR_3, 0, &VAR_2, ((void*)0)) != 0)
  return 1;

 return 0;
}
