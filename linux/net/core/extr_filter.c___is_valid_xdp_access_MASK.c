
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {int dummy; } ;
typedef int __u32 ;



__attribute__((used)) static bool FUNC_0(int VAR_0, int VAR_1)
{
 if (VAR_0 < 0 || VAR_0 >= sizeof(struct xdp_md))
  return 0;
 if (VAR_0 % VAR_1 != 0)
  return 0;
 if (VAR_1 != sizeof(__u32))
  return 0;

 return 1;
}
