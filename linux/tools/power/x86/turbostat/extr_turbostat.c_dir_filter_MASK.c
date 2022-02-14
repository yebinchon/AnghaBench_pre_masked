
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int * d_name; } ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(const struct dirent *VAR_0)
{
 if (FUNC_0(VAR_0->d_name[0]))
  return 1;
 else
  return 0;
}
