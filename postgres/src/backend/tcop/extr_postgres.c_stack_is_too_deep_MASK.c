
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 long VAR_0 ;
 int * VAR_1 ;
 char* VAR_2 ;

bool
FUNC_1(void)
{
 char VAR_3;
 long VAR_4;




 VAR_4 = (long) (VAR_2 - &VAR_3);




 if (VAR_4 < 0)
  VAR_4 = -VAR_4;
 if (VAR_4 > VAR_0 &&
  VAR_2 != ((void*)0))
  return 1;
 return 0;
}
