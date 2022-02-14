
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;

bool
FUNC_1(void)
{
 struct stat VAR_2;

 if (FUNC_0(VAR_1, &VAR_2) == 0 ||
  FUNC_0(VAR_0, &VAR_2) == 0)
  return 1;

 return 0;
}
