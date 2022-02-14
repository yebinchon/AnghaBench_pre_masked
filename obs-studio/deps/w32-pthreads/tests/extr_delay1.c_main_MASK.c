
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long member_0; long member_1; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct timespec*) ;

int
FUNC_2(int VAR_0, char * VAR_1[])
{
  struct timespec VAR_2 = {1L, 500000000L};

  FUNC_0(FUNC_1(&VAR_2) == 0);

  return 0;
}
