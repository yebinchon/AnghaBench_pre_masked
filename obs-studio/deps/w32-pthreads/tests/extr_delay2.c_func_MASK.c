
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_0; long member_1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct timespec*) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;

void *
FUNC_5(void * VAR_2)
{
  struct timespec VAR_3 = {5, 500000000L};

  FUNC_0(FUNC_4(&VAR_0) == 0);




  FUNC_2(VAR_1, &VAR_0);
  FUNC_0(FUNC_3(&VAR_3) == 0);
  FUNC_1(1);




  return (void *)(size_t)1;
}
