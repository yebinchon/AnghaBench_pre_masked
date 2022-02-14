
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_filter {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct sock_filter *VAR_1,
    unsigned int VAR_2)
{
 if (VAR_1 == ((void*)0))
  return 0;
 if (VAR_2 == 0 || VAR_2 > VAR_0)
  return 0;

 return 1;
}
