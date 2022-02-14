
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; } ;
typedef scalar_t__ __u64 ;


 int FUNC_0 (char const*,scalar_t__*) ;

int
FUNC_1(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 __u64 *VAR_3 = (__u64 *)VAR_0->value;

 if (VAR_2)
  return 0;




 if (*VAR_3)
  return -1;

 return FUNC_0(VAR_1, VAR_3);
}
